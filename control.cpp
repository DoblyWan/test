#include "control.h"
#include "ui_control.h"

Control::Control(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Control)
{
    ui->setupUi(this);

    udpSocket_control = new QUdpSocket(this);
    timer_live        = new QTimer(this);
    timer_joyhandle = new QTimer(this);
    timer_online = new QTimer(this);
    m_gamepad = new QGamepad(0, this);
    timer_send = new QTimer(this);
    // jetson_Addr =

    connect(udpSocket_control,  &QUdpSocket::readyRead, this,&Control::jetson_msg_get);

    connect(timer_live,SIGNAL(timeout()),this,SLOT(heatBeat()));
    connect(timer_joyhandle,SIGNAL(timeout()),this,SLOT(do_send_joyhandle()));
    connect(timer_online,SIGNAL(timeout()),this,SLOT(machine_online()));
    // connect(timer_send,SIGNAL(timeout()),this,SLOT(btn_control()));


    udpSocket_control->bind(8888);                              // Listen to port 8888 on this machine

    M_Arm_pitch = 128;
    Mount_angle = 35;


    light_level = ui->verticalSlider->value();
    lightB_value = ui->verticalSlider_2->value();

    ui->gaugeCompassPan->raise();
    ui->gaugePlane->raise();

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


    gamePad_init();

    //    timer_live->start(800);
    timer_online->start(1000);
    //    timer_send->start(100);

    vale_send=0;
    value_left_axisX_a=0;
    value_left_axisY_a=0;
    value_right_axisX_a=0;
    value_right_axisY_a=0;
}

Control::~Control()
{
    delete ui;
}


void Control::machine_online()
{

    timer_joyhandle->stop();
    timer_send->stop();


    // ui->switchButton->setChecked(true);
    // ui->switchButton_2->setChecked(true);
    ui->switchButton->setEnabled(true);
    ui->switchButton_2->setEnabled(true);

}

void Control::btn_control()
{
    if(vale_send>=12)
    {
        vale_send=0;
        value_left_axisX_a=0;
        value_left_axisY_a=0;
        value_right_axisX_a=0;
        value_right_axisY_a=0;
        return;

    }
    vale_send++;
    QByteArray array;
    // ?????
    array.append(0xff);
    array.append(0xfe);
    array.append(0xfd);
    array.append(0xfc);

    // ???????
    array.append(0x0e);
    array.append(0x14);
    y_speed_value = value_left_axisY_a *127*(-1) +128;
    x_speed_value = value_left_axisX_a *127 +128;

    z_speed_value = value_right_axisY_a *127*(-1) +128;
    yaw_speed_value = value_right_axisX_a *127 +128;

    array.append(y_speed_value);
    array.append(x_speed_value);
    array.append(z_speed_value);
    array.append(yaw_speed_value);



    // ????β
    array.append(0x01);
    array.append(0x02);
    array.append(0x03);
    array.append(0x04);
    //    qDebug()<<y_speed_value;
    udpSocket_control->writeDatagram(array,jetson_Addr,jetson_Port);
    array.clear();
}

void Control::heatBeat()
{
    QByteArray array;
    array.append(0xff);
    array.append(0xfe);
    array.append(0xfd);
    array.append(0xfc);
    array.append(0x0a);
    unsigned char heat = 0x00;
    array.append(heat);


    array.append(0x01);
    array.append(0x02);
    array.append(0x03);
    array.append(0x04);
    //    qDebug()<<array;
    udpSocket_control->writeDatagram(array,jetson_Addr,jetson_Port);
}

void Control::gamePad_init()
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
    connect(m_gamepad, SIGNAL(buttonL3Changed(bool)), this, SLOT(GamePad_Left_axis_btn_pressed(bool)));
    connect(m_gamepad, SIGNAL(buttonR3Changed(bool)), this, SLOT(GamePad_Right_axis_btn_pressed(bool)));
    connect(m_gamepad, SIGNAL(buttonSelectChanged(bool)), this, SLOT(GamePad_Back_btn_pressed(bool)));
    connect(m_gamepad, SIGNAL(buttonStartChanged(bool)), this, SLOT(GamePad_Start_btn_pressed(bool)));

    connect(m_gamepad, SIGNAL(buttonUpChanged(bool)), this, SLOT(GamePad_Up_btn_pressed(bool)));
    connect(m_gamepad, SIGNAL(buttonDownChanged(bool)), this, SLOT(GamePad_Down_btn_pressed(bool)));
    connect(m_gamepad, SIGNAL(buttonLeftChanged(bool)), this, SLOT(GamePad_Left_btn_pressed(bool)));
    connect(m_gamepad, SIGNAL(buttonRightChanged(bool)), this, SLOT(GamePad_Right_btn_pressed(bool)));
}

