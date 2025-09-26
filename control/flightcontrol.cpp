#include "flightcontrol.h"
#include "ui_flightcontrol.h"
#include "mavlink/common/mavlink_msg_servo_output_raw.h"
#include <QMap>
#include <QEventLoop>

// 配置参数
const quint16 LOCAL_PORT = 14550;    // 本地监听端口
quint16 REMOTE_PORT = 14550;   // 飞控端口
QHostAddress REMOTE_IP = QHostAddress("127.0.0.1"); // 飞控IP (默认为 SITL)
// QHostAddress REMOTE_IP = QHostAddress("192.168.2.2"); // 飞控IP (默认为 SITL)
const uint8_t SYSTEM_ID = 1;          // 本机系统ID
const uint8_t COMPONENT_ID = MAV_COMP_ID_AUTOPILOT1; // 组件ID

mavlink_system_t sysid_compid = {255, 0};   // 本机 system/component ID（255 常用于地面站）
uint8_t target_system = 1;


// ArduSub 按钮功能映射表
QMap<QString, int16_t> ARDUSUB_BTN_FUNCTIONS = {
    {"disabled", 0},
    {"shift", 1},
    {"arm_toggle", 2},
    {"arm", 3},
    {"disarm", 4},
    {"mode_manual", 5},
    {"mode_stabilize", 6},
    {"mode_depth_hold", 7},
    {"mode_poshold", 8},
    {"mode_auto", 9},
    {"mount_center", 21},
    {"mount_tilt_up", 22},
    {"mount_tilt_down", 23},
    {"lights1_brighter", 32},
    {"lights1_dimmer", 33},
    {"lights2_brighter", 35},
    {"lights2_dimmer", 36},
    {"gain_inc", 42},
    {"gain_dec", 43},
    {"input_hold_set", 48},
    {"servo_1_inc", 61},
    {"servo_1_dec", 62},
    {"servo_2_min", 68},
    {"servo_2_max", 69},
    {"servo_3_min", 73},
    {"servo_3_max", 74}
};

FlightControl::FlightControl(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::FlightControl)
{
    ui->setupUi(this);

    // 创建 UDP 套接字
    udpSocket = new QUdpSocket(this);
    if (!udpSocket->bind(QHostAddress::Any, LOCAL_PORT)) {
        qCritical() << "绑定端口失败:" << udpSocket->errorString();
        QCoreApplication::exit(1);
    }

    connect(udpSocket, &QUdpSocket::readyRead,
            this, &FlightControl::readPendingDatagrams);

    // 设置远程地址
    remoteAddress = QHostAddress(REMOTE_IP);

    // 定时发送心跳
    heartbeatTimer = new QTimer(this);
    connect(heartbeatTimer, &QTimer::timeout,
            this, &FlightControl::sendHeartbeat);
    heartbeatTimer->start(1000); // 每秒一次

    qInfo() << "MAVLink 地面站已启动，监听端口:" << LOCAL_PORT;
    qInfo() << "目标飞控:" << REMOTE_IP << ":" << REMOTE_PORT;

    // 手柄相关
    m_gamepad = new QGamepad(0, this);
    gamePad_init();


    // 灯光状态
    light1_level = ui->verticalSlider->value();
    light2_level = ui->verticalSlider_2->value();

    // 控件相关
    ui->gaugeCompassPan->raise();
    ui->gaugePlane->raise();

    // 控制初始化
    vale_send=0;
    value_left_axisX_a=0;
    value_left_axisY_a=0;
    value_right_axisX_a=0;
    value_right_axisY_a=0;

    timer_send = new QTimer(this);
    connect(timer_send,SIGNAL(timeout()),this,SLOT(btn_control()));
    timer_send->start(100);

    /*-----------------美化combox控件------------------------*/
    ui->Control_mode->setView(new QListView());
    ui->Control_mode->setStyleSheet(
        "QComboBox {"
        "   border: 1px solid #dcdcdc;"
        "   border-radius: 4px;"
        "   padding: 5px 10px;"
        "   background: white;"
        "   color: #333;"
        "   font: 13px 'Segoe UI';"
        "}"

        "QComboBox::drop-down {"
        "   subcontrol-origin: padding;"
        "   subcontrol-position: top right;"
        "   width: 25px;"
        "   border-left: 1px solid #dcdcdc;"
        "}"
        "QComboBox::down-arrow {"
        "   width: 13px;"
        "   height: 13px;"
        "}"
        "QComboBox QAbstractItemView {"
        "   background-color: #F8F8F8;"      // 下拉列表背景
        "   color: #444444;"                 // 下拉项字体颜色
        "   selection-background-color: #4CAF50;"  // 选中项背景
        "   selection-color: white;"         // 选中项字体颜色
        "   border: 1px solid #D3D3D3;"      // 下拉列表边框
        "   outline: none;"                  // 移除焦点虚线框
        "   font: 13px 'Microsoft YaHei';"   // 下拉项字体
        "   min-width: 150px;"               // 下拉列表最小宽度
        "}"
        );


}

FlightControl::~FlightControl()
{
    // 关闭时钟
    heartbeatTimer->stop();
    timer_send->stop();
    delete ui;
}


