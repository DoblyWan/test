#ifndef CONTROL_H
#define CONTROL_H

#include <QWidget>
#include <QUdpSocket>
#include <QTime>
#include <QTimer>
#include <QHostAddress>

#include <QGamepad>
#include <QGamepadManager>
#include <QRandomGenerator>

#include <QStackedLayout>
#include <QAbstractItemView>
#include <QListView>
#include <iostream>

namespace Ui {
class Control;
}

class Control : public QWidget
{
    Q_OBJECT

public:
    explicit Control(QWidget *parent = nullptr);
    ~Control();

    std::unordered_map<QString, QString> robotData{
        {"depth", ""}, {"pitch", ""},
        {"yaw", ""}, {"roll", ""},
        {"temp", ""}, {"status", ""},
        {"compass",""}, {"rollValue",""},
        {"degValue",""}
    };

private:
    Ui::Control *ui;

    QString convert_to_ipv4_addr(QHostAddress addr);              // IPV6 to IPV4

    void set_ButtonOrComCheck_Enable(bool status);

    void gamePad_init();

    void on_Send_modeSet_clicked();

    void on_Set_Depth_click_clicked();

    void on_Set_Angle_click_clicked();

    void on_RC_send_clicked();

    void on_Light_Bri_clicked();

    void on_Light_dim_clicked();

    void on_Mount_Down_clicked();

    void on_Lightcirl_brig_clicked();

    void on_Lightcirl_dimm_clicked();

    void on_Mount_Up_clicked();

    QGamepad *m_gamepad;

    QUdpSocket      *udpSocket_control;              // udp Control_ground class
    QHostAddress    jetson_Addr;                     // jetson Address
    quint16         jetson_Port;                     // jetson Port

    QTimer          *timer_live;                     // Timer for jetson living

    //QTimer *timer_video_update;                      // Timer for video update



    QTimer* timer_joyhandle;
    QTimer* timer_online;
    QTimer* timer_send;

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
private slots:
    void GamePad_X_btn_pressed(bool pressed);           // ����X����
    void GamePad_Y_btn_pressed(bool pressed);           // ����Y����
    void GamePad_A_btn_pressed(bool pressed);           // ����A����
    void GamePad_B_btn_pressed(bool pressed);           // ����B����

    void GamePad_Back_btn_pressed(bool pressed);        // ����Back����
    void GamePad_Start_btn_pressed(bool pressed);       // ����Start����

    void GamePad_LB_btn_pressed(bool pressed);          // ��������Lb����
    void GamePad_RB_btn_pressed(bool pressed);          // ��������Rb����

    void GamePad_Up_btn_pressed(bool pressed);          // ʮ�ְ���Up��������
    void GamePad_Down_btn_pressed(bool pressed);        // ʮ�ְ���Down��������
    void GamePad_Left_btn_pressed(bool pressed);        // ʮ�ְ���Left��������
    void GamePad_Right_btn_pressed(bool pressed);       // ʮ�ְ���Right��������

    void GamePad_Left_axis_btn_pressed(bool pressed);   // ��ҡ�˰���
    void GamePad_Right_axis_btn_pressed(bool pressed);  // ��ҡ�˰���

private slots:

    void jetson_msg_get();                       // Jetson's data return corresponding function

    void do_send_joyhandle();

    void machine_online();

    void btn_control();

    void on_switchButton_checkedChanged(bool checked);

    void heatBeat();

    void on_switchButton_2_checkedChanged(bool checked);

    void on_exit_btn_clicked();

    void on_Control_mode_currentIndexChanged(int index);

    void on_pushButton_7_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_8_clicked();

signals:
    void stateTransfer(const std::unordered_map<QString, QString>& modifiedData);

};

#endif // CONTROL_H