QString Control::convert_to_ipv4_addr(QHostAddress addr)
{
    quint32  addr_origin = addr.toIPv4Address();
    QHostAddress addr_host = QHostAddress(addr_origin);
    QString  addr_str = addr_host.toString();
    return addr_str;
}

void Control::jetson_msg_get()
{

    //    ui->statue->setText("connected................");


    timer_online->start(1000);
    timer_joyhandle->start(50);
    timer_send->start(100);

    ui->switchButton->setChecked(true);
    ui->switchButton_2->setChecked(true);
    ui->switchButton->setEnabled(true);
    ui->switchButton_2->setEnabled(true);
    //ui->verticalSlider->setEnabled(true);
    //ui->verticalSlider_2->setEnabled(true);




    char buf[1024] = {0};                                       //data
    qint64 len = udpSocket_control->readDatagram(buf,sizeof(buf),&jetson_Addr,&jetson_Port);


    // Parsing data
    /*if (len == 56 &&
        (unsigned char)buf[0]==0xfb && (unsigned char)buf[1]==0xfa &&
        (unsigned char)buf[2]==0xf9 && (unsigned char)buf[3]==0xf8 &&
        (unsigned char)buf[4]==0x15 && (unsigned char)buf[5]==0x0f)
    {
        // 检查包尾
        if((unsigned char)buf[len-4]==0x05 && (unsigned char)buf[len-3]==0x06 &&
            (unsigned char)buf[len-2]==0x07 && (unsigned char)buf[len-1]==0x08)
        {
            ////qDebug()<<"get right message";
            float angle[3],depth,tempture;
            unsigned short data[5];
            data[0]=(unsigned char)buf[6];
            data[0]=((unsigned char)data[0]<<8)+(unsigned char)buf[7];

            data[1]=(unsigned char)buf[8];
            data[1]=((unsigned char)data[1]<<8)+(unsigned char)buf[9];

            data[2]=(unsigned char)buf[10];
            data[2]=((unsigned char)data[2]<<8)+(unsigned char)buf[11];

            data[3]=(unsigned char)buf[12];
            data[3]=((unsigned char)data[3]<<8)+(unsigned char)buf[13];

            data[4]=(unsigned char)buf[14];
            data[4]=((unsigned char)data[4]<<8)+(unsigned char)buf[15];
            ////qDebug()<<data[4];


            angle[0] = (float)data[0]/100-360;
            angle[1] = (float)data[1]/100-360;
            angle[2] = (float)data[2]/100;

            depth = (float)data[3];
            tempture = (float)data[4]/100;


            this->robotData["depth"] = "Depth: " + QString::number(depth,'f',2) + " cm";
            this->robotData["pitch"] = QString::number(angle[0],'f',1);
            this->robotData["yaw"] = QString::number(angle[2],'f',1);
            this->robotData["roll"] = QString::number(angle[1],'f',1);
            this->robotData["temp"] = "Tempture: "+QString::number(tempture,'f',2);
            this->robotData["compass"] = QString::number(angle[2],'f',1);
            this->robotData["rollValue"] = QString::number(angle[1],'f',1);
            this->robotData["degValue"] = QString::number(angle[0],'f',1);


            // int16_t velocity[3], acceleration[3], yaw_rate;
            // unsigned char light_status, system_status;
            // int thruster_power[8];
            // int lights[2];

            // // 3. 解析速度数据 (16-21字节) - 有符号16位整数
            // velocity[0] = static_cast<int16_t>(buf[16]) << 8 | static_cast<int16_t>(buf[17]);
            // velocity[1] = static_cast<int16_t>(buf[18]) << 8 | static_cast<int16_t>(buf[19]);
            // velocity[2] = static_cast<int16_t>(buf[20]) << 8 | static_cast<int16_t>(buf[21]);
            // // this->robotData["velocity"] = QString::number(velocity[0] / 100.0,'f',2) + ",";
            // // this->robotData["velocity"] += QString::number(velocity[1] / 100.0,'f',2) + ",";
            // // this->robotData["velocity"] = QString::number(velocity[2] / 100.0,'f',2);


            // // 4. 解析加速度数据 (22-27字节)
            // acceleration[0] = static_cast<int16_t>(buf[22]) << 8 | static_cast<int16_t>(buf[23]); // Afx (0.01 m/s²)
            // acceleration[1] = static_cast<int16_t>(buf[24]) << 8 | static_cast<int16_t>(buf[25]);  // Afy
            // acceleration[2] = static_cast<int16_t>(buf[26]) << 8 | static_cast<int16_t>(buf[27]);  // Afz

            // // 5. 解析偏航速率 (28-29字节)
            // yaw_rate = (buf[28] << 8) + buf[29];        // Yaw rate (0.01 deg/s)

            // // 6. 灯光状态 (30字节)
            // light_status = buf[30];


            // // 7. 推进器功率 (31-46字节)
            // for(int i=0; i<8; i++) {
            //     thruster_power[i] = ((unsigned char)buf[31+2*i] << 8) + (unsigned char)buf[31+2*i+1];  // 0-100%
            // }




            // if((unsigned char)buf[16]==0)
            // {
            //     //ui->rov_status->setText("ROV_status:Disarmed");
            //     this->robotData["status"] = "ROV_status:Disarmed";
            //     emit stateTransfer(this->robotData);
            //     // ui->switchButton_2->setChecked(false);

            //     timer_joyhandle->stop();
            //     timer_send->stop();
            // }
            // else if((unsigned char)buf[16]==1)
            // {
            //     //ui->rov_status->setText("ROV_status:Armed");
            //     this->robotData["status"] = "ROV_status:Armed";
            //     emit stateTransfer(this->robotData);

            //     timer_joyhandle->start(50);
            //     timer_send->start(50);
            //     //                                ui->switchButton_2->setChecked(true);
            // }



        }

    }*/

    if (len == 56 &&
        (unsigned char)buf[0]==0xfb && (unsigned char)buf[1]==0xfa &&
        (unsigned char)buf[2]==0xf9 && (unsigned char)buf[3]==0xf8 &&
        (unsigned char)buf[4]==0x15 && (unsigned char)buf[5]==0x0f)
    {
        // 检查包尾
        if((unsigned char)buf[len-4]==0x05 && (unsigned char)buf[len-3]==0x06 &&
            (unsigned char)buf[len-2]==0x07 && (unsigned char)buf[len-1]==0x08)
        {
            // // 解析姿态和基础数据
            // float angle[3], depth, temperature;
            int16_t velocity[3], acceleration[3], yaw_rate;
            unsigned char light_status, system_status;
            int thruster_power[8];
            int lights[2];

            // // 1. 解析姿态数据 (6-11字节)
            // angle[0] = ((buf[6] << 8) + buf[7]) / 100.0f - 360;  // Pitch
            // angle[1] = ((buf[8] << 8) + buf[9]) / 100.0f - 360;  // Roll
            // angle[2] = ((buf[10] << 8) + buf[11]) / 100.0f;      // Yaw

            // // 2. 解析深度和温度 (12-15字节)
            // depth = ((buf[12] << 8) + buf[13]);                  // Depth (cm)
            // temperature = ((buf[14] << 8) + buf[15]) / 100.0f;   // Temperature

            float angle[3],depth,temperature;
            unsigned short data[5];
            data[0]=(unsigned char)buf[6];
            data[0]=((unsigned char)data[0]<<8)+(unsigned char)buf[7];

            data[1]=(unsigned char)buf[8];
            data[1]=((unsigned char)data[1]<<8)+(unsigned char)buf[9];

            data[2]=(unsigned char)buf[10];
            data[2]=((unsigned char)data[2]<<8)+(unsigned char)buf[11];

            data[3]=(unsigned char)buf[12];
            data[3]=((unsigned char)data[3]<<8)+(unsigned char)buf[13];

            data[4]=(unsigned char)buf[14];
            data[4]=((unsigned char)data[4]<<8)+(unsigned char)buf[15];
            ////qDebug()<<data[4];


            angle[0] = (float)data[0]/100-360;
            angle[1] = (float)data[1]/100-360;
            angle[2] = (float)data[2]/100;

            depth = (float)data[3];
            temperature = (float)data[4]/100;


            // 3. 解析速度数据 (16-21字节) - 有符号16位整数
            velocity[0] = static_cast<int16_t>(buf[16]) << 8 | static_cast<int16_t>(buf[17]);
            velocity[1] = static_cast<int16_t>(buf[18]) << 8 | static_cast<int16_t>(buf[19]);
            velocity[2] = static_cast<int16_t>(buf[20]) << 8 | static_cast<int16_t>(buf[21]);

            // 4. 解析加速度数据 (22-27字节)
            acceleration[0] = static_cast<int16_t>(buf[22]) << 8 | static_cast<int16_t>(buf[23]); // Afx (0.01 m/s²)
            acceleration[1] = static_cast<int16_t>(buf[24]) << 8 | static_cast<int16_t>(buf[25]);  // Afy
            acceleration[2] = static_cast<int16_t>(buf[26]) << 8 | static_cast<int16_t>(buf[27]);  // Afz

            // 5. 解析偏航速率 (28-29字节)
            yaw_rate = (buf[28] << 8) + buf[29];        // Yaw rate (0.01 deg/s)

            // 6. 灯光状态 (30字节)
            light_status = buf[30];
            bool light1_on = light_status & 0x01;
            bool light2_on = light_status & 0x02;

            // 7. 推进器功率 (31-46字节)
            for(int i=0; i<8; i++) {
                thruster_power[i] = ((unsigned char)buf[31+2*i] << 8) + (unsigned char)buf[31+2*i+1];  // 0-100%
                thruster_power[i] = (thruster_power[i] - 1500) / 4;
                // if(thruster_power[0] != 1500 || thruster_power[4]!= 1500)
                //     qDebug() << thruster_power[i] << " ";
                // ProgressThree *p = ui->widget->findChild<ProgressThree*>(QString::fromStdString("progressThree_"+ std::to_string(i+1)));
                // p->setValue1(thruster_power[i]);
                // p->setValue2(1900 - thruster_power[i]);
                // ui->progressThree_1->setValue1(1000);
                // ui->widget->findChild<QLabel*>(QString("servoChannel_%1").arg(i+1))->setText(QString::number(thruster_power[0]));
            }

            ui->progressThree_1->setValue1(100 + thruster_power[0]);
            ui->progressThree_1->setValue2(100 - thruster_power[0]);
            ui->progressThree_2->setValue1(100 + thruster_power[1]);
            ui->progressThree_2->setValue2(100 - thruster_power[1]);
            ui->progressThree_3->setValue1(100 + thruster_power[2]);
            ui->progressThree_3->setValue2(100 - thruster_power[2]);
            ui->progressThree_4->setValue1(100 + thruster_power[3]);
            ui->progressThree_4->setValue2(100 - thruster_power[3]);
            ui->progressThree_5->setValue1(100 + thruster_power[4]);
            ui->progressThree_5->setValue2(100 - thruster_power[4]);
            ui->progressThree_6->setValue1(100 + thruster_power[5]);
            ui->progressThree_6->setValue2(100 - thruster_power[5]);
            ui->progressThree_7->setValue1(100 + thruster_power[6]);
            ui->progressThree_7->setValue2(100 - thruster_power[6]);
            ui->progressThree_8->setValue1(100 + thruster_power[7]);
            ui->progressThree_8->setValue2(100 - thruster_power[7]);


            ui->servoChannel_1->setText(QString::number(thruster_power[0]) + "%");
            ui->servoChannel_2->setText(QString::number(thruster_power[1]) + "%");
            ui->servoChannel_3->setText(QString::number(thruster_power[2]) + "%");
            ui->servoChannel_4->setText(QString::number(thruster_power[3]) + "%");
            ui->servoChannel_5->setText(QString::number(thruster_power[4]) + "%");
            ui->servoChannel_6->setText(QString::number(thruster_power[5]) + "%");
            ui->servoChannel_7->setText(QString::number(thruster_power[6]) + "%");
            ui->servoChannel_8->setText(QString::number(thruster_power[7]) + "%");


            // 灯光
            lights[0] = ((unsigned char)buf[47] << 8) + (unsigned char)buf[48];
            lights[1] = ((unsigned char)buf[49] << 8) + (unsigned char)buf[50];
            // ui->progressThree_9->setValue1(lights[0]);
            // ui->progressThree_9->setValue2(1900 - lights[0]);
            // ui->progressThree_10->setValue1(lights[1]);
            // ui->progressThree_10->setValue2(1900 - lights[1]);

            // ui->servoChannel_9->setText(QString::number(lights[0]));
            // ui->servoChannel_10->setText(QString::number(lights[1]));





            if(light1_isUpdatingFromExternal){
                ui->verticalSlider->setValue(int((lights[0] - 1100)/80));

                if(int((lights[0] - 1100)/80) != ui->verticalSlider->value()){
                    // light1_isUpdatingFromExternal = true;
                    // disconnect(ui->verticalSlider, nullptr, nullptr, nullptr);
                    // connect(ui->verticalSlider, &QSlider::valueChanged, this, &Widget::on_verticalSlider_valueChanged);
                    // light1_isUpdatingFromExternal = false;
                }
            }

            if(light2_isUpdatingFromExternal){
                ui->verticalSlider_2->setValue(int((lights[1] - 1100)/80));

                if(int((lights[1] - 1100)/80) != ui->verticalSlider_2->value()){
                    // light2_isUpdatingFromExternal = true;
                    // disconnect(ui->verticalSlider_2, nullptr, nullptr, nullptr);
                    // connect(ui->verticalSlider_2, &QSlider::valueChanged, this, &Widget::on_verticalSlider_2_valueChanged);
                    // light2_isUpdatingFromExternal = false;;
                }
            }





            // 8. 系统状态 (39字节)
            system_status = buf[51];

            // 更新UI显示
            ui->Depth_show->setText(QString::number(depth / 100.0,'f',2)+" m");
            ui->pitchValue->setText(QString::number(angle[0],'f',1)+"°");
            ui->yawValue->setText(QString::number(angle[2],'f',1)+"°");
            ui->rollValue->setText(QString::number(angle[1],'f',1)+"°");
            // ui->Temp_show_2->setText("Temp: "+QString::number(temperature,'f',2)+"°C");
            ui->rulerBar->setValue(QString::number(depth,'f',2).toDouble());

            // 新增UI显示
            ui->VelocityX->setText(QString::number(velocity[0]/100.0,'f',2)+" m/s");
            ui->VelocityY->setText(QString::number(velocity[1]/100.0,'f',2)+" m/s");
            ui->VelocityZ->setText(QString::number(velocity[2]/100.0,'f',2)+" m/s");

            ui->gaugeWatchX->setValue(QString::number(velocity[0]/100.0,'f',2).toDouble());
            ui->gaugeWatchY->setValue(QString::number(velocity[1]/100.0,'f',2).toDouble());
            ui->gaugeWatchZ->setValue(QString::number(velocity[2]/100.0,'f',2).toDouble());


            ui->AccelX->setText(QString::number(9.80665 * acceleration[0]/1000.0,'f',3)+" m/s²");
            ui->AccelY->setText(QString::number(9.80665 * acceleration[1]/1000.0,'f',3)+" m/s²");
            ui->AccelZ->setText(QString::number(9.80665 * acceleration[2]/1000.0,'f',3)+" m/s²");

            // ui->YawRate->setText("Yaw Rate: "+QString::number(yaw_rate/100.0,'f',2)+"°/s");

            // // 灯光状态显示
            // ui->Light1->setText(light1_on ? "Light1: ON" : "Light1: OFF");
            // ui->Light2->setText(light2_on ? "Light2: ON" : "Light2: OFF");

            // 推进器状态显示 (示例显示第一个推进器)


            // 更新仪表
            ui->gaugeCompassPan->setValue((int)angle[2]);
            ui->gaugePlane->setRollValue((int)angle[1]);
            ui->gaugePlane->setDegValue((int)angle[0]);

            // 系统状态
            if(system_status == 0) {
                // ui->rov_status_2->setText("ROV Status: Disarmed");
                timer_joyhandle->stop();
                timer_send->stop();
            } else {
                // ui->rov_status_2->setText("ROV Status: Armed");
                timer_joyhandle->start(50);
                timer_send->start(50);
            }
        }
    }

}