// ------------------- 初始化按钮功能 -----------------------
/**
 * @brief 设置按钮功能参数
 *
 * @param autopilot_sysid 目标飞控系统ID
 * @param autopilot_compid 目标飞控组件ID
 * @param button 按钮编号 (0-15)
 * @param function 功能名称或数值
 * @param shifted 是否为组合键功能
 * @param timeout_ms 超时时间（毫秒）
 * @return true 设置成功
 * @return false 设置失败
 */
bool FlightControl::set_button_function(uint8_t autopilot_sysid,
                                     uint8_t autopilot_compid,
                                     uint8_t button,
                                     const QVariant& function,
                                     bool shifted,
                                     uint32_t timeout_ms)
{
    // 1. 验证按钮编号
    if (button > 15) {
        qWarning() << "Invalid button number:" << button;
        return false;
    }

    // 2. 确定参数名称
    QString param_prefix = shifted ? "BTN%1_SFUNCTION" : "BTN%1_FUNCTION";
    QString param_name = param_prefix.arg(button);

    // 3. 解析功能值
    int16_t function_value = 0;

    if (function.type() == QVariant::String) {
        // 字符串功能名
        QString func_name = function.toString().toLower();
        if (ARDUSUB_BTN_FUNCTIONS.contains(func_name)) {
            function_value = ARDUSUB_BTN_FUNCTIONS[func_name];
        } else {
            qWarning() << "Unknown function name:" << func_name;
            return false;
        }
    } else if (function.canConvert<int>()) {
        // 数值功能
        function_value = function.toInt();
    } else {
        qWarning() << "Invalid function type";
        return false;
    }

    // 4. 设置参数
    return set_param(autopilot_sysid, autopilot_compid,
                     param_name, function_value,
                     MAV_PARAM_TYPE_INT16, timeout_ms);
}

/**
 * @brief 设置MAVLink参数
 *
 * @param target_sysid 目标系统ID
 * @param target_compid 目标组件ID
 * @param param_name 参数名称
 * @param param_value 参数值
 * @param param_type 参数类型
 * @param timeout_ms 超时时间（毫秒）
 * @return true 设置成功
 * @return false 设置失败
 */
bool FlightControl::set_param(uint8_t target_sysid,
                           uint8_t target_compid,
                           const QString& param_name,
                           float param_value,
                           uint8_t param_type,
                           uint32_t timeout_ms)
{
    // 1. 准备参数名称（确保以null结尾）
    QByteArray param_name_ba = param_name.toUtf8();
    char param_id[16] = {0}; // MAVLink参数名最长为16字符
    strncpy(param_id, param_name_ba.constData(), sizeof(param_id) - 1);

    // 2. 发送PARAM_SET消息
    mavlink_message_t msg;
    mavlink_msg_param_set_pack(
        MAVLINK_COMM_0,        // 发送方系统ID
        MAV_COMP_ID_MISSIONPLANNER, // 发送方组件ID
        &msg,                   // 输出消息
        target_sysid,           // 目标系统ID
        target_compid,          // 目标组件ID
        param_id,               // 参数ID
        param_value,            // 参数值
        param_type              // 参数类型
        );

    // 3. 发送消息
    uint8_t buf[MAVLINK_MAX_PACKET_LEN];
    uint16_t len = mavlink_msg_to_send_buffer(buf, &msg);
    udpSocket->writeDatagram((const char*)buf, len, remoteAddress, REMOTE_PORT);

    // 4. 等待确认
    QEventLoop loop;
    QTimer timeout_timer;
    timeout_timer.setSingleShot(true);
    QObject::connect(&timeout_timer, &QTimer::timeout, &loop, &QEventLoop::quit);

    bool param_set_confirmed = false;
    auto message_handler = [&](const mavlink_message_t* msg) {
        if (msg->msgid == MAVLINK_MSG_ID_PARAM_VALUE) {
            mavlink_param_value_t param_val;
            mavlink_msg_param_value_decode(msg, &param_val);

            // 比较参数名
            if (strncmp(param_val.param_id, param_id, sizeof(param_id)) == 0) {
                param_set_confirmed = true;
                loop.quit();
            }
        }
    };

    MavlinkCommunicator *mavlinkcommunicator = new MavlinkCommunicator();

    // 注册临时消息处理器
    mavlinkcommunicator->register_temp_message_handler(message_handler);

    // 启动超时计时器
    timeout_timer.start(timeout_ms);
    loop.exec();

    // 注销消息处理器
    mavlinkcommunicator->unregister_temp_message_handler(message_handler);

    return param_set_confirmed;
}

// 初始化按钮功能
void FlightControl::init_button_functions(uint8_t target_sysid, uint8_t target_compid)
{
    // 设置非组合键功能
    set_button_function(target_sysid, target_compid, 10, "lights2_brighter"); // 35
    set_button_function(target_sysid, target_compid, 9,  "lights2_dimmer");   // 36
    set_button_function(target_sysid, target_compid, 13, "lights1_dimmer");   // 33
    set_button_function(target_sysid, target_compid, 14, "lights1_brighter"); // 32
    set_button_function(target_sysid, target_compid, 0,  "servo_3_min");      // 73
    set_button_function(target_sysid, target_compid, 3,  "servo_3_max");      // 74
    set_button_function(target_sysid, target_compid, 1,  "servo_1_inc");      // 61
    set_button_function(target_sysid, target_compid, 2,  "servo_1_dec");      // 62
    set_button_function(target_sysid, target_compid, 11, "mount_tilt_up");    // 22
    set_button_function(target_sysid, target_compid, 12, "mount_tilt_down");  // 23
    set_button_function(target_sysid, target_compid, 8,  "input_hold_set");   // 48
    set_button_function(target_sysid, target_compid, 5,  "shift");            // 1
    set_button_function(target_sysid, target_compid, 7,  "shift");            // 1

    // 设置组合键功能
    set_button_function(target_sysid, target_compid, 0, "mode_manual", true);     // 5
    set_button_function(target_sysid, target_compid, 1, "mode_stabilize", true);  // 6
    set_button_function(target_sysid, target_compid, 3, "mode_depth_hold", true); // 7
    set_button_function(target_sysid, target_compid, 2, "mount_center", true);    // 21
}



