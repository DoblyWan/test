#ifndef FLIGHTCONTROL_H
#define FLIGHTCONTROL_H

#include <QWidget>
#include <QCoreApplication>
#include <QUdpSocket>
#include <QTimer>
#include <QDateTime>
#include <QDebug>
#include <QMessageBox>
#include <QThread>
#include <QFrame>
#include <QListView>

// 手柄相关
#include <QGamepad>
#include <QGamepadManager>
#include <QRandomGenerator>

#include "mavlinkcommunicator.h"


extern "C" {
#include "mavlink.h"
}

namespace Ui {
class FlightControl;
}

class FlightControl : public QWidget
{
    Q_OBJECT

public:
    explicit FlightControl(QWidget *parent = nullptr);
    ~FlightControl();

private:
    Ui::FlightControl *ui;
    QUdpSocket *udpSocket;
    QHostAddress remoteAddress;
    QTimer *heartbeatTimer;
    QTimer *timer_send;
    QTimer *heartbear_receive;
    QElapsedTimer *m_lastHeartbeatTime;

    QGamepad *m_gamepad;



    bool shift_pressed;
    unsigned char M_Arm_pitch;
    unsigned char Mount_angle;

    double value_left_axisX;     //��ҡ�˵�x��  ���� -1~1
    double value_left_axisY;     //��ҡ�˵�y��  ���� -1~1

    double value_right_axisX;    //��ҡ�˵�x��  ���� -1~1
    double value_right_axisY;    //��ҡ�˵�y��  ���� -1~1

    double value_left_button_trigger;     //������ 0~1
    double value_right_button_trigger;    //�Ұ��� 0~1

    unsigned char x_speed_value;
    unsigned char y_speed_value;
    unsigned char z_speed_value;
    unsigned char yaw_speed_value;


    //bool pitch_control;
    //bool roll_control;

    double value_left_axisX_a;
    double value_left_axisY_a;

    double value_right_axisX_a;
    double value_right_axisY_a;
    int vale_send;

    // 解锁状态
    bool isArmed = false;

    // 灯光控制
    int light1_level;
    int light2_level;

    bool light1_isUpdatingFromExternal = true;
    bool light2_isUpdatingFromExternal = true;

    // 判断飞控连接
    bool m_heartbeatReceived = false;
    bool m_flightControllerReady = false;

private slots:
    void readPendingDatagrams();
    void sendHeartbeat();


    // 手柄相关槽函数
    void GamePad_X_btn_pressed(bool pressed);
    void GamePad_Y_btn_pressed(bool pressed);
    void GamePad_A_btn_pressed(bool pressed);
    void GamePad_B_btn_pressed(bool pressed);

    void GamePad_Back_btn_pressed(bool pressed);
    void GamePad_Start_btn_pressed(bool pressed);

    void GamePad_LB_btn_pressed(bool pressed);
    void GamePad_RB_btn_pressed(bool pressed);

    void GamePad_Up_btn_pressed(bool pressed);
    void GamePad_Down_btn_pressed(bool pressed);
    void GamePad_Left_btn_pressed(bool pressed);
    void GamePad_Right_btn_pressed(bool pressed);



    // void GamePad_Left_axis_btn_pressed(bool pressed);
    // void GamePad_Right_axis_btn_pressed(bool pressed);

    // arm状态转换
    void armedSwitch(bool arm);

    void on_handleEnabled_checkedChanged(bool checked);

    void btn_control();

    void on_verticalSlider_actionTriggered(int action);

    void on_verticalSlider_2_actionTriggered(int action);

    void on_verticalSlider_valueChanged(int value);

    void on_verticalSlider_2_valueChanged(int value);

    void on_monocularCameraA1Switch_checkedChanged(bool checked);

    void on_monocularCameraA2Switch_checkedChanged(bool checked);

    void on_binocularCameraSwitch_checkedChanged(bool checked);

    void on_monocularCameraB1Switch_checkedChanged(bool checked);

    void on_monocularCameraB2Switch_checkedChanged(bool checked);



private:
    void processMavlinkData(const QByteArray &data);
    void handleMavlinkMessage(const mavlink_message_t &msg);

    void gamePad_init();

    void send_manual_control_udp(QUdpSocket* udpSocket,
                                 const QHostAddress& host,
                                 quint16 port,
                                 mavlink_system_t sysid_compid,
                                 uint8_t target_system,
                                 int16_t x = 0, int16_t y = 0,
                                 int16_t z = 500, int16_t r = 0,
                                 const QVector<int>& pressed_buttons = {});

    bool set_button_function(uint8_t autopilot_sysid,
                             uint8_t autopilot_compid,
                             uint8_t button,
                             const QVariant& function,
                             bool shifted = false,
                             uint32_t timeout_ms = 1000);

    bool set_param(uint8_t target_sysid,
                   uint8_t target_compid,
                   const QString& param_name,
                   float param_value,
                   uint8_t param_type,
                   uint32_t timeout_ms = 1000);

    void init_button_functions(uint8_t target_sysid, uint8_t target_compid);

    void init_connect();

    // light控制
    void on_Light1_Bri_clicked();
    void on_Light1_Dim_clicked();
    void on_Light2_Bri_clicked();
    void on_Light2_Dim_clicked();





public:
    QFrame* controlFrame();
    QWidget* infoWidget();

public slots:
    void cameraControl(int i, bool open);


signals:
    void cameraStateChanged(int i, bool state);
};

#endif // FLIGHTCONTROL_H