void Control::on_Send_modeSet_clicked()
{
    QByteArray array;
    array.append(0xff);
    array.append(0xfe);
    array.append(0xfd);
    array.append(0xfc);
    array.append(0x0a);

    char index = ui->Control_mode->currentIndex();

    array.append(index+7);
    array.append(0x01);
    array.append(0x02);
    array.append(0x03);
    array.append(0x04);
    //qDebug()<<array;
    udpSocket_control->writeDatagram(array,jetson_Addr,jetson_Port);

}


// ?趨????
void Control::on_Set_Depth_click_clicked()
{
    QByteArray array;
    // ?????
    array.append(0xff);
    array.append(0xfe);
    array.append(0xfd);
    array.append(0xfc);

    // ???????
    array.append(0x0c);

    // ????????
    array.append(0x10);
    //    int index = ui->depth_Set->text().toInt();
    //qDebug()<<index;
    unsigned short data = 0x00;
    //qDebug()<<data;
    unsigned char data1 = data;
    unsigned char data2 = data>>8;

    array.append(data2);
    array.append(data1);

    // ????β
    array.append(0x01);
    array.append(0x02);
    array.append(0x03);
    array.append(0x04);
        //qDebug()<<array;
    udpSocket_control->writeDatagram(array,jetson_Addr,jetson_Port);

}