// ------------------------- 连接初始化 --------------------------
void FlightControl::init_connect(){
    // connect(ui->handleEnabled, &SwitchButton::checkedChanged, this, &MainWindow::armedSwitch);
}


void FlightControl::on_handleEnabled_checkedChanged(bool checked)
{
    armedSwitch(checked);
}

// arm状态转换
void FlightControl::armedSwitch(bool arm){
    float param1;

    if(arm){
        param1 = 1.0f;
    } else {
        param1 = 0.0f;
    }

    mavlink_message_t msg;
    mavlink_msg_command_long_pack(
        255,
        190,
        &msg,
        target_system,
        1,
        MAV_CMD_COMPONENT_ARM_DISARM,
        0,      // confirmation
        param1, // arm/disarm
        0, 0, 0, 0, 0, 0 // 其他参数
        );

    uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
    uint16_t len = mavlink_msg_to_send_buffer(buffer, &msg);

    qint64 bytesSent = udpSocket->writeDatagram(
        reinterpret_cast<const char*>(buffer),
        len,
        REMOTE_IP,
        REMOTE_PORT
        );

    if (bytesSent != len) {
        qWarning() << "Failed to send command:" << udpSocket->errorString();
    }

}


//------------------------ 手柄初始化 --------------------------
void FlightControl::gamePad_init()
{
    value_left_axisX=0;
    value_left_axisY=0;
    value_right_axisX=0;
    value_right_axisY=0;

    //
    //qDebug()<<m_gamepad->isConnected();

    connect(m_gamepad, &QGamepad::axisLeftXChanged, this, [this](double value){
        value_left_axisX=value;
        qDebug()<<value_left_axisX;
    });

    connect(m_gamepad, &QGamepad::axisLeftYChanged, this, [this](double value){
        value_left_axisY=value;
        qDebug()<<value_left_axisY;
    });

    connect(m_gamepad, &QGamepad::axisRightXChanged, this, [this](double value){
        value_right_axisX=value;
        qDebug()<<value_right_axisX;
    });

    connect(m_gamepad, &QGamepad::axisRightYChanged, this, [this](double value){
        value_right_axisY=value;
        qDebug()<<value_right_axisY;
    });

    connect(m_gamepad, &QGamepad::buttonL2Changed, this, [this](double value){
        value_left_button_trigger=value;
        //        //qDebug()<<value_left_button_trigger;
    });

    connect(m_gamepad, &QGamepad::buttonR2Changed, this, [this](double value){
        value_right_button_trigger=value;
        //        //qDebug()<<value_right_button_trigger;
    });

    connect(m_gamepad, SIGNAL(buttonAChanged(bool)), this, SLOT(GamePad_B_btn_pressed(bool)));
    connect(m_gamepad, SIGNAL(buttonBChanged(bool)), this, SLOT(GamePad_A_btn_pressed(bool)));
    connect(m_gamepad, SIGNAL(buttonXChanged(bool)), this, SLOT(GamePad_X_btn_pressed(bool)));
    connect(m_gamepad, SIGNAL(buttonYChanged(bool)), this, SLOT(GamePad_Y_btn_pressed(bool)));
    connect(m_gamepad, SIGNAL(buttonL1Changed(bool)), this, SLOT(GamePad_LB_btn_pressed(bool)));
    connect(m_gamepad, SIGNAL(buttonR1Changed(bool)), this, SLOT(GamePad_RB_btn_pressed(bool)));
    // connect(m_gamepad, SIGNAL(buttonL3Changed(bool)), this, SLOT(GamePad_Left_axis_btn_pressed(bool)));
    // connect(m_gamepad, SIGNAL(buttonR3Changed(bool)), this, SLOT(GamePad_Right_axis_btn_pressed(bool)));
    connect(m_gamepad, SIGNAL(buttonSelectChanged(bool)), this, SLOT(GamePad_Back_btn_pressed(bool)));
    connect(m_gamepad, SIGNAL(buttonStartChanged(bool)), this, SLOT(GamePad_Start_btn_pressed(bool)));

    connect(m_gamepad, SIGNAL(buttonUpChanged(bool)), this, SLOT(GamePad_Up_btn_pressed(bool)));
    connect(m_gamepad, SIGNAL(buttonDownChanged(bool)), this, SLOT(GamePad_Down_btn_pressed(bool)));
    connect(m_gamepad, SIGNAL(buttonLeftChanged(bool)), this, SLOT(GamePad_Left_btn_pressed(bool)));
    connect(m_gamepad, SIGNAL(buttonRightChanged(bool)), this, SLOT(GamePad_Right_btn_pressed(bool)));


}


