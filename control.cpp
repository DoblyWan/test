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
    if (len == 21 &&  (unsigned char)buf[0]==0xfb &&(unsigned char)buf[1]==0xfa&&(unsigned char)buf[2]==0xf9&&(unsigned char)buf[3]==0xf8&&(unsigned char)buf[4]==0x15 && (unsigned char)buf[5] == 0x0f)
    {
        if((unsigned char)buf[17] == 0x05 && (unsigned char)buf[18] == 0x06 && (unsigned char)buf[19] == 0x07 && (unsigned char)buf[20] == 0x08)
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


            if((unsigned char)buf[16]==0)
            {
                //ui->rov_status->setText("ROV_status:Disarmed");
                // ui->switchButton_2->setChecked(false);
                timer_joyhandle->stop();
                timer_send->stop();
            }
            else if((unsigned char)buf[16]==1)
            {
                //ui->rov_status->setText("ROV_status:Armed");
                timer_joyhandle->start(50);
                timer_send->start(50);
                //                                ui->switchButton_2->setChecked(true);
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
        on_Lightcirl_dimm_clicked();
        return;
    }

}


void Control::GamePad_RB_btn_pressed(bool pressed)
{

    if(pressed )
    {
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
        on_Light_Bri_clicked();
        return;
    }

}


void Control::GamePad_Right_btn_pressed(bool pressed)
{

    if(pressed)
    {
        on_Light_dim_clicked();
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