// ?趨???
void Control::on_Set_Angle_click_clicked()
{
    QByteArray array;
    // ?????
    array.append(0xff);
    array.append(0xfe);
    array.append(0xfd);
    array.append(0xfc);

    // ???????
    array.append(0x0c);

    // ????????
    //    int index_angle = ui->Set_Angle->currentIndex();
    //    array.append(0x11+ index_angle);


    //    int index = ui->angle_Set->text().toInt();
    unsigned short data = 0x00;
    //qDebug()<<data;
    unsigned char data1 = data;
    unsigned char data2 = data>>8;

    array.append(data2);
    array.append(data1);

    // ????β
    array.append(0x01);
    array.append(0x02);
    array.append(0x03);
    array.append(0x04);
        //qDebug()<<array;
    udpSocket_control->writeDatagram(array,jetson_Addr,jetson_Port);
}


// ??????????
void Control::on_RC_send_clicked()
{
    QByteArray array;
    // ?????
    array.append(0xff);
    array.append(0xfe);
    array.append(0xfd);
    array.append(0xfc);

    // ???????
    array.append(0x0b);



    // ????????
    int index_angle = 0;
    array.append(0x01+ index_angle);


    int index =0;
    unsigned short data = index;
    unsigned char data1 = data;

    array.append(data1);

    // ????β
    array.append(0x01);
    array.append(0x02);
    array.append(0x03);
    array.append(0x04);
    qDebug()<<array;
    udpSocket_control->writeDatagram(array,jetson_Addr,jetson_Port);


}