// --------------------- 数据解析功能 --------------------------
void FlightControl::readPendingDatagrams()
{

    while (udpSocket->hasPendingDatagrams()) {
        QByteArray datagram;
        datagram.resize(udpSocket->pendingDatagramSize());

        // QHostAddress sender;
        // quint16 senderPort;

        udpSocket->readDatagram(datagram.data(), datagram.size(),
                                &REMOTE_IP, &REMOTE_PORT);

        // qDebug() << "目标IP:" << REMOTE_IP << REMOTE_PORT;

        processMavlinkData(datagram);
    }
}

void FlightControl::sendHeartbeat()
{
    mavlink_message_t msg;
    uint8_t buffer[MAVLINK_MAX_PACKET_LEN];

    // 打包心跳消息
    mavlink_msg_heartbeat_pack(
        SYSTEM_ID,
        COMPONENT_ID,
        &msg,
        MAV_TYPE_GCS,           // 地面站类型
        MAV_AUTOPILOT_INVALID,   // 非自动驾驶仪
        0,                      // 自定义模式
        0,                      // 基础模式
        MAV_STATE_STANDBY       // 系统状态
        );

    // 序列化消息
    uint16_t len = mavlink_msg_to_send_buffer(buffer, &msg);

    // 发送UDP数据报
    udpSocket->writeDatagram(
        reinterpret_cast<const char*>(buffer),
        len,
        remoteAddress,
        REMOTE_PORT
        );

    // qDebug()  << "发送心跳包" <<remoteAddress.toString();
    // qDebug() << "发送" << remoteAddress.toString();
}



// ------------------------- 控制功能 ----------------------------
void FlightControl::btn_control()
{
    // if(vale_send>=12)
    // {
    //     vale_send=0;
    //     value_left_axisX_a=0;
    //     value_left_axisY_a=0;
    //     value_right_axisX_a=0;
    //     value_right_axisY_a=0;
    //     return;

    // }
    // vale_send++;

    y_speed_value = value_left_axisY *127*(-1) +128;
    x_speed_value = value_left_axisX *127 +128;

    z_speed_value = value_right_axisY *127*(-1) +128;
    yaw_speed_value = value_right_axisX *127 +128;

    // qDebug() << "灵活运动";

    double x = (int)y_speed_value;
    double y = (int)x_speed_value;
    double z = (int)z_speed_value;
    double r = (int)yaw_speed_value;

    if(x < 127){
        qDebug() << "反向运行";
        x -= 127;
        x *= 3.5;
    }
    else if(x > 128){
        qDebug() << "正向运行";
        x -= 128;
        x *= 3.5;
    } else {
        // qDebug() << "停止";
        x = 0;
    }

    x = (int)x;
    x *= 4.5;

    // y value
    if(y < 127){
        qDebug() << "反向运行";
        y -= 127;
        y *= 3.5;
    }
    else if(y > 128){
        qDebug() << "正向运行";
        y -= 128;
        y *= 3.5;
    } else {
        // qDebug() << "停止";
        y = 0;
    }

    y = (int)y;
    y *= 4.5;


    // z value
    if(z < 127){
        qDebug() << "反向运行";
        z -= 127;
        z *= 3.5;
    }
    else if(z > 128){
        qDebug() << "正向运行";
        z -= 128;
        z *= 3.5;
    } else {
        // qDebug() << "停止";
        z = 0;
    }

    z = (int)z;
    z = z * 2.25 + 500;


    // r value
    if(r < 127){
        qDebug() << "反向运行";
        r -= 127;
        r *= 3.5;
    }
    else if(r > 128){
        qDebug() << "正向运行";
        r -= 128;
        r *= 3.5;
    } else {
        // qDebug() << "停止";
        r = 0;
    }

    r = (int)r;
    r *= 4.5;


    send_manual_control_udp(udpSocket, remoteAddress, REMOTE_PORT, sysid_compid, target_system, x, y, z, r, {0});
    send_manual_control_udp(udpSocket, remoteAddress, REMOTE_PORT, sysid_compid, target_system, x, y, z, r, {0});

}



// ------------------------- 控制灯光 ------------------------------
void FlightControl::on_Light1_Bri_clicked()
{
    send_manual_control_udp(udpSocket, remoteAddress, REMOTE_PORT, sysid_compid, target_system,0, 0, 500, 0, {14});
    send_manual_control_udp(udpSocket, remoteAddress, REMOTE_PORT, sysid_compid, target_system,0, 0, 500, 0, {0});
}

void FlightControl::on_Light1_Dim_clicked()
{
    send_manual_control_udp(udpSocket, remoteAddress, REMOTE_PORT, sysid_compid, target_system,0, 0, 500, 0, {13});
    send_manual_control_udp(udpSocket, remoteAddress, REMOTE_PORT, sysid_compid, target_system,0, 0, 500, 0, {0});
}

void FlightControl::on_Light2_Bri_clicked()
{
    send_manual_control_udp(udpSocket, remoteAddress, REMOTE_PORT, sysid_compid, target_system,0, 0, 500, 0, {10});
    send_manual_control_udp(udpSocket, remoteAddress, REMOTE_PORT, sysid_compid, target_system,0, 0, 500, 0, {0});
}