// ????????
void Control::on_Light_Bri_clicked()
{
    QByteArray array;
    // ?????
    array.append(0xff);
    array.append(0xfe);
    array.append(0xfd);
    array.append(0xfc);

    // ???????
    array.append(0x0b);

    // ????????
    array.append(0x0c);
    array.append(0x02);

    // ????β
    array.append(0x01);
    array.append(0x02);
    array.append(0x03);
    array.append(0x04);
    qDebug()<<array;
    udpSocket_control->writeDatagram(array,jetson_Addr,jetson_Port);
}

void Control::on_Light_dim_clicked()
{
    QByteArray array;
    // ?????
    array.append(0xff);
    array.append(0xfe);
    array.append(0xfd);
    array.append(0xfc);

    // ???????
    array.append(0x0b);

    // ????????
    array.append(0x0c);
    array.append(0x01);

    // ????β
    array.append(0x01);
    array.append(0x02);
    array.append(0x03);
    array.append(0x04);
    //qDebug()<<array;

    udpSocket_control->writeDatagram(array,jetson_Addr,jetson_Port);
}

// 双目灯光灭
void Control::on_Bino_Light_dim_clicked()
{
    QByteArray array;
    // ?????
    array.append(0xff);
    array.append(0xfe);
    array.append(0xfd);
    array.append(0xfc);

    // ???????
    array.append(0x0b);

    // ????????
    array.append(0x08);
    array.append(0x01);

    // ????β
    array.append(0x01);
    array.append(0x02);
    array.append(0x03);
    array.append(0x04);
    //qDebug()<<array;

    udpSocket_control->writeDatagram(array,jetson_Addr,jetson_Port);
}

// 双目灯光亮
void Control::on_Bino_Light_bri_clicked()
{
    QByteArray array;
    // ?????
    array.append(0xff);
    array.append(0xfe);
    array.append(0xfd);
    array.append(0xfc);

    // ???????
    array.append(0x0b);

    // ????????
    array.append(0x08);
    array.append(0x02);

    // ????β
    array.append(0x01);
    array.append(0x02);
    array.append(0x03);
    array.append(0x04);
    //qDebug()<<array;

    udpSocket_control->writeDatagram(array,jetson_Addr,jetson_Port);
}

// ??????????
void Control::on_Mount_Down_clicked()
{
    QByteArray array;
    // ?????
    array.append(0xff);
    array.append(0xfe);
    array.append(0xfd);
    array.append(0xfc);

    // ???????
    array.append(0x0b);

    // ????????
    array.append(0x0e);

    Mount_angle = Mount_angle - 7;
    if(Mount_angle <= 0) Mount_angle =0;

    unsigned char index_char = Mount_angle;
    array.append(index_char);

    // ????β
    array.append(0x01);
    array.append(0x02);
    array.append(0x03);
    array.append(0x04);

    //qDebug()<<array;
    udpSocket_control->writeDatagram(array,jetson_Addr,jetson_Port);
}




void Control::on_Mount_Up_clicked()
{
    QByteArray array;
    // ?????
    array.append(0xff);
    array.append(0xfe);
    array.append(0xfd);
    array.append(0xfc);

    // ???????
    array.append(0x0b);

    // ????????
    array.append(0x0e);

    Mount_angle = Mount_angle + 7;
    if(Mount_angle >= 72) Mount_angle = 72;

    unsigned char index_char = Mount_angle;
    array.append(index_char);

    // ????β
    array.append(0x01);
    array.append(0x02);
    array.append(0x03);
    array.append(0x04);

    //qDebug()<<array;
    udpSocket_control->writeDatagram(array,jetson_Addr,jetson_Port);
}





// ???????
void Control::on_Lightcirl_brig_clicked()
{
    QByteArray array;
    // ?????
    array.append(0xff);
    array.append(0xfe);
    array.append(0xfd);
    array.append(0xfc);

    // ???????
    array.append(0x0b);

    // ????????
    array.append(0x0d);
    array.append(0x02);

    // ????β
    array.append(0x01);
    array.append(0x02);
    array.append(0x03);
    array.append(0x04);
        //qDebug()<<array;
    udpSocket_control->writeDatagram(array,jetson_Addr,jetson_Port);
}


// ?????
void Control::on_Lightcirl_dimm_clicked()
{
    QByteArray array;
    // ?????
    array.append(0xff);
    array.append(0xfe);
    array.append(0xfd);
    array.append(0xfc);

    // ???????
    array.append(0x0b);

    // ????????
    array.append(0x0d);
    array.append(0x01);

    // ????β
    array.append(0x01);
    array.append(0x02);
    array.append(0x03);
    array.append(0x04);
    //qDebug()<<array;
    udpSocket_control->writeDatagram(array,jetson_Addr,jetson_Port);
}