void FlightControl::on_Light2_Dim_clicked()
{
    send_manual_control_udp(udpSocket, remoteAddress, REMOTE_PORT, sysid_compid, target_system,0, 0, 500, 0, {9});
    send_manual_control_udp(udpSocket, remoteAddress, REMOTE_PORT, sysid_compid, target_system,0, 0, 500, 0, {0});
}



// -------------------------------- 手柄按钮功能 -------------------------------------------

// 按钮left
void FlightControl::GamePad_Left_btn_pressed(bool pressed)
{
    // QMessageBox::information(this,"按键","left");
    if(pressed){
        light1_isUpdatingFromExternal = true;

        send_manual_control_udp(udpSocket, remoteAddress, REMOTE_PORT, sysid_compid, target_system,0, 0, 500, 0, {13});
        send_manual_control_udp(udpSocket, remoteAddress, REMOTE_PORT, sysid_compid, target_system,0, 0, 500, 0, {0});
        return;
    }
}

// 按钮right
void FlightControl::GamePad_Right_btn_pressed(bool pressed)
{
    // QMessageBox::information(this,"按钮","right");
    if(pressed){
        light1_isUpdatingFromExternal = true;

        send_manual_control_udp(udpSocket, remoteAddress, REMOTE_PORT, sysid_compid, target_system,0, 0, 500, 0, {14});
        send_manual_control_udp(udpSocket, remoteAddress, REMOTE_PORT, sysid_compid, target_system,0, 0, 500, 0, {0});
        return;
    }

}


void FlightControl::GamePad_X_btn_pressed(bool pressed)
{
    if(pressed){
        send_manual_control_udp(udpSocket, remoteAddress, REMOTE_PORT, sysid_compid, target_system,0, 0, 500, 0, {1});
        send_manual_control_udp(udpSocket, remoteAddress, REMOTE_PORT, sysid_compid, target_system,0, 0, 500, 0, {0});
        return;
    }
}

void FlightControl::GamePad_Y_btn_pressed(bool pressed)
{

}

void FlightControl::GamePad_A_btn_pressed(bool pressed)
{

}

void FlightControl::GamePad_B_btn_pressed(bool pressed)
{
    if(pressed){
        send_manual_control_udp(udpSocket, remoteAddress, REMOTE_PORT, sysid_compid, target_system,0, 0, 500, 0, {2});
        send_manual_control_udp(udpSocket, remoteAddress, REMOTE_PORT, sysid_compid, target_system,0, 0, 500, 0, {0});
        return;
    }
}

// 按钮arm
void FlightControl::GamePad_Back_btn_pressed(bool pressed)
{
    armedSwitch(false);
    // if(pressed){
    //     send_manual_control_udp(udpSocket, remoteAddress, REMOTE_PORT, sysid_compid, target_system,0, 0, 500, 0, {4});
    //     send_manual_control_udp(udpSocket, remoteAddress, REMOTE_PORT, sysid_compid, target_system,0, 0, 500, 0, {0});
    //     return;
    // }
}

// 按钮disarm
void FlightControl::GamePad_Start_btn_pressed(bool pressed)
{
    armedSwitch(true);
    // if(pressed){
    //     send_manual_control_udp(udpSocket, remoteAddress, REMOTE_PORT, sysid_compid, target_system,0, 0, 500, 0, {6});
    //     send_manual_control_udp(udpSocket, remoteAddress, REMOTE_PORT, sysid_compid, target_system,0, 0, 500, 0, {0});
    //     return;
    // }
}

// 按钮LB
void FlightControl::GamePad_LB_btn_pressed(bool pressed)
{
    // QMessageBox::information(this,"按钮","LB");
    if(pressed){
        light2_isUpdatingFromExternal = true;
        send_manual_control_udp(udpSocket, remoteAddress, REMOTE_PORT, sysid_compid, target_system,0, 0, 500, 0, {9});
        send_manual_control_udp(udpSocket, remoteAddress, REMOTE_PORT, sysid_compid, target_system,0, 0, 500, 0, {0});
        return;
    }
}

// 按钮RB
void FlightControl::GamePad_RB_btn_pressed(bool pressed)
{
    // QMessageBox::information(this,"按钮","RB");
    if(pressed){
        light2_isUpdatingFromExternal = true;
        send_manual_control_udp(udpSocket, remoteAddress, REMOTE_PORT, sysid_compid, target_system,0, 0, 500, 0, {10});
        send_manual_control_udp(udpSocket, remoteAddress, REMOTE_PORT, sysid_compid, target_system,0, 0, 500, 0, {0});
        return;
    }
}

void FlightControl::GamePad_Up_btn_pressed(bool pressed)
{

}

void FlightControl::GamePad_Down_btn_pressed(bool pressed)
{

}



void FlightControl::send_manual_control_udp(QUdpSocket *udpSocket, const QHostAddress &host, quint16 port, mavlink_system_t sysid_compid, uint8_t target_system, int16_t x, int16_t y, int16_t z, int16_t r, const QVector<int> &pressed_buttons)
{
    uint16_t buttons_bitfield = 0;
    for (int button : pressed_buttons) {
        if (button >= 0 && button < 16) {
            buttons_bitfield |= (1 << button);
        }
    }

    // 打包 MAVLink 消息
    mavlink_message_t msg;
    mavlink_msg_manual_control_pack(
        sysid_compid.sysid,
        sysid_compid.compid,
        &msg,
        target_system,  // 控制目标系统 ID
        x, y, z, r,
        buttons_bitfield,
        0,                    // buttons2 (可设为 0)
        0,                    // enabled_extensions（通常为 0）
        0, 0,                 // s, t
        0, 0, 0, 0, 0, 0      // aux1 ~ aux6
        );



    // 序列化消息为字节流
    uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
    uint16_t len = mavlink_msg_to_send_buffer(buffer, &msg);

    // 通过 UDP 发送
    qint64 bytesSent = udpSocket->writeDatagram(reinterpret_cast<const char*>(buffer), len, host, port);

    // 7. 错误检查
    // if (bytesSent == len) {
    //     // UDP 层发送成功
    //     qDebug() << "UDP packet sent successfully";
    // }

    // if (bytesSent != len) {
    //     qWarning() << "Failed to send full MAVLink message. Sent"
    //                << bytesSent << "of" << len << "bytes";
    // }
}




// --------------------- 数据解析功能 -----------------------

void FlightControl::processMavlinkData(const QByteArray &data)
{
    mavlink_status_t status;
    mavlink_message_t msg;

    for (int i = 0; i < data.size(); i++) {
        uint8_t byte = static_cast<uint8_t>(data[i]);

        // 解析MAVLink字节
        if (mavlink_parse_char(MAVLINK_COMM_0, byte, &msg, &status)) {
            handleMavlinkMessage(msg);
        }
    }
}