void Control::GamePad_X_btn_pressed(bool pressed)    // ????Y
{

    if(pressed)
    {
        // on_Bino_Light_dim_clicked();
        //        on_M_arm_Down_clicked();
        return;


    }

}


void Control::GamePad_Y_btn_pressed(bool pressed)        // ????X ??????
{
    qDebug()<<"Y BTN press";
    if(pressed )
    {
        if(shift_pressed)
        {
            ui->Control_mode->setCurrentIndex(2);
            on_Send_modeSet_clicked();
            //qDebug()<<"change depth_hold";
        }
        else
        {
            //            on_M_arm_Close_clicked();
            return;
        }

    }

}


void Control::GamePad_A_btn_pressed(bool pressed)   // ????B  ?????
{

    if(pressed )
    {
        if(!shift_pressed)
        {
            ui->Control_mode->setCurrentIndex(0);
            on_Send_modeSet_clicked();
            //qDebug()<<"change manual";
        }
        else
        {
            //            on_M_arm_Open_clicked();
            return;
        }

    }

}


void Control::GamePad_B_btn_pressed(bool pressed)  // ????A  ??????
{

    if(pressed )
    {
        if(!shift_pressed)
        {
            ui->Control_mode->setCurrentIndex(1);
            on_Send_modeSet_clicked();
            //qDebug()<<"change stabilize";
        }
        else
        {
            //            on_M_arm_Up_clicked();
            return;
        }

    }

}


void Control::GamePad_Back_btn_pressed(bool pressed)
{

    if(pressed )
    {

        return;
    }

}


void Control::GamePad_Start_btn_pressed(bool pressed)
{

    if(pressed )
    {

        return;
    }

}


void Control::GamePad_LB_btn_pressed(bool pressed)
{

    if(pressed )
    {
        light2_isUpdatingFromExternal = true;
        on_Lightcirl_dimm_clicked();
        return;
    }

}


void Control::GamePad_RB_btn_pressed(bool pressed)
{

    if(pressed )
    {
        light2_isUpdatingFromExternal = true;
        on_Lightcirl_brig_clicked();
        return;
    }

}


void Control::GamePad_Up_btn_pressed(bool pressed)
{

    if(pressed )
    {
        on_Mount_Up_clicked();
        return;
    }

}


void Control::GamePad_Down_btn_pressed(bool pressed)
{

    if(pressed)
    {
        on_Mount_Down_clicked();
        return;
    }

}


void Control::GamePad_Left_btn_pressed(bool pressed)
{

    if(pressed)
    {
        light1_isUpdatingFromExternal = true;
        on_Light_dim_clicked();
        return;
    }

}


void Control::GamePad_Right_btn_pressed(bool pressed)
{

    if(pressed)
    {
        light1_isUpdatingFromExternal = true;
        on_Light_Bri_clicked();
        return;
    }

}


void Control::GamePad_Left_axis_btn_pressed(bool pressed)
{

    if(pressed)
    {
        shift_pressed = true;
        return;
    }
    else
    {
        shift_pressed = false;
    }

}


void Control::GamePad_Right_axis_btn_pressed(bool pressed)
{
    if(pressed)
    {
        shift_pressed = true;
        return;
    }

}


void Control::do_send_joyhandle()
{
    QByteArray array;
    // ?????
    array.append(0xff);
    array.append(0xfe);
    array.append(0xfd);
    array.append(0xfc);

    // ???????
    array.append(0x0e);
    array.append(0x14);
    y_speed_value = value_left_axisY *127*(-1) +128;
    x_speed_value = value_left_axisX *127 +128;

    z_speed_value = value_right_axisY *127*(-1) +128;
    yaw_speed_value = value_right_axisX *127 +128;

    array.append(y_speed_value);
    array.append(x_speed_value);
    array.append(z_speed_value);
    array.append(yaw_speed_value);



    // ????β
    array.append(0x01);
    array.append(0x02);
    array.append(0x03);
    array.append(0x04);
    //    qDebug()<<y_speed_value;
    udpSocket_control->writeDatagram(array,jetson_Addr,jetson_Port);
    array.clear();
}

void Control::on_switchButton_checkedChanged(bool checked)
{
    if(ui->switchButton->getChecked())
    {
        timer_joyhandle->start(50);
        //qDebug()<<"joy enable";

    }
    if(!ui->switchButton->getChecked())
    {
        timer_joyhandle->stop();
        //qDebug()<<"joy disenable";
    }

}