void FlightControl::handleMavlinkMessage(const mavlink_message_t &msg)
{
    // 获取当前时间戳
    QString timestamp = QDateTime::currentDateTime().toString("hh:mm:ss.zzz");



    // 打印消息基本信息
    // qDebug().noquote()
    //     << QString("[%1] SYS:%2 COMP:%3 MSGID:%4 (%5 bytes)")
    //            .arg(timestamp)
    //            .arg(msg.sysid)
    //            .arg(msg.compid)
    //            .arg(msg.msgid)
    //            .arg(msg.len);

    // 根据消息类型处理
    switch (msg.msgid) {

    // 心跳包消息
    case MAVLINK_MSG_ID_HEARTBEAT:
    {
        mavlink_heartbeat_t hb;
        mavlink_msg_heartbeat_decode(&msg, &hb);

        // 首次收到心跳
        if (!m_heartbeatReceived) {
            m_heartbeatReceived = true;
            qInfo() << "首次收到飞控心跳";

            // 发送初始心跳响应
            sendHeartbeat();
        }

        // m_lastHeartbeatTime->restart();

        isArmed = hb.base_mode & MAV_MODE_FLAG_SAFETY_ARMED;
        ui->handleEnabled->setChecked(hb.base_mode & MAV_MODE_FLAG_SAFETY_ARMED);
        // qDebug() << (hb.base_mode & MAV_MODE_FLAG_SAFETY_ARMED);
        // target_system = msg.sysid;
        // sysid_compid = msg.compid;

        // 飞控状态获取
        // 系统状态检查 (关键!)
        bool isReady = false;
        switch(hb.system_status) {
        case MAV_STATE_STANDBY:      // 就绪状态
            // case MAV_STATE_ACTIVE:       // 活跃状态
            // case MAV_STATE_CRITICAL:     // 紧急状态（可接受部分命令）
            isReady = true;
            break;
        default:                     // 其他状态不应发送命令
            isReady = false;
        }

        m_flightControllerReady = isReady;

        // if (property("firstRun").isNull() && m_flightControllerReady) {
        //     // 这里是要只执行一次的代码
        //     connectWindow->close();

        //     QMessageBox::information(this, "信息", "飞控连接成功");
        //     setProperty("firstRun", false);
        // }

        break;
    }

        // 深度信息
    case MAVLINK_MSG_ID_VFR_HUD:
    {
        mavlink_vfr_hud_t vfr_hud;
        mavlink_msg_vfr_hud_decode(&msg, &vfr_hud);

        double depth = static_cast<double>(vfr_hud.alt);
        depth = abs(depth);
        ui->Depth_show->setText(QString::number(depth,'f',2) + " m");
        ui->rulerBar->setValue(depth * 100);
        break;
    }

        // case MAVLINK_MSG_ID_HEARTBEAT:
        // {
        //     mavlink_heartbeat_t heartbeat;
        //     mavlink_msg_heartbeat_decode(&msg, &heartbeat);

        //     qInfo().noquote()
        //         << "  HEARTBEAT:"
        //         << "Type:" << heartbeat.type
        //         << "Autopilot:" << heartbeat.autopilot
        //         << "BaseMode:" << QString("0x%1").arg(heartbeat.base_mode, 0, 16)
        //         << "Status:" << heartbeat.system_status;
        //     break;
        // }

        // case MAVLINK_MSG_ID_SYS_STATUS:
        // {
        //     mavlink_sys_status_t sys_status;
        //     mavlink_msg_sys_status_decode(&msg, &sys_status);

        //     qInfo().noquote()
        //         << "  SYS_STATUS:"
        //         << "Battery:" << QString("%1V").arg(sys_status.voltage_battery / 1000.0, 0, 'f', 1)
        //         << "Load:" << sys_status.load << "%";
        //     break;
        // }

        // case MAVLINK_MSG_ID_GPS_RAW_INT:
        // {
        //     mavlink_gps_raw_int_t gps;
        //     mavlink_msg_gps_raw_int_decode(&msg, &gps);

        //     qInfo().noquote()
        //         << "  GPS:"
        //         << "Fix:" << gps.fix_type
        //         << "Sats:" << gps.satellites_visible
        //         << "Lat/Lon:" << QString("%1/%2")
        //                              .arg(gps.lat / 1e7, 0, 'f', 7)
        //                              .arg(gps.lon / 1e7, 0, 'f', 7);
        //     break;
        // }

        // 姿态信息
    case MAVLINK_MSG_ID_ATTITUDE:
    {
        mavlink_attitude_t att;
        mavlink_msg_attitude_decode(&msg, &att);

        const double rad2deg = 180.0 / M_PI;
        // qInfo().noquote()
        //     << "  ATTITUDE:"
        //     << "Roll:" << QString("%1°").arg(att.roll * rad2deg, 0, 'f', 1)
        //     << "Pitch:" << QString("%1°").arg(att.pitch * rad2deg, 0, 'f', 1)
        //     << "Yaw:" << QString("%1°").arg(att.yaw * rad2deg, 0, 'f', 1);

        ui->pitchValue->setText(QString::number(att.pitch * rad2deg,'f',1)+"°");
        ui->yawValue->setText(QString::number(att.yaw * rad2deg,'f',1)+"°");
        ui->rollValue->setText(QString::number(att.roll * rad2deg,'f',1)+"°");

        ui->gaugeCompassPan->setValue((int)(att.yaw * rad2deg));
        ui->gaugePlane->setRollValue((int)(att.roll * rad2deg));
        ui->gaugePlane->setDegValue((int)(att.pitch * rad2deg));

        break;
    }

        // 推进器消息
    case MAVLINK_MSG_ID_SERVO_OUTPUT_RAW:
    {
        mavlink_servo_output_raw_t servo;
        mavlink_msg_servo_output_raw_decode(&msg, &servo);

        ui->progressThree_1->setValue1(servo.servo1_raw);
        ui->progressThree_1->setValue2(1900 - servo.servo1_raw);
        ui->progressThree_2->setValue1(servo.servo2_raw);
        ui->progressThree_2->setValue2(1900 - servo.servo2_raw);
        ui->progressThree_3->setValue1(servo.servo3_raw);
        ui->progressThree_3->setValue2(1900 - servo.servo3_raw);
        ui->progressThree_4->setValue1(servo.servo4_raw);
        ui->progressThree_4->setValue2(1900 - servo.servo4_raw);
        ui->progressThree_5->setValue1(servo.servo5_raw);
        ui->progressThree_5->setValue2(1900 - servo.servo5_raw);
        ui->progressThree_6->setValue1(servo.servo6_raw);
        ui->progressThree_6->setValue2(1900 - servo.servo6_raw);
        ui->progressThree_7->setValue1(servo.servo7_raw);
        ui->progressThree_7->setValue2(1900 - servo.servo7_raw);
        ui->progressThree_8->setValue1(servo.servo8_raw);
        ui->progressThree_8->setValue2(1900 - servo.servo8_raw);


        ui->servoChannel_1->setText(QString::number(servo.servo1_raw));
        ui->servoChannel_2->setText(QString::number(servo.servo2_raw));
        ui->servoChannel_3->setText(QString::number(servo.servo3_raw));
        ui->servoChannel_4->setText(QString::number(servo.servo4_raw));
        ui->servoChannel_5->setText(QString::number(servo.servo5_raw));
        ui->servoChannel_6->setText(QString::number(servo.servo6_raw));
        ui->servoChannel_7->setText(QString::number(servo.servo7_raw));
        ui->servoChannel_8->setText(QString::number(servo.servo8_raw));

        break;
    }

        // 灯光消息
    case MAVLINK_MSG_ID_RC_CHANNELS:
    {
        mavlink_rc_channels_t rc_channels;
        mavlink_msg_rc_channels_decode(&msg, &rc_channels);

        int lights[2];
        lights[0] = rc_channels.chan9_raw;
        lights[1] = rc_channels.chan10_raw;

        // ui->progressThree_9->setValue1(rc_channels.chan9_raw);
        // ui->progressThree_9->setValue2(1900 - rc_channels.chan9_raw);
        // ui->progressThree_10->setValue1(rc_channels.chan10_raw);
        // ui->progressThree_10->setValue2(1900 - rc_channels.chan10_raw);

        // ui->servoChannel_9->setText(QString::number(rc_channels.chan9_raw));
        // ui->servoChannel_10->setText(QString::number(rc_channels.chan10_raw));

        if(light1_isUpdatingFromExternal){
            ui->verticalSlider->setValue(int((lights[0] - 1100)/80));
        }

        if(light2_isUpdatingFromExternal){
            ui->verticalSlider_2->setValue(int((lights[1] - 1100)/80));
        }
        break;
    }

        // 速度消息
    case MAVLINK_MSG_ID_GLOBAL_POSITION_INT:
    {
        mavlink_global_position_int_t gpos;
        mavlink_msg_global_position_int_decode(&msg, &gpos);

        float vx = gpos.vx / 100.0f; // cm/s -> m/s
        float vy = gpos.vy / 100.0f;
        float vz = gpos.vz / 100.0f;

        ui->VelocityX->setText(QString::number(vx,'f',2)+" m/s");
        ui->VelocityY->setText(QString::number(vy,'f',2)+" m/s");
        ui->VelocityZ->setText(QString::number(vz,'f',2)+" m/s");

        ui->gaugeWatchX->setValue(vx);
        ui->gaugeWatchY->setValue(vy);
        ui->gaugeWatchZ->setValue(vz);
        break;
    }

        // 加速度消息
    case MAVLINK_MSG_ID_RAW_IMU:
    {
        mavlink_raw_imu_t imu;
        mavlink_msg_raw_imu_decode(&msg, &imu);

        // 加速度原始值，单位是 milli-g（mg）
        // 通常 1g = 1000 mg ≈ 9.81 m/s²
        float ax = imu.xacc / 1000.0f * 9.81f; // 转换为 m/s²
        float ay = imu.yacc / 1000.0f * 9.81f;
        float az = imu.zacc / 1000.0f * 9.81f;

        // 显示在 UI
        ui->AccelX->setText(QString::number(ax, 'f', 2) + " m/s²");
        ui->AccelY->setText(QString::number(ay, 'f', 2) + " m/s²");
        ui->AccelZ->setText(QString::number(az, 'f', 2) + " m/s²");

        break;
    }
        // case MAVLINK_MSG_ID_BATTERY_STATUS:
        // {
        //     mavlink_battery_status_t bat;
        //     mavlink_msg_battery_status_decode(&msg, &bat);

        //     qInfo().noquote()
        //         << "  BATTERY:"
        //         << "Remaining:" << bat.battery_remaining << "%"
        //         << "Voltage:" << bat.voltages[0] / 1000.0 << "V";
        //     break;
        // }

        // case MAVLINK_MSG_ID_RC_CHANNELS:
        // {
        //     mavlink_rc_channels_t rc;
        //     mavlink_msg_rc_channels_decode(&msg, &rc);

        //     qDebug().noquote()
        //         << "  RC_CHANNELS:"
        //         << "Ch1:" << rc.chan1_raw
        //         << "Ch2:" << rc.chan2_raw
        //         << "Ch3:" << rc.chan3_raw
        //         << "Ch4:" << rc.chan4_raw;
        //     break;
        // }

    default:
        // qDebug() << "  未知消息类型:" << msg.msgid;
        break;
    }
}




void FlightControl::on_verticalSlider_actionTriggered(int action)
{
    light1_isUpdatingFromExternal = false;
}


void FlightControl::on_verticalSlider_2_actionTriggered(int action)
{
    light2_isUpdatingFromExternal = false;
}


void FlightControl::on_verticalSlider_valueChanged(int value)
{
    if(light1_isUpdatingFromExternal){
        return;
    }

    if(value > light1_level)
        for(int i=0;i< (value - light1_level);i++)
        {
            on_Light1_Bri_clicked();
            QThread::msleep(50);
        }
    else
        for(int i=0;i< (light1_level - value);i++)
        {
            on_Light1_Dim_clicked();
            QThread::msleep(50);
        }

    light1_level=value;
}


void FlightControl::on_verticalSlider_2_valueChanged(int value)
{
    if(light2_isUpdatingFromExternal){
        return;
    }

    if(value > light2_level)
        for(int i=0;i< (value - light2_level);i++)
        {
            on_Light2_Bri_clicked();
            QThread::msleep(50);
        }
    else
        for(int i=0;i< (light2_level - value);i++)
        {
            on_Light2_Dim_clicked();
            QThread::msleep(50);
        }

    light2_level=value;
}



QFrame *FlightControl::controlFrame()
{
    return ui->frame;
}


QWidget *FlightControl::infoWidget()
{
    return ui->widget;
}

/**
 * @brief 摄像头状态显示
 * @param i 摄像头的坐标
 * @param open 摄像头的状态
 */
void FlightControl::cameraControl(int i, bool open)
{
    if(i == 1){
        ui->monocularCameraA1Switch->setChecked(open);
    } else if(i == 2){
        ui->monocularCameraA2Switch->setChecked(open);
    } else if(i == 3){
        ui->binocularCameraSwitch->setChecked(open);
    } else if(i == 4){
        ui->monocularCameraB1Switch->setChecked(open);
    } else if(i == 5){
        ui->monocularCameraB2Switch->setChecked(open);
    }
}


void FlightControl::on_monocularCameraA1Switch_checkedChanged(bool checked)
{
    emit cameraStateChanged(1, checked);
}


void FlightControl::on_monocularCameraA2Switch_checkedChanged(bool checked)
{
    emit cameraStateChanged(2, checked);
}


void FlightControl::on_binocularCameraSwitch_checkedChanged(bool checked)
{
    emit cameraStateChanged(3, checked);
}


void FlightControl::on_monocularCameraB1Switch_checkedChanged(bool checked)
{
    emit cameraStateChanged(4, checked);
}


void FlightControl::on_monocularCameraB2Switch_checkedChanged(bool checked)
{
    emit cameraStateChanged(5, checked);
}