void Control::on_switchButton_2_checkedChanged(bool checked)
{
    QByteArray array;
    // ?????
    array.append(0xff);
    array.append(0xfe);
    array.append(0xfd);
    array.append(0xfc);
    array.append(0x0b);
    array.append(0xfb);

    if(ui->switchButton_2->getChecked())
    {
        array.append(0x01);
        //qDebug()<<"send rov armed";

    }
    if(!ui->switchButton_2->getChecked())
    {
        unsigned char zero_x16 =0x00;
        array.append(zero_x16);
        //qDebug()<<"send rov disarmed";
    }

    array.append(0x01);
    array.append(0x02);
    array.append(0x03);
    array.append(0x04);
    //qDebug()<<array;
    udpSocket_control->writeDatagram(array,jetson_Addr,jetson_Port);
    array.clear();

}

void Control::on_exit_btn_clicked()
{
    m_gamepad->~QGamepad();
    udpSocket_control->~QUdpSocket();
    timer_live->~QTimer();
    //timer_video_update->~QTimer();
    timer_joyhandle->~QTimer();
    timer_online->~QTimer();
    timer_send->~QTimer();


    this->close();
}




void Control::on_Control_mode_currentIndexChanged(int index)
{
    on_Send_modeSet_clicked();
}

//
void Control::on_pushButton_7_clicked()  //left r
{
    value_right_axisX_a=-0.55;
}


void Control::on_pushButton_6_clicked()  //right r
{
    value_right_axisX_a=0.55;
}


void Control::on_pushButton_3_clicked() // forward
{
    value_left_axisY_a=-0.55;
}


void Control::on_pushButton_5_clicked() // left later
{
    value_left_axisX_a=-0.55;
}


void Control::on_pushButton_4_clicked() // right later
{
    value_left_axisX_a=0.55;
}


void Control::on_pushButton_2_clicked() // back
{
    value_left_axisY_a=0.55;
}


void Control::on_pushButton_9_clicked() // float
{
    value_right_axisY_a = -0.55;
}


void Control::on_pushButton_8_clicked() // dive
{
    value_right_axisY_a = 0.55;
}

QFrame *Control::controlFrame()
{
    return ui->frame;
}

QWidget *Control::infoWidget()
{
    return ui->widget;
}


void Control::handleLightData(int light_level, int value, int lightType)
{
    qDebug() << "received data --------";


    if(lightType == 1){
        if(value>light_level)
        {
            for(int i=0;i< (value-light_level);i++)
            {
                on_Light_Bri_clicked();
                QThread::msleep(50);
            }
        }
        else
        {
            for(int i=0;i< (light_level-value);i++)
            {
                on_Light_dim_clicked();
                QThread::msleep(50);
            }
        }
    }
    else if(lightType == 2)
    {
        if(value>light_level)
        {
            for(int i=0;i< (value-light_level);i++)
            {
                on_Lightcirl_brig_clicked();
                QThread::msleep(50);
            }
        }
        else
        {
            for(int i=0;i< (light_level-value);i++)
            {
                on_Lightcirl_dimm_clicked();
                QThread::msleep(50);
            }
        }
    }

}

void Control::cameraControl(int i, bool open)
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

void Control::on_verticalSlider_actionTriggered(int action)
{
    light1_isUpdatingFromExternal = false;
}


void Control::on_verticalSlider_2_actionTriggered(int action)
{
    light2_isUpdatingFromExternal = false;
}


void Control::on_verticalSlider_valueChanged(int value)
{
    if(light1_isUpdatingFromExternal){
        return;
    }

    if(value>light_level)
        for(int i=0;i< (value-light_level);i++)
        {
            on_Light_Bri_clicked();
            QThread::msleep(50);
        }
    else
        for(int i=0;i< (light_level-value);i++)
        {
            on_Light_dim_clicked();
            QThread::msleep(50);
        }

    light_level=value;
}


void Control::on_verticalSlider_2_valueChanged(int value)
{
    if(light2_isUpdatingFromExternal){
        return;
    }

    if(value>lightB_value)
        for(int i=0;i< (value-lightB_value);i++)
        {
            on_Lightcirl_brig_clicked();
            QThread::msleep(50);
        }
    else
        for(int i=0;i< (lightB_value-value);i++)
        {
            on_Lightcirl_dimm_clicked();
            QThread::msleep(50);
        }

    lightB_value = value;
}


void Control::on_monocularCameraA1Switch_checkedChanged(bool checked)
{
    emit cameraStateChanged(1, checked);
}


void Control::on_monocularCameraA2Switch_checkedChanged(bool checked)
{
    emit cameraStateChanged(2, checked);
}


void Control::on_binocularCameraSwitch_checkedChanged(bool checked)
{
    emit cameraStateChanged(3, checked);
}


void Control::on_monocularCameraB1Switch_checkedChanged(bool checked)
{
    emit cameraStateChanged(4, checked);
}


void Control::on_monocularCameraB2Switch_checkedChanged(bool checked)
{
    emit cameraStateChanged(5, checked);
}

