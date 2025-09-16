/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "customcontrol.h"
#include "gaugecompasspan.h"
#include "gaugeplane.h"
#include "gaugewatch.h"
#include "progressthree.h"
#include "rulerbar.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_2;
    QWidget *widget_3;
    QPushButton *pushButton_setting;
    QLabel *label_connect;
    QLabel *label_title;
    QFrame *frame;
    QGridLayout *gridLayout_26;
    QFrame *frame_3;
    QGridLayout *gridLayout_10;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_datainput;
    QLabel *label_infoInput;
    QVBoxLayout *verticalLayout_3;
    QPushButton *pushButton_datasearch;
    QLabel *label_infoSearch;
    QVBoxLayout *verticalLayout_8;
    QPushButton *pushButton_localvideo;
    QLabel *label_localVideo;
    QVBoxLayout *verticalLayout_9;
    QPushButton *pushButton_utrans;
    QLabel *label_uExport;
    QVBoxLayout *verticalLayout_10;
    QPushButton *pushButton_upload;
    QLabel *label_cloudUpload;
    QVBoxLayout *verticalLayout_11;
    QPushButton *pushButton_log;
    QLabel *label_log;
    QVBoxLayout *verticalLayout_12;
    QPushButton *pushButton_front;
    QLabel *label_cloudUpload_2;
    QVBoxLayout *verticalLayout_13;
    QPushButton *pushButton_behind;
    QLabel *label_cloudUpload_3;
    QVBoxLayout *verticalLayout_14;
    QPushButton *pushButton_location;
    QLabel *label_cloudUpload_4;
    QVBoxLayout *verticalLayout_15;
    QPushButton *pushButton_location_2;
    QLabel *label_cloudUpload_5;
    QVBoxLayout *verticalLayout_16;
    QPushButton *pushButton;
    QLabel *label_cloudUpload_6;
    QVBoxLayout *verticalLayout_17;
    QPushButton *pushButton_exit;
    QLabel *label_cloudUpload_7;
    QFrame *frame_4;
    QGridLayout *gridLayout_20;
    QWidget *widget_home;
    QGridLayout *gridLayout_5;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QGridLayout *gridLayout_6;
    QLabel *label_main;
    QWidget *page_2;
    QGridLayout *gridLayout_7;
    QTableView *tableView;
    QWidget *page_3;
    QGridLayout *gridLayout_8;
    QWidget *widget;
    QWidget *widget_10;
    CustomControl *monocularCameraA1_8;
    QPushButton *pushButton_26;
    QPushButton *pushButton_27;
    QLabel *label;
    QWidget *widget_11;
    QGridLayout *gridLayout_31;
    CustomControl *monocularCameraA1_9;
    QPushButton *pushButton_28;
    QPushButton *pushButton_29;
    QLabel *label_2;
    QWidget *widget_12;
    QGridLayout *gridLayout_37;
    QPushButton *pushButton_transfor_2;
    QPushButton *record;
    QLabel *timeLabel;
    QPushButton *pushButton_2;
    QWidget *widget_14;
    QPushButton *pushButton_transforToMono_3;
    QWidget *binocularCamera_3;
    QGridLayout *gridLayout_32;
    QLabel *label_7;
    QWidget *page_log;
    QGridLayout *gridLayout_9;
    QPlainTextEdit *logViewer;
    QWidget *page_setting;
    QGridLayout *gridLayout_3;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_21;
    QFrame *frame_15;
    QGridLayout *gridLayout_22;
    QPushButton *pushButton_defult_network;
    QPushButton *pushButton_confirm_network;
    QFrame *frame_16;
    QGridLayout *gridLayout_23;
    QLabel *label_33;
    QLabel *label_34;
    QLineEdit *line_cloud_ip;
    QLineEdit *line_cloud_port;
    QGroupBox *groupBox_6;
    QHBoxLayout *horizontalLayout_22;
    QLabel *label_localnet;
    QLabel *label_localnet_state;
    QGroupBox *groupBox_7;
    QHBoxLayout *horizontalLayout_23;
    QLabel *label_cloudnet;
    QLabel *label_cloudnet_state;
    QGroupBox *groupBox_9;
    QVBoxLayout *verticalLayout_7;
    QFrame *frame_23;
    QGridLayout *gridLayout_24;
    QFrame *frame_18;
    QHBoxLayout *horizontalLayout_26;
    QLineEdit *line_A;
    QLabel *label_44;
    QFrame *frame_17;
    QHBoxLayout *horizontalLayout_27;
    QLineEdit *line_V;
    QLabel *label_43;
    QLabel *label_41;
    QLabel *label_40;
    QLabel *label_39;
    QFrame *frame_19;
    QHBoxLayout *horizontalLayout_28;
    QLineEdit *line_temp;
    QLabel *label_45;
    QLabel *label_42;
    QFrame *frame_20;
    QHBoxLayout *horizontalLayout_36;
    QLineEdit *line_humid;
    QLabel *label_46;
    QFrame *frame_22;
    QHBoxLayout *horizontalLayout_37;
    QPushButton *pushButton_state_defult;
    QPushButton *pushButton_6;
    QGroupBox *groupBox_8;
    QVBoxLayout *verticalLayout_2;
    QFrame *frame_2;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_38;
    QLineEdit *line_username;
    QFrame *frame_24;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_48;
    QLineEdit *line_password;
    QFrame *frame_25;
    QHBoxLayout *horizontalLayout_15;
    QLabel *label_50;
    QLineEdit *line_unit;
    QPushButton *pushButton_testnetwork;
    QGroupBox *groupBox_5;
    QVBoxLayout *verticalLayout_4;
    QFrame *frame_26;
    QHBoxLayout *horizontalLayout_16;
    QLabel *label_51;
    QLineEdit *lineEdit;
    QFrame *frame_27;
    QHBoxLayout *horizontalLayout_24;
    QLabel *label_52;
    QLineEdit *lineEdit_2;
    QFrame *frame_28;
    QHBoxLayout *horizontalLayout_25;
    QLabel *label_53;
    QLineEdit *lineEdit_3;
    QWidget *page_state;
    QHBoxLayout *horizontalLayout_19;
    QWidget *widget_2;
    QGridLayout *gridLayout_19;
    QFrame *frame_8;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_14;
    QFrame *frame_9;
    QGridLayout *gridLayout_14;
    QLCDNumber *lcdNumber;
    QLabel *label_15;
    QLabel *label_17;
    QFrame *frame_10;
    QGridLayout *gridLayout_15;
    QLabel *label_16;
    QLCDNumber *lcdNumber_2;
    QLabel *label_18;
    QFrame *frame_5;
    QGridLayout *gridLayout_11;
    QFrame *frame_7;
    QGridLayout *gridLayout_13;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_13;
    QFrame *frame_6;
    QGridLayout *gridLayout_12;
    QLabel *label_9;
    QLabel *label_12;
    QLabel *label_6;
    QLabel *label_4;
    QFrame *frame_12;
    QGridLayout *gridLayout_16;
    QFrame *frame_13;
    QGridLayout *gridLayout_17;
    QLabel *label_21;
    QLabel *label_22;
    QLabel *label_20;
    QFrame *frame_14;
    QGridLayout *gridLayout_18;
    QLabel *label_24;
    QLabel *label_23;
    QLabel *label_25;
    QLabel *label_26;
    QFrame *frame_11;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_19;
    QTextBrowser *textBrowser_2;
    QWidget *page_4;
    QGridLayout *gridLayout_4;
    QWidget *widget_15;
    CustomControl *monocularCameraA1_4;
    QPushButton *pushButton_18;
    QPushButton *pushButton_19;
    QLabel *label_3;
    QWidget *widget_16;
    QGridLayout *gridLayout_46;
    CustomControl *monocularCameraA1_5;
    QPushButton *pushButton_20;
    QPushButton *pushButton_21;
    QLabel *label_5;
    QWidget *widget_13;
    QGridLayout *gridLayout_42;
    QWidget *page_5;
    QGridLayout *gridLayout_36;
    QWidget *widget_8;
    QGridLayout *gridLayout_39;
    QGridLayout *gridLayout_34;
    QLabel *label_62;
    QLineEdit *IP_Edit_9;
    QPushButton *Open_BT_9;
    QWidget *widget_6;
    QGridLayout *gridLayout_38;
    QGridLayout *gridLayout_29;
    QLabel *label_31;
    QLineEdit *IP_Edit_4;
    QPushButton *Open_BT_4;
    QWidget *widget_9;
    QGridLayout *gridLayout_41;
    QPushButton *Open_BT_10;
    QLineEdit *IP_Edit_10;
    QGridLayout *gridLayout_35;
    QLabel *label_65;
    QWidget *widget_5;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_28;
    QLabel *label_28;
    QLineEdit *IP_Edit_3;
    QPushButton *Open_BT_3;
    QWidget *widget_7;
    QGridLayout *gridLayout_40;
    QGridLayout *gridLayout_33;
    QLabel *label_59;
    QLineEdit *IP_Edit_8;
    QPushButton *Open_BT_8;
    QWidget *widget_4;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout_27;
    QLabel *label_27;
    QLineEdit *IP_Edit_2;
    QPushButton *Open_BT_2;
    QWidget *page_6;
    QGridLayout *gridLayout_30;
    QWidget *report;
    QWidget *page_7;
    QGroupBox *groupBox_10;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_18;
    QLabel *Roll_show;
    QLabel *Yaw_show;
    QLabel *Pitch_show;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_19;
    QLabel *Depth_show;
    QLabel *Temp_show;
    QLabel *rov_status;
    RulerBar *rulerBar;
    QLabel *Depth_show_3;
    QLabel *label_149;
    QFrame *frame_56;
    QWidget *widget_36;
    GaugeCompassPan *gaugeCompassPan;
    GaugePlane *gaugePlane;
    QLabel *Roll_show_2;
    QLabel *Roll_show_3;
    QLabel *Roll_show_4;
    QLabel *RollValue;
    QLabel *PitchValue;
    QLabel *YawValue;
    QLabel *label_150;
    QFrame *frame_57;
    QWidget *widget_37;
    QLabel *Depth_show_2;
    QSlider *verticalSlider;
    QLabel *Depth_show_4;
    QSlider *verticalSlider_2;
    QLabel *label_151;
    QFrame *frame_58;
    QWidget *widget_38;
    GaugeWatch *gaugeWatchZ;
    GaugeWatch *gaugeWatchY;
    GaugeWatch *gaugeWatchX;
    QLabel *VelocityX;
    QLabel *AccelX;
    QLabel *VelocityY;
    QLabel *AccelY;
    QLabel *VelocityZ;
    QLabel *AccelZ;
    QLabel *label_152;
    QFrame *frame_59;
    QWidget *widget_39;
    ProgressThree *progressThree_3;
    ProgressThree *progressThree_2;
    ProgressThree *progressThree_6;
    QLabel *servoChannel_6;
    ProgressThree *progressThree_7;
    ProgressThree *progressThree_1;
    ProgressThree *progressThree_4;
    ProgressThree *progressThree_5;
    QLabel *servoChannel_2;
    QLabel *servoChannel_3;
    QLabel *servoChannel_4;
    QLabel *servoChannel_5;
    ProgressThree *progressThree_8;
    QLabel *servoChannel_7;
    QLabel *servoChannel_8;
    QLabel *servoChannel_1;
    QLabel *channel;
    QLabel *channel_2;
    QLabel *channel_3;
    QLabel *channel_4;
    QLabel *channel_5;
    QLabel *channel_6;
    QLabel *channel_7;
    QLabel *channel_8;
    QWidget *page_8;
    QGridLayout *gridLayout_25;
    QWidget *page_9;
    QGridLayout *gridLayout_50;
    QWidget *widget_17;
    QGridLayout *videoplayer;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_dectStart;
    QLabel *label_dectStart_input;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_dectNum;
    QLabel *label_dectNum_input;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_dectPeople;
    QLabel *label_dectPeople_input;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_pipeUnit;
    QLabel *label_pipeUnit_input;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_dectDirect;
    QLabel *label_dectDirect_input;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_pipeType;
    QLabel *label_pipeType_input;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_dectType;
    QLabel *label_dectTye_input;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_dectPlace;
    QLabel *label_dectPlace_input;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_pipeD;
    QLabel *label_pipeD_input;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_dectEnd;
    QLabel *label_dectEnd_input;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1920, 1200);
        MainWindow->setMinimumSize(QSize(1920, 1080));
        MainWindow->setMaximumSize(QSize(2560, 1600));
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(46, 52, 54);\n"
"color: rgb(114, 159, 207);\n"
""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setStyleSheet(QString::fromUtf8("QWidget {\n"
"	background-color: rgb(46,52,54);\n"
"}"));
        gridLayout_2 = new QGridLayout(centralwidget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setVerticalSpacing(20);
        gridLayout_2->setContentsMargins(-1, 20, -1, -1);
        widget_3 = new QWidget(centralwidget);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        widget_3->setMinimumSize(QSize(200, 40));
        widget_3->setMaximumSize(QSize(1000, 1000));
        pushButton_setting = new QPushButton(widget_3);
        pushButton_setting->setObjectName(QString::fromUtf8("pushButton_setting"));
        pushButton_setting->setGeometry(QRect(60, 0, 50, 35));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_setting->sizePolicy().hasHeightForWidth());
        pushButton_setting->setSizePolicy(sizePolicy);
        pushButton_setting->setMaximumSize(QSize(50, 16777215));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/Setting.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_setting->setIcon(icon);
        pushButton_setting->setIconSize(QSize(37, 37));
        pushButton_setting->setAutoDefault(false);
        pushButton_setting->setFlat(true);
        label_connect = new QLabel(widget_3);
        label_connect->setObjectName(QString::fromUtf8("label_connect"));
        label_connect->setGeometry(QRect(10, 0, 35, 35));
        label_connect->setMaximumSize(QSize(35, 40));
        label_connect->setPixmap(QPixmap(QString::fromUtf8(":/images/connected.png")));
        label_connect->setScaledContents(true);
        label_connect->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(widget_3, 0, 0, 1, 1);

        label_title = new QLabel(centralwidget);
        label_title->setObjectName(QString::fromUtf8("label_title"));
        label_title->setMaximumSize(QSize(16777215, 1000));
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        font.setItalic(false);
        label_title->setFont(font);
        label_title->setStyleSheet(QString::fromUtf8("color: rgb(255, 244, 163);"));
        label_title->setFrameShape(QFrame::NoFrame);
        label_title->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_title, 0, 1, 1, 1);

        frame = new QFrame(centralwidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setMinimumSize(QSize(250, 780));
        frame->setMaximumSize(QSize(1000, 2000));
        frame->setStyleSheet(QString::fromUtf8("QFrame#frame {\n"
"	background-color: rgb(46,52,54);\n"
"	border: 1px solid #ccc;\n"
"}"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout_26 = new QGridLayout(frame);
        gridLayout_26->setSpacing(10);
        gridLayout_26->setObjectName(QString::fromUtf8("gridLayout_26"));
        gridLayout_26->setContentsMargins(5, 0, 5, 5);
        frame_3 = new QFrame(frame);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        QFont font1;
        font1.setBold(true);
        frame_3->setFont(font1);
        frame_3->setStyleSheet(QString::fromUtf8("font-size: 15px;\n"
"font-weight: 700;\n"
""));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        gridLayout_10 = new QGridLayout(frame_3);
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        gridLayout_10->setContentsMargins(5, 5, 5, -1);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(10);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        pushButton_datainput = new QPushButton(frame_3);
        pushButton_datainput->setObjectName(QString::fromUtf8("pushButton_datainput"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton_datainput->sizePolicy().hasHeightForWidth());
        pushButton_datainput->setSizePolicy(sizePolicy1);
        pushButton_datainput->setMinimumSize(QSize(0, 0));
        pushButton_datainput->setMaximumSize(QSize(16777215, 200));
        pushButton_datainput->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border:none;\n"
"}"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/datainput.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_datainput->setIcon(icon1);
        pushButton_datainput->setIconSize(QSize(50, 50));
        pushButton_datainput->setAutoDefault(false);
        pushButton_datainput->setFlat(true);

        verticalLayout->addWidget(pushButton_datainput);

        label_infoInput = new QLabel(frame_3);
        label_infoInput->setObjectName(QString::fromUtf8("label_infoInput"));
        label_infoInput->setMaximumSize(QSize(16777215, 100));
        label_infoInput->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	color: rgb(114,159,207);\n"
"}"));
        label_infoInput->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        verticalLayout->addWidget(label_infoInput);

        verticalLayout->setStretch(0, 3);
        verticalLayout->setStretch(1, 1);

        gridLayout_10->addLayout(verticalLayout, 0, 0, 1, 1);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(10);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        pushButton_datasearch = new QPushButton(frame_3);
        pushButton_datasearch->setObjectName(QString::fromUtf8("pushButton_datasearch"));
        sizePolicy.setHeightForWidth(pushButton_datasearch->sizePolicy().hasHeightForWidth());
        pushButton_datasearch->setSizePolicy(sizePolicy);
        pushButton_datasearch->setMaximumSize(QSize(16777215, 200));
        pushButton_datasearch->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border:none;\n"
"}"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/Search.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_datasearch->setIcon(icon2);
        pushButton_datasearch->setIconSize(QSize(45, 45));
        pushButton_datasearch->setFlat(true);

        verticalLayout_3->addWidget(pushButton_datasearch);

        label_infoSearch = new QLabel(frame_3);
        label_infoSearch->setObjectName(QString::fromUtf8("label_infoSearch"));
        label_infoSearch->setMaximumSize(QSize(16777215, 100));
        label_infoSearch->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	color: rgb(114,159,207);\n"
"}"));
        label_infoSearch->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        verticalLayout_3->addWidget(label_infoSearch);

        verticalLayout_3->setStretch(0, 3);
        verticalLayout_3->setStretch(1, 1);

        gridLayout_10->addLayout(verticalLayout_3, 0, 1, 1, 1);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setSpacing(5);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        pushButton_localvideo = new QPushButton(frame_3);
        pushButton_localvideo->setObjectName(QString::fromUtf8("pushButton_localvideo"));
        pushButton_localvideo->setMaximumSize(QSize(16777215, 200));
        pushButton_localvideo->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border:none;\n"
"}"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/Video.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_localvideo->setIcon(icon3);
        pushButton_localvideo->setIconSize(QSize(50, 50));
        pushButton_localvideo->setFlat(true);

        verticalLayout_8->addWidget(pushButton_localvideo);

        label_localVideo = new QLabel(frame_3);
        label_localVideo->setObjectName(QString::fromUtf8("label_localVideo"));
        label_localVideo->setMaximumSize(QSize(16777215, 100));
        label_localVideo->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	color: rgb(114,159,207);\n"
"}"));
        label_localVideo->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        verticalLayout_8->addWidget(label_localVideo);

        verticalLayout_8->setStretch(0, 3);
        verticalLayout_8->setStretch(1, 1);

        gridLayout_10->addLayout(verticalLayout_8, 1, 0, 1, 1);

        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setSpacing(10);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        pushButton_utrans = new QPushButton(frame_3);
        pushButton_utrans->setObjectName(QString::fromUtf8("pushButton_utrans"));
        pushButton_utrans->setMaximumSize(QSize(16777215, 200));
        pushButton_utrans->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border:none;\n"
"}"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/USB.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_utrans->setIcon(icon4);
        pushButton_utrans->setIconSize(QSize(50, 50));
        pushButton_utrans->setFlat(true);

        verticalLayout_9->addWidget(pushButton_utrans);

        label_uExport = new QLabel(frame_3);
        label_uExport->setObjectName(QString::fromUtf8("label_uExport"));
        label_uExport->setMaximumSize(QSize(16777215, 100));
        label_uExport->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	color: rgb(114,159,207);\n"
"}"));
        label_uExport->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        verticalLayout_9->addWidget(label_uExport);

        verticalLayout_9->setStretch(0, 3);
        verticalLayout_9->setStretch(1, 1);

        gridLayout_10->addLayout(verticalLayout_9, 1, 1, 1, 1);

        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setSpacing(10);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        pushButton_upload = new QPushButton(frame_3);
        pushButton_upload->setObjectName(QString::fromUtf8("pushButton_upload"));
        pushButton_upload->setMaximumSize(QSize(16777215, 200));
        pushButton_upload->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border:none;\n"
"}"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/images/cloudUpload.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_upload->setIcon(icon5);
        pushButton_upload->setIconSize(QSize(50, 50));
        pushButton_upload->setFlat(true);

        verticalLayout_10->addWidget(pushButton_upload);

        label_cloudUpload = new QLabel(frame_3);
        label_cloudUpload->setObjectName(QString::fromUtf8("label_cloudUpload"));
        label_cloudUpload->setMaximumSize(QSize(16777215, 100));
        label_cloudUpload->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	color: rgb(114,159,207);\n"
"}"));
        label_cloudUpload->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        verticalLayout_10->addWidget(label_cloudUpload);

        verticalLayout_10->setStretch(0, 3);
        verticalLayout_10->setStretch(1, 1);

        gridLayout_10->addLayout(verticalLayout_10, 2, 0, 1, 1);

        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setSpacing(10);
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        pushButton_log = new QPushButton(frame_3);
        pushButton_log->setObjectName(QString::fromUtf8("pushButton_log"));
        pushButton_log->setMaximumSize(QSize(16777215, 200));
        pushButton_log->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border:none;\n"
"}"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/images/log.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_log->setIcon(icon6);
        pushButton_log->setIconSize(QSize(50, 50));
        pushButton_log->setAutoDefault(false);
        pushButton_log->setFlat(true);

        verticalLayout_11->addWidget(pushButton_log);

        label_log = new QLabel(frame_3);
        label_log->setObjectName(QString::fromUtf8("label_log"));
        label_log->setMaximumSize(QSize(16777215, 100));
        label_log->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	color: rgb(114,159,207);\n"
"}"));
        label_log->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        verticalLayout_11->addWidget(label_log);

        verticalLayout_11->setStretch(0, 3);
        verticalLayout_11->setStretch(1, 1);

        gridLayout_10->addLayout(verticalLayout_11, 2, 1, 1, 1);

        verticalLayout_12 = new QVBoxLayout();
        verticalLayout_12->setSpacing(10);
        verticalLayout_12->setObjectName(QString::fromUtf8("verticalLayout_12"));
        pushButton_front = new QPushButton(frame_3);
        pushButton_front->setObjectName(QString::fromUtf8("pushButton_front"));
        sizePolicy.setHeightForWidth(pushButton_front->sizePolicy().hasHeightForWidth());
        pushButton_front->setSizePolicy(sizePolicy);
        pushButton_front->setMinimumSize(QSize(0, 0));
        pushButton_front->setMaximumSize(QSize(16777215, 200));
        pushButton_front->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border:none;\n"
"}"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/images/A.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_front->setIcon(icon7);
        pushButton_front->setIconSize(QSize(55, 55));
        pushButton_front->setFlat(true);

        verticalLayout_12->addWidget(pushButton_front);

        label_cloudUpload_2 = new QLabel(frame_3);
        label_cloudUpload_2->setObjectName(QString::fromUtf8("label_cloudUpload_2"));
        label_cloudUpload_2->setMaximumSize(QSize(16777215, 100));
        label_cloudUpload_2->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	color: rgb(114,159,207);\n"
"}"));
        label_cloudUpload_2->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        verticalLayout_12->addWidget(label_cloudUpload_2);

        verticalLayout_12->setStretch(0, 3);
        verticalLayout_12->setStretch(1, 1);

        gridLayout_10->addLayout(verticalLayout_12, 3, 0, 1, 1);

        verticalLayout_13 = new QVBoxLayout();
        verticalLayout_13->setSpacing(10);
        verticalLayout_13->setObjectName(QString::fromUtf8("verticalLayout_13"));
        pushButton_behind = new QPushButton(frame_3);
        pushButton_behind->setObjectName(QString::fromUtf8("pushButton_behind"));
        sizePolicy.setHeightForWidth(pushButton_behind->sizePolicy().hasHeightForWidth());
        pushButton_behind->setSizePolicy(sizePolicy);
        pushButton_behind->setMinimumSize(QSize(0, 0));
        pushButton_behind->setMaximumSize(QSize(16777215, 200));
        pushButton_behind->setLayoutDirection(Qt::LeftToRight);
        pushButton_behind->setAutoFillBackground(false);
        pushButton_behind->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border:none;\n"
"}"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/images/B.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_behind->setIcon(icon8);
        pushButton_behind->setIconSize(QSize(55, 55));
        pushButton_behind->setCheckable(false);
        pushButton_behind->setChecked(false);
        pushButton_behind->setFlat(true);

        verticalLayout_13->addWidget(pushButton_behind);

        label_cloudUpload_3 = new QLabel(frame_3);
        label_cloudUpload_3->setObjectName(QString::fromUtf8("label_cloudUpload_3"));
        label_cloudUpload_3->setMaximumSize(QSize(16777215, 100));
        label_cloudUpload_3->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	color: rgb(114,159,207);\n"
"}"));
        label_cloudUpload_3->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        verticalLayout_13->addWidget(label_cloudUpload_3);

        verticalLayout_13->setStretch(0, 3);
        verticalLayout_13->setStretch(1, 1);

        gridLayout_10->addLayout(verticalLayout_13, 3, 1, 1, 1);

        verticalLayout_14 = new QVBoxLayout();
        verticalLayout_14->setSpacing(10);
        verticalLayout_14->setObjectName(QString::fromUtf8("verticalLayout_14"));
        pushButton_location = new QPushButton(frame_3);
        pushButton_location->setObjectName(QString::fromUtf8("pushButton_location"));
        sizePolicy.setHeightForWidth(pushButton_location->sizePolicy().hasHeightForWidth());
        pushButton_location->setSizePolicy(sizePolicy);
        pushButton_location->setMaximumSize(QSize(16777215, 200));
        pushButton_location->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border:none;\n"
"}"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/images/report.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_location->setIcon(icon9);
        pushButton_location->setIconSize(QSize(50, 50));
        pushButton_location->setAutoDefault(false);
        pushButton_location->setFlat(true);

        verticalLayout_14->addWidget(pushButton_location);

        label_cloudUpload_4 = new QLabel(frame_3);
        label_cloudUpload_4->setObjectName(QString::fromUtf8("label_cloudUpload_4"));
        label_cloudUpload_4->setMaximumSize(QSize(16777215, 100));
        label_cloudUpload_4->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	color: rgb(114,159,207);\n"
"}"));
        label_cloudUpload_4->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        verticalLayout_14->addWidget(label_cloudUpload_4);

        verticalLayout_14->setStretch(0, 3);
        verticalLayout_14->setStretch(1, 1);

        gridLayout_10->addLayout(verticalLayout_14, 4, 0, 1, 1);

        verticalLayout_15 = new QVBoxLayout();
        verticalLayout_15->setSpacing(10);
        verticalLayout_15->setObjectName(QString::fromUtf8("verticalLayout_15"));
        pushButton_location_2 = new QPushButton(frame_3);
        pushButton_location_2->setObjectName(QString::fromUtf8("pushButton_location_2"));
        sizePolicy.setHeightForWidth(pushButton_location_2->sizePolicy().hasHeightForWidth());
        pushButton_location_2->setSizePolicy(sizePolicy);
        pushButton_location_2->setMaximumSize(QSize(16777215, 200));
        pushButton_location_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border:none;\n"
"}"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/images/SystemState.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_location_2->setIcon(icon10);
        pushButton_location_2->setIconSize(QSize(50, 50));
        pushButton_location_2->setAutoDefault(false);
        pushButton_location_2->setFlat(true);

        verticalLayout_15->addWidget(pushButton_location_2);

        label_cloudUpload_5 = new QLabel(frame_3);
        label_cloudUpload_5->setObjectName(QString::fromUtf8("label_cloudUpload_5"));
        label_cloudUpload_5->setMaximumSize(QSize(16777215, 100));
        label_cloudUpload_5->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	color: rgb(114,159,207);\n"
"}"));
        label_cloudUpload_5->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        verticalLayout_15->addWidget(label_cloudUpload_5);

        verticalLayout_15->setStretch(0, 3);
        verticalLayout_15->setStretch(1, 1);

        gridLayout_10->addLayout(verticalLayout_15, 4, 1, 1, 1);

        verticalLayout_16 = new QVBoxLayout();
        verticalLayout_16->setSpacing(10);
        verticalLayout_16->setObjectName(QString::fromUtf8("verticalLayout_16"));
        pushButton = new QPushButton(frame_3);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);
        pushButton->setMinimumSize(QSize(0, 0));
        pushButton->setMaximumSize(QSize(16777215, 200));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border:none;\n"
"}"));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/images/MainUI.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon11);
        pushButton->setIconSize(QSize(50, 50));
        pushButton->setFlat(true);

        verticalLayout_16->addWidget(pushButton);

        label_cloudUpload_6 = new QLabel(frame_3);
        label_cloudUpload_6->setObjectName(QString::fromUtf8("label_cloudUpload_6"));
        label_cloudUpload_6->setMaximumSize(QSize(16777215, 100));
        label_cloudUpload_6->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	color: rgb(114,159,207);\n"
"}"));
        label_cloudUpload_6->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        verticalLayout_16->addWidget(label_cloudUpload_6);

        verticalLayout_16->setStretch(0, 3);
        verticalLayout_16->setStretch(1, 1);

        gridLayout_10->addLayout(verticalLayout_16, 5, 0, 1, 1);

        verticalLayout_17 = new QVBoxLayout();
        verticalLayout_17->setSpacing(10);
        verticalLayout_17->setObjectName(QString::fromUtf8("verticalLayout_17"));
        pushButton_exit = new QPushButton(frame_3);
        pushButton_exit->setObjectName(QString::fromUtf8("pushButton_exit"));
        sizePolicy.setHeightForWidth(pushButton_exit->sizePolicy().hasHeightForWidth());
        pushButton_exit->setSizePolicy(sizePolicy);
        pushButton_exit->setMaximumSize(QSize(16777215, 200));
        pushButton_exit->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border:none;\n"
"}"));
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/images/Exit.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_exit->setIcon(icon12);
        pushButton_exit->setIconSize(QSize(50, 50));
        pushButton_exit->setFlat(true);

        verticalLayout_17->addWidget(pushButton_exit);

        label_cloudUpload_7 = new QLabel(frame_3);
        label_cloudUpload_7->setObjectName(QString::fromUtf8("label_cloudUpload_7"));
        label_cloudUpload_7->setMaximumSize(QSize(16777215, 100));
        label_cloudUpload_7->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	color: rgb(114,159,207);\n"
"}"));
        label_cloudUpload_7->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        verticalLayout_17->addWidget(label_cloudUpload_7);

        verticalLayout_17->setStretch(0, 3);
        verticalLayout_17->setStretch(1, 1);

        gridLayout_10->addLayout(verticalLayout_17, 5, 1, 1, 1);


        gridLayout_26->addWidget(frame_3, 0, 0, 1, 1);

        frame_4 = new QFrame(frame);
        frame_4->setObjectName(QString::fromUtf8("frame_4"));
        frame_4->setMinimumSize(QSize(150, 150));
        frame_4->setMaximumSize(QSize(16777215, 500));
        frame_4->setStyleSheet(QString::fromUtf8("border:none"));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        gridLayout_20 = new QGridLayout(frame_4);
        gridLayout_20->setObjectName(QString::fromUtf8("gridLayout_20"));
        gridLayout_20->setContentsMargins(2, 5, 0, 5);

        gridLayout_26->addWidget(frame_4, 1, 0, 1, 1);

        gridLayout_26->setRowStretch(0, 7);
        gridLayout_26->setRowStretch(1, 2);
        frame_4->raise();
        frame_3->raise();

        gridLayout_2->addWidget(frame, 1, 0, 2, 1);

        widget_home = new QWidget(centralwidget);
        widget_home->setObjectName(QString::fromUtf8("widget_home"));
        widget_home->setStyleSheet(QString::fromUtf8("QWidget#widget_home {\n"
"	border: 1px solid #888;\n"
"}"));
        gridLayout_5 = new QGridLayout(widget_home);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        gridLayout_5->setContentsMargins(5, 5, 5, 5);
        stackedWidget = new QStackedWidget(widget_home);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setStyleSheet(QString::fromUtf8(""));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        gridLayout_6 = new QGridLayout(page);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        gridLayout_6->setContentsMargins(5, 5, 5, 5);
        label_main = new QLabel(page);
        label_main->setObjectName(QString::fromUtf8("label_main"));
        label_main->setMinimumSize(QSize(1621, 854));
        label_main->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"border-color: rgb(114, 159, 207);"));
        label_main->setFrameShape(QFrame::WinPanel);
        label_main->setScaledContents(false);
        label_main->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(label_main, 0, 0, 1, 1);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        gridLayout_7 = new QGridLayout(page_2);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        gridLayout_7->setContentsMargins(5, 5, 5, 5);
        tableView = new QTableView(page_2);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setMinimumSize(QSize(1621, 854));
        tableView->setStyleSheet(QString::fromUtf8("/* \350\256\276\347\275\256\346\260\264\345\271\263\350\241\250\345\244\264\346\225\264\344\275\223\346\240\267\345\274\217 */\n"
"QHeaderView::section {\n"
"    background-color: transparent;    /* \350\203\214\346\231\257\350\211\262 */\n"
"}\n"
"\n"
"/* \350\256\276\347\275\256\345\236\202\347\233\264\350\241\250\345\244\264\357\274\210\350\241\214\345\217\267\345\214\272\345\237\237\357\274\211\346\240\267\345\274\217 */\n"
"QHeaderView::section:vertical {\n"
"    background-color: transparent;    /* \350\241\214\345\217\267\350\203\214\346\231\257\350\211\262 */\n"
"}\n"
"\n"
"/* \351\232\220\350\227\217\345\205\250\351\200\211\346\214\211\351\222\256 */\n"
"QTableView QTableCornerButton::section {\n"
"    background-color: transparent;\n"
"    border: none;\n"
"    image: none; /* \347\247\273\351\231\244\351\273\230\350\256\244\345\233\276\346\240\207 */\n"
"}\n"
"\n"
"QTableView::item { \n"
"	\n"
"	padding:0 15px 0 15px;\n"
"\n"
"}"));

        gridLayout_7->addWidget(tableView, 0, 0, 1, 1);

        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        gridLayout_8 = new QGridLayout(page_3);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        gridLayout_8->setContentsMargins(5, 5, 5, 5);
        widget = new QWidget(page_3);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setStyleSheet(QString::fromUtf8("QWidget {\n"
"	background-color: rgb(14,25,31);\n"
"}"));
        widget_10 = new QWidget(widget);
        widget_10->setObjectName(QString::fromUtf8("widget_10"));
        widget_10->setGeometry(QRect(1, 1, 1630, 920));
        monocularCameraA1_8 = new CustomControl(widget_10);
        monocularCameraA1_8->setObjectName(QString::fromUtf8("monocularCameraA1_8"));
        monocularCameraA1_8->setGeometry(QRect(60, 150, 700, 550));
        monocularCameraA1_8->setStyleSheet(QString::fromUtf8("QWidget{\n"
"	background-color:transparent;\n"
"}"));
        pushButton_26 = new QPushButton(monocularCameraA1_8);
        pushButton_26->setObjectName(QString::fromUtf8("pushButton_26"));
        pushButton_26->setEnabled(true);
        pushButton_26->setGeometry(QRect(25, 15, 39, 35));
        pushButton_26->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border: none;\n"
"	background-color: transparent;\n"
"}"));
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/images/suspension.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_26->setIcon(icon13);
        pushButton_26->setIconSize(QSize(35, 35));
        pushButton_27 = new QPushButton(monocularCameraA1_8);
        pushButton_27->setObjectName(QString::fromUtf8("pushButton_27"));
        pushButton_27->setGeometry(QRect(635, 15, 39, 35));
        pushButton_27->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border: none;\n"
"	background-color: transparent;\n"
"}"));
        pushButton_27->setIcon(icon13);
        pushButton_27->setIconSize(QSize(35, 35));
        label = new QLabel(monocularCameraA1_8);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(35, 50, 630, 472));
        label->setStyleSheet(QString::fromUtf8("border:1px solid #ccc;\n"
"background-color:rgb(14, 25, 31);"));
        label->setAlignment(Qt::AlignCenter);
        widget_11 = new QWidget(monocularCameraA1_8);
        widget_11->setObjectName(QString::fromUtf8("widget_11"));
        widget_11->setGeometry(QRect(35, 50, 630, 472));
        widget_11->setStyleSheet(QString::fromUtf8(""));
        gridLayout_31 = new QGridLayout(widget_11);
        gridLayout_31->setObjectName(QString::fromUtf8("gridLayout_31"));
        gridLayout_31->setContentsMargins(1, 1, 1, 1);
        label->raise();
        pushButton_26->raise();
        pushButton_27->raise();
        widget_11->raise();
        monocularCameraA1_9 = new CustomControl(widget_10);
        monocularCameraA1_9->setObjectName(QString::fromUtf8("monocularCameraA1_9"));
        monocularCameraA1_9->setGeometry(QRect(850, 150, 700, 550));
        monocularCameraA1_9->setStyleSheet(QString::fromUtf8("QWidget{\n"
"	background-color:transparent;\n"
"}"));
        pushButton_28 = new QPushButton(monocularCameraA1_9);
        pushButton_28->setObjectName(QString::fromUtf8("pushButton_28"));
        pushButton_28->setEnabled(true);
        pushButton_28->setGeometry(QRect(25, 15, 39, 35));
        pushButton_28->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border: none;\n"
"	background-color: transparent;\n"
"}"));
        pushButton_28->setIcon(icon13);
        pushButton_28->setIconSize(QSize(35, 35));
        pushButton_29 = new QPushButton(monocularCameraA1_9);
        pushButton_29->setObjectName(QString::fromUtf8("pushButton_29"));
        pushButton_29->setGeometry(QRect(635, 15, 39, 35));
        pushButton_29->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border: none;\n"
"	background-color: transparent;\n"
"}"));
        pushButton_29->setIcon(icon13);
        pushButton_29->setIconSize(QSize(35, 35));
        label_2 = new QLabel(monocularCameraA1_9);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(35, 50, 630, 472));
        label_2->setStyleSheet(QString::fromUtf8("border:1px solid #ccc;\n"
"background-color:rgb(14, 25, 31);"));
        label_2->setAlignment(Qt::AlignCenter);
        widget_12 = new QWidget(monocularCameraA1_9);
        widget_12->setObjectName(QString::fromUtf8("widget_12"));
        widget_12->setGeometry(QRect(35, 50, 630, 472));
        widget_12->setStyleSheet(QString::fromUtf8(""));
        gridLayout_37 = new QGridLayout(widget_12);
        gridLayout_37->setObjectName(QString::fromUtf8("gridLayout_37"));
        gridLayout_37->setContentsMargins(1, 1, 1, 1);
        label_2->raise();
        pushButton_28->raise();
        pushButton_29->raise();
        widget_12->raise();
        pushButton_transfor_2 = new QPushButton(widget_10);
        pushButton_transfor_2->setObjectName(QString::fromUtf8("pushButton_transfor_2"));
        pushButton_transfor_2->setGeometry(QRect(1530, 850, 75, 50));
        sizePolicy.setHeightForWidth(pushButton_transfor_2->sizePolicy().hasHeightForWidth());
        pushButton_transfor_2->setSizePolicy(sizePolicy);
        pushButton_transfor_2->setMinimumSize(QSize(75, 50));
        pushButton_transfor_2->setMaximumSize(QSize(75, 50));
        pushButton_transfor_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border:none;\n"
"	background-color: transparent;\n"
"}"));
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/images/hand.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_transfor_2->setIcon(icon14);
        pushButton_transfor_2->setIconSize(QSize(50, 50));
        pushButton_transfor_2->setFlat(true);
        record = new QPushButton(widget_10);
        record->setObjectName(QString::fromUtf8("record"));
        record->setGeometry(QRect(120, 750, 75, 75));
        record->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color:rgb(62, 67, 75);\n"
"	border: 1px solid #333;\n"
"	border-radius: 10px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"	background-color:rgb(72, 78, 88);\n"
"	icon: url(:/images/unrecordhover.png);\n"
"	icon-size: 30px 30px;\n"
"}\n"
"\n"
""));
        QIcon icon15;
        icon15.addFile(QString::fromUtf8(":/images/unrecord.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon15.addFile(QString::fromUtf8(":/images/unrecordhover.png"), QSize(), QIcon::Normal, QIcon::On);
        record->setIcon(icon15);
        record->setIconSize(QSize(30, 30));
        timeLabel = new QLabel(widget_10);
        timeLabel->setObjectName(QString::fromUtf8("timeLabel"));
        timeLabel->setGeometry(QRect(270, 765, 191, 41));
        QFont font2;
        font2.setPointSize(12);
        timeLabel->setFont(font2);
        pushButton_2 = new QPushButton(widget_10);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(220, 760, 50, 50));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy2);
        pushButton_2->setStyleSheet(QString::fromUtf8("border:none;"));
        QIcon icon16;
        icon16.addFile(QString::fromUtf8(":/images/startrecord.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon16);
        pushButton_2->setIconSize(QSize(25, 25));
        widget_14 = new QWidget(widget);
        widget_14->setObjectName(QString::fromUtf8("widget_14"));
        widget_14->setGeometry(QRect(1, 1, 1630, 920));
        pushButton_transforToMono_3 = new QPushButton(widget_14);
        pushButton_transforToMono_3->setObjectName(QString::fromUtf8("pushButton_transforToMono_3"));
        pushButton_transforToMono_3->setGeometry(QRect(1530, 850, 75, 50));
        sizePolicy.setHeightForWidth(pushButton_transforToMono_3->sizePolicy().hasHeightForWidth());
        pushButton_transforToMono_3->setSizePolicy(sizePolicy);
        pushButton_transforToMono_3->setMaximumSize(QSize(16777215, 100000));
        pushButton_transforToMono_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border:none;\n"
"	background-color: transparent;\n"
"}"));
        pushButton_transforToMono_3->setIcon(icon14);
        pushButton_transforToMono_3->setIconSize(QSize(50, 50));
        pushButton_transforToMono_3->setFlat(true);
        binocularCamera_3 = new QWidget(widget_14);
        binocularCamera_3->setObjectName(QString::fromUtf8("binocularCamera_3"));
        binocularCamera_3->setGeometry(QRect(110, 120, 1390, 710));
        binocularCamera_3->setStyleSheet(QString::fromUtf8("QWidget#binocularCamera_3 {\n"
"	border-radius: 20px;\n"
"	border: 4px solid rgb(38,190,217);\n"
"	background-color: transparent;\n"
"\n"
"}"));
        gridLayout_32 = new QGridLayout(binocularCamera_3);
        gridLayout_32->setObjectName(QString::fromUtf8("gridLayout_32"));
        gridLayout_32->setContentsMargins(20, 20, 20, 20);
        label_7 = new QLabel(widget_14);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(120, 130, 1370, 690));
        QFont font3;
        font3.setPointSize(16);
        label_7->setFont(font3);
        label_7->setStyleSheet(QString::fromUtf8("\n"
"background-color:rgb(14, 25, 31);"));
        label_7->setAlignment(Qt::AlignCenter);
        widget_14->raise();
        widget_10->raise();

        gridLayout_8->addWidget(widget, 0, 0, 1, 1);

        stackedWidget->addWidget(page_3);
        page_log = new QWidget();
        page_log->setObjectName(QString::fromUtf8("page_log"));
        gridLayout_9 = new QGridLayout(page_log);
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        gridLayout_9->setContentsMargins(5, 5, 5, 5);
        logViewer = new QPlainTextEdit(page_log);
        logViewer->setObjectName(QString::fromUtf8("logViewer"));
        logViewer->setStyleSheet(QString::fromUtf8("QPlainTextEdit {\n"
"	font-size: 18px;\n"
"}"));

        gridLayout_9->addWidget(logViewer, 0, 0, 1, 1);

        stackedWidget->addWidget(page_log);
        page_setting = new QWidget();
        page_setting->setObjectName(QString::fromUtf8("page_setting"));
        gridLayout_3 = new QGridLayout(page_setting);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        groupBox_4 = new QGroupBox(page_setting);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setStyleSheet(QString::fromUtf8("font: 15pt \"Ubuntu\";"));
        gridLayout_21 = new QGridLayout(groupBox_4);
        gridLayout_21->setObjectName(QString::fromUtf8("gridLayout_21"));
        frame_15 = new QFrame(groupBox_4);
        frame_15->setObjectName(QString::fromUtf8("frame_15"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(frame_15->sizePolicy().hasHeightForWidth());
        frame_15->setSizePolicy(sizePolicy3);
        frame_15->setFrameShape(QFrame::StyledPanel);
        frame_15->setFrameShadow(QFrame::Raised);
        gridLayout_22 = new QGridLayout(frame_15);
        gridLayout_22->setObjectName(QString::fromUtf8("gridLayout_22"));
        pushButton_defult_network = new QPushButton(frame_15);
        pushButton_defult_network->setObjectName(QString::fromUtf8("pushButton_defult_network"));
        sizePolicy1.setHeightForWidth(pushButton_defult_network->sizePolicy().hasHeightForWidth());
        pushButton_defult_network->setSizePolicy(sizePolicy1);
        pushButton_defult_network->setMinimumSize(QSize(20, 60));

        gridLayout_22->addWidget(pushButton_defult_network, 0, 0, 1, 1);

        pushButton_confirm_network = new QPushButton(frame_15);
        pushButton_confirm_network->setObjectName(QString::fromUtf8("pushButton_confirm_network"));
        sizePolicy.setHeightForWidth(pushButton_confirm_network->sizePolicy().hasHeightForWidth());
        pushButton_confirm_network->setSizePolicy(sizePolicy);

        gridLayout_22->addWidget(pushButton_confirm_network, 0, 1, 1, 1);


        gridLayout_21->addWidget(frame_15, 5, 0, 1, 2);

        frame_16 = new QFrame(groupBox_4);
        frame_16->setObjectName(QString::fromUtf8("frame_16"));
        frame_16->setFrameShape(QFrame::StyledPanel);
        frame_16->setFrameShadow(QFrame::Raised);
        gridLayout_23 = new QGridLayout(frame_16);
        gridLayout_23->setObjectName(QString::fromUtf8("gridLayout_23"));
        label_33 = new QLabel(frame_16);
        label_33->setObjectName(QString::fromUtf8("label_33"));
        sizePolicy1.setHeightForWidth(label_33->sizePolicy().hasHeightForWidth());
        label_33->setSizePolicy(sizePolicy1);
        label_33->setMaximumSize(QSize(200, 16777215));
        label_33->setAlignment(Qt::AlignCenter);

        gridLayout_23->addWidget(label_33, 0, 0, 1, 1);

        label_34 = new QLabel(frame_16);
        label_34->setObjectName(QString::fromUtf8("label_34"));
        sizePolicy1.setHeightForWidth(label_34->sizePolicy().hasHeightForWidth());
        label_34->setSizePolicy(sizePolicy1);
        label_34->setMaximumSize(QSize(200, 16777215));
        label_34->setAlignment(Qt::AlignCenter);

        gridLayout_23->addWidget(label_34, 2, 0, 1, 1);

        line_cloud_ip = new QLineEdit(frame_16);
        line_cloud_ip->setObjectName(QString::fromUtf8("line_cloud_ip"));
        sizePolicy3.setHeightForWidth(line_cloud_ip->sizePolicy().hasHeightForWidth());
        line_cloud_ip->setSizePolicy(sizePolicy3);
        line_cloud_ip->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        line_cloud_ip->setAlignment(Qt::AlignCenter);

        gridLayout_23->addWidget(line_cloud_ip, 0, 1, 1, 1);

        line_cloud_port = new QLineEdit(frame_16);
        line_cloud_port->setObjectName(QString::fromUtf8("line_cloud_port"));
        QSizePolicy sizePolicy4(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(line_cloud_port->sizePolicy().hasHeightForWidth());
        line_cloud_port->setSizePolicy(sizePolicy4);
        line_cloud_port->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        line_cloud_port->setAlignment(Qt::AlignCenter);

        gridLayout_23->addWidget(line_cloud_port, 2, 1, 1, 1);


        gridLayout_21->addWidget(frame_16, 2, 0, 1, 2);

        groupBox_6 = new QGroupBox(groupBox_4);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        horizontalLayout_22 = new QHBoxLayout(groupBox_6);
        horizontalLayout_22->setObjectName(QString::fromUtf8("horizontalLayout_22"));
        label_localnet = new QLabel(groupBox_6);
        label_localnet->setObjectName(QString::fromUtf8("label_localnet"));
        label_localnet->setAlignment(Qt::AlignCenter);

        horizontalLayout_22->addWidget(label_localnet);

        label_localnet_state = new QLabel(groupBox_6);
        label_localnet_state->setObjectName(QString::fromUtf8("label_localnet_state"));
        label_localnet_state->setMaximumSize(QSize(20, 20));
        label_localnet_state->setPixmap(QPixmap(QString::fromUtf8(":/icon/images/\346\234\252\350\277\236\346\216\245(1).png")));
        label_localnet_state->setScaledContents(true);
        label_localnet_state->setAlignment(Qt::AlignCenter);

        horizontalLayout_22->addWidget(label_localnet_state);


        gridLayout_21->addWidget(groupBox_6, 0, 0, 1, 1);

        groupBox_7 = new QGroupBox(groupBox_4);
        groupBox_7->setObjectName(QString::fromUtf8("groupBox_7"));
        horizontalLayout_23 = new QHBoxLayout(groupBox_7);
        horizontalLayout_23->setObjectName(QString::fromUtf8("horizontalLayout_23"));
        label_cloudnet = new QLabel(groupBox_7);
        label_cloudnet->setObjectName(QString::fromUtf8("label_cloudnet"));
        label_cloudnet->setAlignment(Qt::AlignCenter);

        horizontalLayout_23->addWidget(label_cloudnet);

        label_cloudnet_state = new QLabel(groupBox_7);
        label_cloudnet_state->setObjectName(QString::fromUtf8("label_cloudnet_state"));
        label_cloudnet_state->setMaximumSize(QSize(20, 20));
        label_cloudnet_state->setPixmap(QPixmap(QString::fromUtf8(":/icon/images/\346\234\252\350\277\236\346\216\245(1).png")));
        label_cloudnet_state->setScaledContents(true);
        label_cloudnet_state->setAlignment(Qt::AlignCenter);

        horizontalLayout_23->addWidget(label_cloudnet_state);


        gridLayout_21->addWidget(groupBox_7, 0, 1, 1, 1);


        gridLayout_3->addWidget(groupBox_4, 0, 0, 1, 1);

        groupBox_9 = new QGroupBox(page_setting);
        groupBox_9->setObjectName(QString::fromUtf8("groupBox_9"));
        groupBox_9->setStyleSheet(QString::fromUtf8("font: 15pt \"Ubuntu\";"));
        verticalLayout_7 = new QVBoxLayout(groupBox_9);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        frame_23 = new QFrame(groupBox_9);
        frame_23->setObjectName(QString::fromUtf8("frame_23"));
        frame_23->setFrameShape(QFrame::StyledPanel);
        frame_23->setFrameShadow(QFrame::Raised);
        gridLayout_24 = new QGridLayout(frame_23);
        gridLayout_24->setObjectName(QString::fromUtf8("gridLayout_24"));
        frame_18 = new QFrame(frame_23);
        frame_18->setObjectName(QString::fromUtf8("frame_18"));
        frame_18->setFrameShape(QFrame::StyledPanel);
        frame_18->setFrameShadow(QFrame::Raised);
        horizontalLayout_26 = new QHBoxLayout(frame_18);
        horizontalLayout_26->setObjectName(QString::fromUtf8("horizontalLayout_26"));
        line_A = new QLineEdit(frame_18);
        line_A->setObjectName(QString::fromUtf8("line_A"));
        sizePolicy3.setHeightForWidth(line_A->sizePolicy().hasHeightForWidth());
        line_A->setSizePolicy(sizePolicy3);
        line_A->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        line_A->setAlignment(Qt::AlignCenter);

        horizontalLayout_26->addWidget(line_A);

        label_44 = new QLabel(frame_18);
        label_44->setObjectName(QString::fromUtf8("label_44"));

        horizontalLayout_26->addWidget(label_44);


        gridLayout_24->addWidget(frame_18, 1, 1, 1, 1);

        frame_17 = new QFrame(frame_23);
        frame_17->setObjectName(QString::fromUtf8("frame_17"));
        frame_17->setFrameShape(QFrame::StyledPanel);
        frame_17->setFrameShadow(QFrame::Raised);
        horizontalLayout_27 = new QHBoxLayout(frame_17);
        horizontalLayout_27->setObjectName(QString::fromUtf8("horizontalLayout_27"));
        line_V = new QLineEdit(frame_17);
        line_V->setObjectName(QString::fromUtf8("line_V"));
        sizePolicy3.setHeightForWidth(line_V->sizePolicy().hasHeightForWidth());
        line_V->setSizePolicy(sizePolicy3);
        line_V->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        line_V->setAlignment(Qt::AlignCenter);

        horizontalLayout_27->addWidget(line_V);

        label_43 = new QLabel(frame_17);
        label_43->setObjectName(QString::fromUtf8("label_43"));

        horizontalLayout_27->addWidget(label_43);


        gridLayout_24->addWidget(frame_17, 0, 1, 1, 1);

        label_41 = new QLabel(frame_23);
        label_41->setObjectName(QString::fromUtf8("label_41"));

        gridLayout_24->addWidget(label_41, 2, 0, 1, 1);

        label_40 = new QLabel(frame_23);
        label_40->setObjectName(QString::fromUtf8("label_40"));

        gridLayout_24->addWidget(label_40, 1, 0, 1, 1);

        label_39 = new QLabel(frame_23);
        label_39->setObjectName(QString::fromUtf8("label_39"));

        gridLayout_24->addWidget(label_39, 0, 0, 1, 1);

        frame_19 = new QFrame(frame_23);
        frame_19->setObjectName(QString::fromUtf8("frame_19"));
        frame_19->setFrameShape(QFrame::StyledPanel);
        frame_19->setFrameShadow(QFrame::Raised);
        horizontalLayout_28 = new QHBoxLayout(frame_19);
        horizontalLayout_28->setObjectName(QString::fromUtf8("horizontalLayout_28"));
        line_temp = new QLineEdit(frame_19);
        line_temp->setObjectName(QString::fromUtf8("line_temp"));
        sizePolicy3.setHeightForWidth(line_temp->sizePolicy().hasHeightForWidth());
        line_temp->setSizePolicy(sizePolicy3);
        line_temp->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        line_temp->setAlignment(Qt::AlignCenter);

        horizontalLayout_28->addWidget(line_temp);

        label_45 = new QLabel(frame_19);
        label_45->setObjectName(QString::fromUtf8("label_45"));

        horizontalLayout_28->addWidget(label_45);


        gridLayout_24->addWidget(frame_19, 2, 1, 1, 1);

        label_42 = new QLabel(frame_23);
        label_42->setObjectName(QString::fromUtf8("label_42"));

        gridLayout_24->addWidget(label_42, 3, 0, 1, 1);

        frame_20 = new QFrame(frame_23);
        frame_20->setObjectName(QString::fromUtf8("frame_20"));
        frame_20->setFrameShape(QFrame::StyledPanel);
        frame_20->setFrameShadow(QFrame::Raised);
        horizontalLayout_36 = new QHBoxLayout(frame_20);
        horizontalLayout_36->setObjectName(QString::fromUtf8("horizontalLayout_36"));
        line_humid = new QLineEdit(frame_20);
        line_humid->setObjectName(QString::fromUtf8("line_humid"));
        sizePolicy3.setHeightForWidth(line_humid->sizePolicy().hasHeightForWidth());
        line_humid->setSizePolicy(sizePolicy3);
        line_humid->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        line_humid->setAlignment(Qt::AlignCenter);

        horizontalLayout_36->addWidget(line_humid);

        label_46 = new QLabel(frame_20);
        label_46->setObjectName(QString::fromUtf8("label_46"));

        horizontalLayout_36->addWidget(label_46);


        gridLayout_24->addWidget(frame_20, 3, 1, 1, 1);


        verticalLayout_7->addWidget(frame_23);

        frame_22 = new QFrame(groupBox_9);
        frame_22->setObjectName(QString::fromUtf8("frame_22"));
        frame_22->setFrameShape(QFrame::StyledPanel);
        frame_22->setFrameShadow(QFrame::Raised);
        horizontalLayout_37 = new QHBoxLayout(frame_22);
        horizontalLayout_37->setObjectName(QString::fromUtf8("horizontalLayout_37"));
        pushButton_state_defult = new QPushButton(frame_22);
        pushButton_state_defult->setObjectName(QString::fromUtf8("pushButton_state_defult"));
        sizePolicy1.setHeightForWidth(pushButton_state_defult->sizePolicy().hasHeightForWidth());
        pushButton_state_defult->setSizePolicy(sizePolicy1);
        pushButton_state_defult->setMinimumSize(QSize(20, 60));

        horizontalLayout_37->addWidget(pushButton_state_defult);

        pushButton_6 = new QPushButton(frame_22);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        sizePolicy.setHeightForWidth(pushButton_6->sizePolicy().hasHeightForWidth());
        pushButton_6->setSizePolicy(sizePolicy);

        horizontalLayout_37->addWidget(pushButton_6);


        verticalLayout_7->addWidget(frame_22);


        gridLayout_3->addWidget(groupBox_9, 0, 1, 1, 1);

        groupBox_8 = new QGroupBox(page_setting);
        groupBox_8->setObjectName(QString::fromUtf8("groupBox_8"));
        QFont font4;
        font4.setPointSize(15);
        groupBox_8->setFont(font4);
        verticalLayout_2 = new QVBoxLayout(groupBox_8);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        frame_2 = new QFrame(groupBox_8);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        horizontalLayout_6 = new QHBoxLayout(frame_2);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_38 = new QLabel(frame_2);
        label_38->setObjectName(QString::fromUtf8("label_38"));
        label_38->setMinimumSize(QSize(100, 0));
        label_38->setFont(font4);
        label_38->setAlignment(Qt::AlignCenter);

        horizontalLayout_6->addWidget(label_38);

        line_username = new QLineEdit(frame_2);
        line_username->setObjectName(QString::fromUtf8("line_username"));
        line_username->setFont(font4);
        line_username->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        line_username->setAlignment(Qt::AlignCenter);

        horizontalLayout_6->addWidget(line_username);


        verticalLayout_2->addWidget(frame_2);

        frame_24 = new QFrame(groupBox_8);
        frame_24->setObjectName(QString::fromUtf8("frame_24"));
        frame_24->setFrameShape(QFrame::StyledPanel);
        frame_24->setFrameShadow(QFrame::Raised);
        horizontalLayout_8 = new QHBoxLayout(frame_24);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_48 = new QLabel(frame_24);
        label_48->setObjectName(QString::fromUtf8("label_48"));
        label_48->setMinimumSize(QSize(100, 0));
        label_48->setFont(font4);
        label_48->setAlignment(Qt::AlignCenter);

        horizontalLayout_8->addWidget(label_48);

        line_password = new QLineEdit(frame_24);
        line_password->setObjectName(QString::fromUtf8("line_password"));
        line_password->setFont(font4);
        line_password->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        line_password->setAlignment(Qt::AlignCenter);

        horizontalLayout_8->addWidget(line_password);


        verticalLayout_2->addWidget(frame_24);

        frame_25 = new QFrame(groupBox_8);
        frame_25->setObjectName(QString::fromUtf8("frame_25"));
        frame_25->setFont(font4);
        frame_25->setFrameShape(QFrame::StyledPanel);
        frame_25->setFrameShadow(QFrame::Raised);
        horizontalLayout_15 = new QHBoxLayout(frame_25);
        horizontalLayout_15->setObjectName(QString::fromUtf8("horizontalLayout_15"));
        label_50 = new QLabel(frame_25);
        label_50->setObjectName(QString::fromUtf8("label_50"));
        label_50->setMinimumSize(QSize(100, 0));
        label_50->setFont(font4);
        label_50->setAlignment(Qt::AlignCenter);

        horizontalLayout_15->addWidget(label_50);

        line_unit = new QLineEdit(frame_25);
        line_unit->setObjectName(QString::fromUtf8("line_unit"));
        line_unit->setFont(font4);
        line_unit->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        line_unit->setAlignment(Qt::AlignCenter);

        horizontalLayout_15->addWidget(line_unit);


        verticalLayout_2->addWidget(frame_25);

        pushButton_testnetwork = new QPushButton(groupBox_8);
        pushButton_testnetwork->setObjectName(QString::fromUtf8("pushButton_testnetwork"));
        pushButton_testnetwork->setMinimumSize(QSize(0, 60));
        pushButton_testnetwork->setFont(font4);

        verticalLayout_2->addWidget(pushButton_testnetwork);


        gridLayout_3->addWidget(groupBox_8, 1, 0, 1, 1);

        groupBox_5 = new QGroupBox(page_setting);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        groupBox_5->setFont(font4);
        verticalLayout_4 = new QVBoxLayout(groupBox_5);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        frame_26 = new QFrame(groupBox_5);
        frame_26->setObjectName(QString::fromUtf8("frame_26"));
        frame_26->setFrameShape(QFrame::StyledPanel);
        frame_26->setFrameShadow(QFrame::Raised);
        horizontalLayout_16 = new QHBoxLayout(frame_26);
        horizontalLayout_16->setObjectName(QString::fromUtf8("horizontalLayout_16"));
        label_51 = new QLabel(frame_26);
        label_51->setObjectName(QString::fromUtf8("label_51"));
        label_51->setMinimumSize(QSize(100, 0));
        label_51->setFont(font4);
        label_51->setAlignment(Qt::AlignCenter);

        horizontalLayout_16->addWidget(label_51);

        lineEdit = new QLineEdit(frame_26);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setFont(font4);
        lineEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        lineEdit->setAlignment(Qt::AlignCenter);

        horizontalLayout_16->addWidget(lineEdit);


        verticalLayout_4->addWidget(frame_26);

        frame_27 = new QFrame(groupBox_5);
        frame_27->setObjectName(QString::fromUtf8("frame_27"));
        frame_27->setFrameShape(QFrame::StyledPanel);
        frame_27->setFrameShadow(QFrame::Raised);
        horizontalLayout_24 = new QHBoxLayout(frame_27);
        horizontalLayout_24->setObjectName(QString::fromUtf8("horizontalLayout_24"));
        label_52 = new QLabel(frame_27);
        label_52->setObjectName(QString::fromUtf8("label_52"));
        label_52->setMinimumSize(QSize(100, 0));
        label_52->setFont(font4);
        label_52->setAlignment(Qt::AlignCenter);

        horizontalLayout_24->addWidget(label_52);

        lineEdit_2 = new QLineEdit(frame_27);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setFont(font4);
        lineEdit_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        lineEdit_2->setAlignment(Qt::AlignCenter);

        horizontalLayout_24->addWidget(lineEdit_2);


        verticalLayout_4->addWidget(frame_27);

        frame_28 = new QFrame(groupBox_5);
        frame_28->setObjectName(QString::fromUtf8("frame_28"));
        frame_28->setFrameShape(QFrame::StyledPanel);
        frame_28->setFrameShadow(QFrame::Raised);
        horizontalLayout_25 = new QHBoxLayout(frame_28);
        horizontalLayout_25->setObjectName(QString::fromUtf8("horizontalLayout_25"));
        label_53 = new QLabel(frame_28);
        label_53->setObjectName(QString::fromUtf8("label_53"));
        label_53->setMinimumSize(QSize(100, 0));
        label_53->setFont(font4);
        label_53->setAlignment(Qt::AlignCenter);

        horizontalLayout_25->addWidget(label_53);

        lineEdit_3 = new QLineEdit(frame_28);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setFont(font4);
        lineEdit_3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        lineEdit_3->setAlignment(Qt::AlignCenter);

        horizontalLayout_25->addWidget(lineEdit_3);


        verticalLayout_4->addWidget(frame_28);


        gridLayout_3->addWidget(groupBox_5, 1, 1, 1, 1);

        stackedWidget->addWidget(page_setting);
        page_state = new QWidget();
        page_state->setObjectName(QString::fromUtf8("page_state"));
        horizontalLayout_19 = new QHBoxLayout(page_state);
        horizontalLayout_19->setObjectName(QString::fromUtf8("horizontalLayout_19"));
        horizontalLayout_19->setContentsMargins(5, 5, 5, 5);
        widget_2 = new QWidget(page_state);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setStyleSheet(QString::fromUtf8("border-color: rgb(114, 159, 207);"));
        gridLayout_19 = new QGridLayout(widget_2);
        gridLayout_19->setObjectName(QString::fromUtf8("gridLayout_19"));
        gridLayout_19->setContentsMargins(1, 1, 1, 1);
        frame_8 = new QFrame(widget_2);
        frame_8->setObjectName(QString::fromUtf8("frame_8"));
        frame_8->setFrameShape(QFrame::Box);
        frame_8->setFrameShadow(QFrame::Plain);
        verticalLayout_5 = new QVBoxLayout(frame_8);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        label_14 = new QLabel(frame_8);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        sizePolicy3.setHeightForWidth(label_14->sizePolicy().hasHeightForWidth());
        label_14->setSizePolicy(sizePolicy3);
        QFont font5;
        font5.setPointSize(18);
        font5.setBold(true);
        label_14->setFont(font5);
        label_14->setStyleSheet(QString::fromUtf8("background-color: rgb(32, 74, 135);\n"
"color: rgb(254, 105, 105);"));
        label_14->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(label_14);

        frame_9 = new QFrame(frame_8);
        frame_9->setObjectName(QString::fromUtf8("frame_9"));
        frame_9->setFrameShape(QFrame::StyledPanel);
        frame_9->setFrameShadow(QFrame::Raised);
        gridLayout_14 = new QGridLayout(frame_9);
        gridLayout_14->setObjectName(QString::fromUtf8("gridLayout_14"));
        lcdNumber = new QLCDNumber(frame_9);
        lcdNumber->setObjectName(QString::fromUtf8("lcdNumber"));
        lcdNumber->setSmallDecimalPoint(false);
        lcdNumber->setProperty("value", QVariant(23.600000000000001));

        gridLayout_14->addWidget(lcdNumber, 0, 1, 1, 1);

        label_15 = new QLabel(frame_9);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        sizePolicy1.setHeightForWidth(label_15->sizePolicy().hasHeightForWidth());
        label_15->setSizePolicy(sizePolicy1);
        QFont font6;
        font6.setPointSize(18);
        label_15->setFont(font6);

        gridLayout_14->addWidget(label_15, 0, 0, 1, 1);

        label_17 = new QLabel(frame_9);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        QSizePolicy sizePolicy5(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(label_17->sizePolicy().hasHeightForWidth());
        label_17->setSizePolicy(sizePolicy5);
        QFont font7;
        font7.setPointSize(14);
        label_17->setFont(font7);

        gridLayout_14->addWidget(label_17, 0, 2, 1, 1);


        verticalLayout_5->addWidget(frame_9);

        frame_10 = new QFrame(frame_8);
        frame_10->setObjectName(QString::fromUtf8("frame_10"));
        frame_10->setFrameShape(QFrame::StyledPanel);
        frame_10->setFrameShadow(QFrame::Raised);
        gridLayout_15 = new QGridLayout(frame_10);
        gridLayout_15->setObjectName(QString::fromUtf8("gridLayout_15"));
        label_16 = new QLabel(frame_10);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setFont(font6);

        gridLayout_15->addWidget(label_16, 0, 0, 1, 1);

        lcdNumber_2 = new QLCDNumber(frame_10);
        lcdNumber_2->setObjectName(QString::fromUtf8("lcdNumber_2"));
        lcdNumber_2->setProperty("value", QVariant(2.800000000000000));

        gridLayout_15->addWidget(lcdNumber_2, 0, 1, 1, 1);

        label_18 = new QLabel(frame_10);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        sizePolicy5.setHeightForWidth(label_18->sizePolicy().hasHeightForWidth());
        label_18->setSizePolicy(sizePolicy5);
        label_18->setFont(font7);

        gridLayout_15->addWidget(label_18, 0, 2, 1, 1);


        verticalLayout_5->addWidget(frame_10);


        gridLayout_19->addWidget(frame_8, 0, 0, 1, 1);

        frame_5 = new QFrame(widget_2);
        frame_5->setObjectName(QString::fromUtf8("frame_5"));
        frame_5->setFrameShape(QFrame::Box);
        frame_5->setFrameShadow(QFrame::Plain);
        gridLayout_11 = new QGridLayout(frame_5);
        gridLayout_11->setObjectName(QString::fromUtf8("gridLayout_11"));
        frame_7 = new QFrame(frame_5);
        frame_7->setObjectName(QString::fromUtf8("frame_7"));
        frame_7->setFrameShape(QFrame::StyledPanel);
        frame_7->setFrameShadow(QFrame::Raised);
        gridLayout_13 = new QGridLayout(frame_7);
        gridLayout_13->setObjectName(QString::fromUtf8("gridLayout_13"));
        label_10 = new QLabel(frame_7);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setFont(font3);
        label_10->setAlignment(Qt::AlignCenter);

        gridLayout_13->addWidget(label_10, 0, 0, 1, 1);

        label_11 = new QLabel(frame_7);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setFont(font7);
        label_11->setAlignment(Qt::AlignCenter);

        gridLayout_13->addWidget(label_11, 1, 0, 1, 1);

        label_13 = new QLabel(frame_7);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setFont(font7);
        label_13->setAlignment(Qt::AlignCenter);

        gridLayout_13->addWidget(label_13, 2, 0, 1, 1);


        gridLayout_11->addWidget(frame_7, 2, 1, 1, 1);

        frame_6 = new QFrame(frame_5);
        frame_6->setObjectName(QString::fromUtf8("frame_6"));
        frame_6->setFrameShape(QFrame::StyledPanel);
        frame_6->setFrameShadow(QFrame::Raised);
        gridLayout_12 = new QGridLayout(frame_6);
        gridLayout_12->setObjectName(QString::fromUtf8("gridLayout_12"));
        label_9 = new QLabel(frame_6);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setFont(font3);
        label_9->setAlignment(Qt::AlignCenter);

        gridLayout_12->addWidget(label_9, 1, 0, 1, 1);

        label_12 = new QLabel(frame_6);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setFont(font3);
        label_12->setAlignment(Qt::AlignCenter);

        gridLayout_12->addWidget(label_12, 2, 0, 1, 1);

        label_6 = new QLabel(frame_6);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font3);
        label_6->setAlignment(Qt::AlignCenter);

        gridLayout_12->addWidget(label_6, 0, 0, 1, 1);


        gridLayout_11->addWidget(frame_6, 2, 0, 1, 1);

        label_4 = new QLabel(frame_5);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        sizePolicy3.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy3);
        label_4->setFont(font5);
        label_4->setStyleSheet(QString::fromUtf8("background-color: rgb(32, 74, 135);\n"
"color: rgb(254, 105, 105);"));
        label_4->setAlignment(Qt::AlignCenter);

        gridLayout_11->addWidget(label_4, 1, 0, 1, 2);


        gridLayout_19->addWidget(frame_5, 0, 1, 1, 1);

        frame_12 = new QFrame(widget_2);
        frame_12->setObjectName(QString::fromUtf8("frame_12"));
        frame_12->setFrameShape(QFrame::Box);
        frame_12->setFrameShadow(QFrame::Plain);
        gridLayout_16 = new QGridLayout(frame_12);
        gridLayout_16->setObjectName(QString::fromUtf8("gridLayout_16"));
        frame_13 = new QFrame(frame_12);
        frame_13->setObjectName(QString::fromUtf8("frame_13"));
        frame_13->setFrameShape(QFrame::StyledPanel);
        frame_13->setFrameShadow(QFrame::Raised);
        gridLayout_17 = new QGridLayout(frame_13);
        gridLayout_17->setObjectName(QString::fromUtf8("gridLayout_17"));
        label_21 = new QLabel(frame_13);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setFont(font3);
        label_21->setAlignment(Qt::AlignCenter);

        gridLayout_17->addWidget(label_21, 1, 0, 1, 1);

        label_22 = new QLabel(frame_13);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setFont(font3);
        label_22->setAlignment(Qt::AlignCenter);

        gridLayout_17->addWidget(label_22, 2, 0, 1, 1);

        label_20 = new QLabel(frame_13);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setFont(font3);
        label_20->setAlignment(Qt::AlignCenter);

        gridLayout_17->addWidget(label_20, 0, 0, 1, 1);


        gridLayout_16->addWidget(frame_13, 2, 1, 1, 1);

        frame_14 = new QFrame(frame_12);
        frame_14->setObjectName(QString::fromUtf8("frame_14"));
        frame_14->setFrameShape(QFrame::StyledPanel);
        frame_14->setFrameShadow(QFrame::Raised);
        gridLayout_18 = new QGridLayout(frame_14);
        gridLayout_18->setObjectName(QString::fromUtf8("gridLayout_18"));
        label_24 = new QLabel(frame_14);
        label_24->setObjectName(QString::fromUtf8("label_24"));
        label_24->setFont(font3);
        label_24->setAlignment(Qt::AlignCenter);

        gridLayout_18->addWidget(label_24, 2, 0, 1, 1);

        label_23 = new QLabel(frame_14);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setFont(font3);
        label_23->setAlignment(Qt::AlignCenter);

        gridLayout_18->addWidget(label_23, 1, 0, 1, 1);

        label_25 = new QLabel(frame_14);
        label_25->setObjectName(QString::fromUtf8("label_25"));
        label_25->setFont(font3);
        label_25->setAlignment(Qt::AlignCenter);

        gridLayout_18->addWidget(label_25, 0, 0, 1, 1);


        gridLayout_16->addWidget(frame_14, 2, 0, 1, 1);

        label_26 = new QLabel(frame_12);
        label_26->setObjectName(QString::fromUtf8("label_26"));
        sizePolicy3.setHeightForWidth(label_26->sizePolicy().hasHeightForWidth());
        label_26->setSizePolicy(sizePolicy3);
        label_26->setFont(font5);
        label_26->setStyleSheet(QString::fromUtf8("background-color: rgb(32, 74, 135);\n"
"color: rgb(254, 105, 105);"));
        label_26->setAlignment(Qt::AlignCenter);

        gridLayout_16->addWidget(label_26, 1, 0, 1, 2);


        gridLayout_19->addWidget(frame_12, 0, 2, 1, 1);

        frame_11 = new QFrame(widget_2);
        frame_11->setObjectName(QString::fromUtf8("frame_11"));
        frame_11->setFrameShape(QFrame::Box);
        frame_11->setFrameShadow(QFrame::Plain);
        verticalLayout_6 = new QVBoxLayout(frame_11);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        label_19 = new QLabel(frame_11);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setFont(font5);
        label_19->setStyleSheet(QString::fromUtf8("background-color: rgb(32, 74, 135);\n"
"color: rgb(254, 105, 105);"));
        label_19->setAlignment(Qt::AlignCenter);

        verticalLayout_6->addWidget(label_19);

        textBrowser_2 = new QTextBrowser(frame_11);
        textBrowser_2->setObjectName(QString::fromUtf8("textBrowser_2"));
        textBrowser_2->setFont(font7);
        textBrowser_2->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textBrowser_2->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        textBrowser_2->setOpenExternalLinks(false);

        verticalLayout_6->addWidget(textBrowser_2);


        gridLayout_19->addWidget(frame_11, 1, 0, 1, 3);


        horizontalLayout_19->addWidget(widget_2);

        stackedWidget->addWidget(page_state);
        page_4 = new QWidget();
        page_4->setObjectName(QString::fromUtf8("page_4"));
        gridLayout_4 = new QGridLayout(page_4);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setContentsMargins(5, 5, 5, 5);
        widget_15 = new QWidget(page_4);
        widget_15->setObjectName(QString::fromUtf8("widget_15"));
        widget_15->setStyleSheet(QString::fromUtf8("QWidget {\n"
"	background-color: rgb(14,25,31);\n"
"}"));
        monocularCameraA1_4 = new CustomControl(widget_15);
        monocularCameraA1_4->setObjectName(QString::fromUtf8("monocularCameraA1_4"));
        monocularCameraA1_4->setGeometry(QRect(60, 150, 700, 550));
        monocularCameraA1_4->setStyleSheet(QString::fromUtf8("QWidget{\n"
"	background-color:transparent;\n"
"}"));
        pushButton_18 = new QPushButton(monocularCameraA1_4);
        pushButton_18->setObjectName(QString::fromUtf8("pushButton_18"));
        pushButton_18->setEnabled(true);
        pushButton_18->setGeometry(QRect(25, 15, 39, 35));
        pushButton_18->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border: none;\n"
"	background-color: transparent;\n"
"}"));
        pushButton_18->setIcon(icon13);
        pushButton_18->setIconSize(QSize(35, 35));
        pushButton_19 = new QPushButton(monocularCameraA1_4);
        pushButton_19->setObjectName(QString::fromUtf8("pushButton_19"));
        pushButton_19->setGeometry(QRect(635, 15, 39, 35));
        pushButton_19->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border: none;\n"
"	background-color: transparent;\n"
"}"));
        pushButton_19->setIcon(icon13);
        pushButton_19->setIconSize(QSize(35, 35));
        label_3 = new QLabel(monocularCameraA1_4);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(35, 50, 630, 472));
        label_3->setStyleSheet(QString::fromUtf8("border:1px solid #ccc;\n"
"background-color:rgb(14, 25, 31);"));
        label_3->setAlignment(Qt::AlignCenter);
        widget_16 = new QWidget(monocularCameraA1_4);
        widget_16->setObjectName(QString::fromUtf8("widget_16"));
        widget_16->setGeometry(QRect(35, 50, 630, 472));
        widget_16->setStyleSheet(QString::fromUtf8(""));
        gridLayout_46 = new QGridLayout(widget_16);
        gridLayout_46->setObjectName(QString::fromUtf8("gridLayout_46"));
        gridLayout_46->setContentsMargins(1, 1, 1, 1);
        label_3->raise();
        pushButton_18->raise();
        pushButton_19->raise();
        widget_16->raise();
        monocularCameraA1_5 = new CustomControl(widget_15);
        monocularCameraA1_5->setObjectName(QString::fromUtf8("monocularCameraA1_5"));
        monocularCameraA1_5->setGeometry(QRect(850, 150, 700, 550));
        monocularCameraA1_5->setStyleSheet(QString::fromUtf8("QWidget{\n"
"	background-color:transparent;\n"
"}"));
        pushButton_20 = new QPushButton(monocularCameraA1_5);
        pushButton_20->setObjectName(QString::fromUtf8("pushButton_20"));
        pushButton_20->setEnabled(true);
        pushButton_20->setGeometry(QRect(25, 15, 39, 35));
        pushButton_20->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border: none;\n"
"	background-color: transparent;\n"
"}"));
        pushButton_20->setIcon(icon13);
        pushButton_20->setIconSize(QSize(35, 35));
        pushButton_21 = new QPushButton(monocularCameraA1_5);
        pushButton_21->setObjectName(QString::fromUtf8("pushButton_21"));
        pushButton_21->setGeometry(QRect(635, 15, 39, 35));
        pushButton_21->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border: none;\n"
"	background-color: transparent;\n"
"}"));
        pushButton_21->setIcon(icon13);
        pushButton_21->setIconSize(QSize(35, 35));
        label_5 = new QLabel(monocularCameraA1_5);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(35, 50, 630, 472));
        label_5->setStyleSheet(QString::fromUtf8("border:1px solid #ccc;\n"
"background-color:rgb(14, 25, 31);"));
        label_5->setAlignment(Qt::AlignCenter);
        widget_13 = new QWidget(monocularCameraA1_5);
        widget_13->setObjectName(QString::fromUtf8("widget_13"));
        widget_13->setGeometry(QRect(35, 50, 630, 472));
        widget_13->setStyleSheet(QString::fromUtf8(""));
        gridLayout_42 = new QGridLayout(widget_13);
        gridLayout_42->setObjectName(QString::fromUtf8("gridLayout_42"));
        gridLayout_42->setContentsMargins(1, 1, 1, 1);
        label_5->raise();
        pushButton_20->raise();
        pushButton_21->raise();
        widget_13->raise();

        gridLayout_4->addWidget(widget_15, 0, 0, 1, 1);

        stackedWidget->addWidget(page_4);
        page_5 = new QWidget();
        page_5->setObjectName(QString::fromUtf8("page_5"));
        gridLayout_36 = new QGridLayout(page_5);
        gridLayout_36->setObjectName(QString::fromUtf8("gridLayout_36"));
        gridLayout_36->setContentsMargins(5, 5, 5, 5);
        widget_8 = new QWidget(page_5);
        widget_8->setObjectName(QString::fromUtf8("widget_8"));
        widget_8->setStyleSheet(QString::fromUtf8("QWidget {\n"
"	border:1px solid #888;\n"
"}"));
        gridLayout_39 = new QGridLayout(widget_8);
        gridLayout_39->setObjectName(QString::fromUtf8("gridLayout_39"));
        gridLayout_34 = new QGridLayout();
        gridLayout_34->setObjectName(QString::fromUtf8("gridLayout_34"));

        gridLayout_39->addLayout(gridLayout_34, 0, 0, 1, 3);

        label_62 = new QLabel(widget_8);
        label_62->setObjectName(QString::fromUtf8("label_62"));
        label_62->setMaximumSize(QSize(16777215, 30));

        gridLayout_39->addWidget(label_62, 1, 0, 1, 1);

        IP_Edit_9 = new QLineEdit(widget_8);
        IP_Edit_9->setObjectName(QString::fromUtf8("IP_Edit_9"));
        IP_Edit_9->setMaximumSize(QSize(16777215, 30));

        gridLayout_39->addWidget(IP_Edit_9, 1, 1, 1, 1);

        Open_BT_9 = new QPushButton(widget_8);
        Open_BT_9->setObjectName(QString::fromUtf8("Open_BT_9"));
        Open_BT_9->setMinimumSize(QSize(50, 0));
        Open_BT_9->setMaximumSize(QSize(16777215, 30));

        gridLayout_39->addWidget(Open_BT_9, 1, 2, 1, 1);

        gridLayout_39->setRowMinimumHeight(0, 10);
        gridLayout_39->setRowMinimumHeight(1, 1);

        gridLayout_36->addWidget(widget_8, 1, 0, 1, 1);

        widget_6 = new QWidget(page_5);
        widget_6->setObjectName(QString::fromUtf8("widget_6"));
        widget_6->setStyleSheet(QString::fromUtf8("QWidget {\n"
"	border:1px solid #888;\n"
"}"));
        gridLayout_38 = new QGridLayout(widget_6);
        gridLayout_38->setObjectName(QString::fromUtf8("gridLayout_38"));
        gridLayout_29 = new QGridLayout();
        gridLayout_29->setObjectName(QString::fromUtf8("gridLayout_29"));

        gridLayout_38->addLayout(gridLayout_29, 0, 0, 1, 3);

        label_31 = new QLabel(widget_6);
        label_31->setObjectName(QString::fromUtf8("label_31"));

        gridLayout_38->addWidget(label_31, 1, 0, 1, 1);

        IP_Edit_4 = new QLineEdit(widget_6);
        IP_Edit_4->setObjectName(QString::fromUtf8("IP_Edit_4"));
        IP_Edit_4->setMaximumSize(QSize(16777215, 30));

        gridLayout_38->addWidget(IP_Edit_4, 1, 1, 1, 1);

        Open_BT_4 = new QPushButton(widget_6);
        Open_BT_4->setObjectName(QString::fromUtf8("Open_BT_4"));
        Open_BT_4->setMinimumSize(QSize(50, 0));
        Open_BT_4->setMaximumSize(QSize(16777215, 30));

        gridLayout_38->addWidget(Open_BT_4, 1, 2, 1, 1);

        gridLayout_38->setRowMinimumHeight(0, 10);
        gridLayout_38->setRowMinimumHeight(1, 1);

        gridLayout_36->addWidget(widget_6, 0, 2, 1, 1);

        widget_9 = new QWidget(page_5);
        widget_9->setObjectName(QString::fromUtf8("widget_9"));
        widget_9->setStyleSheet(QString::fromUtf8("QWidget {\n"
"	border:1px solid #888;\n"
"}"));
        gridLayout_41 = new QGridLayout(widget_9);
        gridLayout_41->setObjectName(QString::fromUtf8("gridLayout_41"));
        Open_BT_10 = new QPushButton(widget_9);
        Open_BT_10->setObjectName(QString::fromUtf8("Open_BT_10"));

        gridLayout_41->addWidget(Open_BT_10, 1, 2, 1, 1);

        IP_Edit_10 = new QLineEdit(widget_9);
        IP_Edit_10->setObjectName(QString::fromUtf8("IP_Edit_10"));

        gridLayout_41->addWidget(IP_Edit_10, 1, 1, 1, 1);

        gridLayout_35 = new QGridLayout();
        gridLayout_35->setObjectName(QString::fromUtf8("gridLayout_35"));

        gridLayout_41->addLayout(gridLayout_35, 0, 0, 1, 3);

        label_65 = new QLabel(widget_9);
        label_65->setObjectName(QString::fromUtf8("label_65"));

        gridLayout_41->addWidget(label_65, 1, 0, 1, 1);

        gridLayout_41->setRowMinimumHeight(0, 10);
        gridLayout_41->setRowMinimumHeight(1, 1);

        gridLayout_36->addWidget(widget_9, 1, 2, 1, 1);

        widget_5 = new QWidget(page_5);
        widget_5->setObjectName(QString::fromUtf8("widget_5"));
        widget_5->setStyleSheet(QString::fromUtf8("QWidget {\n"
"	border:1px solid #888;\n"
"}"));
        gridLayoutWidget_2 = new QWidget(widget_5);
        gridLayoutWidget_2->setObjectName(QString::fromUtf8("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(6, 6, 531, 371));
        gridLayout_28 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_28->setObjectName(QString::fromUtf8("gridLayout_28"));
        gridLayout_28->setContentsMargins(0, 0, 0, 0);
        label_28 = new QLabel(widget_5);
        label_28->setObjectName(QString::fromUtf8("label_28"));
        label_28->setGeometry(QRect(6, 384, 43, 16));
        sizePolicy1.setHeightForWidth(label_28->sizePolicy().hasHeightForWidth());
        label_28->setSizePolicy(sizePolicy1);
        IP_Edit_3 = new QLineEdit(widget_5);
        IP_Edit_3->setObjectName(QString::fromUtf8("IP_Edit_3"));
        IP_Edit_3->setGeometry(QRect(53, 384, 401, 18));
        QSizePolicy sizePolicy6(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(IP_Edit_3->sizePolicy().hasHeightForWidth());
        IP_Edit_3->setSizePolicy(sizePolicy6);
        IP_Edit_3->setMaximumSize(QSize(16777215, 30));
        Open_BT_3 = new QPushButton(widget_5);
        Open_BT_3->setObjectName(QString::fromUtf8("Open_BT_3"));
        Open_BT_3->setGeometry(QRect(470, 380, 50, 30));
        sizePolicy1.setHeightForWidth(Open_BT_3->sizePolicy().hasHeightForWidth());
        Open_BT_3->setSizePolicy(sizePolicy1);
        Open_BT_3->setMinimumSize(QSize(50, 30));
        Open_BT_3->setMaximumSize(QSize(16777215, 30));

        gridLayout_36->addWidget(widget_5, 0, 1, 1, 1);

        widget_7 = new QWidget(page_5);
        widget_7->setObjectName(QString::fromUtf8("widget_7"));
        widget_7->setStyleSheet(QString::fromUtf8("QWidget {\n"
"	border:1px solid #888;\n"
"}"));
        gridLayout_40 = new QGridLayout(widget_7);
        gridLayout_40->setObjectName(QString::fromUtf8("gridLayout_40"));
        gridLayout_33 = new QGridLayout();
        gridLayout_33->setObjectName(QString::fromUtf8("gridLayout_33"));

        gridLayout_40->addLayout(gridLayout_33, 0, 0, 1, 3);

        label_59 = new QLabel(widget_7);
        label_59->setObjectName(QString::fromUtf8("label_59"));

        gridLayout_40->addWidget(label_59, 1, 0, 1, 1);

        IP_Edit_8 = new QLineEdit(widget_7);
        IP_Edit_8->setObjectName(QString::fromUtf8("IP_Edit_8"));
        IP_Edit_8->setMaximumSize(QSize(16777215, 30));

        gridLayout_40->addWidget(IP_Edit_8, 1, 1, 1, 1);

        Open_BT_8 = new QPushButton(widget_7);
        Open_BT_8->setObjectName(QString::fromUtf8("Open_BT_8"));
        Open_BT_8->setMinimumSize(QSize(50, 0));
        Open_BT_8->setMaximumSize(QSize(16777215, 30));

        gridLayout_40->addWidget(Open_BT_8, 1, 2, 1, 1);

        gridLayout_40->setRowMinimumHeight(0, 10);
        gridLayout_40->setRowMinimumHeight(1, 1);

        gridLayout_36->addWidget(widget_7, 1, 1, 1, 1);

        widget_4 = new QWidget(page_5);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        widget_4->setStyleSheet(QString::fromUtf8("QWidget {\n"
"	border:1px solid #888;\n"
"}"));
        gridLayoutWidget = new QWidget(widget_4);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(6, 6, 531, 631));
        gridLayout_27 = new QGridLayout(gridLayoutWidget);
        gridLayout_27->setObjectName(QString::fromUtf8("gridLayout_27"));
        gridLayout_27->setContentsMargins(0, 0, 0, 0);
        label_27 = new QLabel(widget_4);
        label_27->setObjectName(QString::fromUtf8("label_27"));
        label_27->setGeometry(QRect(10, 650, 43, 16));
        IP_Edit_2 = new QLineEdit(widget_4);
        IP_Edit_2->setObjectName(QString::fromUtf8("IP_Edit_2"));
        IP_Edit_2->setGeometry(QRect(57, 650, 421, 18));
        IP_Edit_2->setMaximumSize(QSize(16777215, 30));
        Open_BT_2 = new QPushButton(widget_4);
        Open_BT_2->setObjectName(QString::fromUtf8("Open_BT_2"));
        Open_BT_2->setGeometry(QRect(486, 650, 50, 16));
        Open_BT_2->setMinimumSize(QSize(50, 0));
        Open_BT_2->setMaximumSize(QSize(16777215, 30));

        gridLayout_36->addWidget(widget_4, 0, 0, 1, 1);

        gridLayout_36->setRowMinimumHeight(0, 1);
        gridLayout_36->setRowMinimumHeight(1, 1);
        stackedWidget->addWidget(page_5);
        page_6 = new QWidget();
        page_6->setObjectName(QString::fromUtf8("page_6"));
        gridLayout_30 = new QGridLayout(page_6);
        gridLayout_30->setObjectName(QString::fromUtf8("gridLayout_30"));
        gridLayout_30->setContentsMargins(5, 5, 5, 5);
        report = new QWidget(page_6);
        report->setObjectName(QString::fromUtf8("report"));

        gridLayout_30->addWidget(report, 0, 0, 1, 1);

        stackedWidget->addWidget(page_6);
        page_7 = new QWidget();
        page_7->setObjectName(QString::fromUtf8("page_7"));
        groupBox_10 = new QGroupBox(page_7);
        groupBox_10->setObjectName(QString::fromUtf8("groupBox_10"));
        groupBox_10->setGeometry(QRect(0, 720, 621, 181));
        QFont font8;
        font8.setPointSize(17);
        font8.setBold(true);
        groupBox_10->setFont(font8);
        groupBox_10->setStyleSheet(QString::fromUtf8("color:rgb(226,226,226)"));
        groupBox_10->setFlat(false);
        verticalLayoutWidget = new QWidget(groupBox_10);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 30, 231, 141));
        verticalLayout_18 = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_18->setObjectName(QString::fromUtf8("verticalLayout_18"));
        verticalLayout_18->setContentsMargins(0, 0, 0, 0);
        Roll_show = new QLabel(verticalLayoutWidget);
        Roll_show->setObjectName(QString::fromUtf8("Roll_show"));
        Roll_show->setFont(font8);
        Roll_show->setStyleSheet(QString::fromUtf8("color:rgb(226,226,226)"));

        verticalLayout_18->addWidget(Roll_show);

        Yaw_show = new QLabel(verticalLayoutWidget);
        Yaw_show->setObjectName(QString::fromUtf8("Yaw_show"));
        Yaw_show->setFont(font8);
        Yaw_show->setStyleSheet(QString::fromUtf8("color:rgb(226,226,226)"));

        verticalLayout_18->addWidget(Yaw_show);

        Pitch_show = new QLabel(verticalLayoutWidget);
        Pitch_show->setObjectName(QString::fromUtf8("Pitch_show"));
        Pitch_show->setFont(font8);
        Pitch_show->setStyleSheet(QString::fromUtf8("color:rgb(226,226,226)"));

        verticalLayout_18->addWidget(Pitch_show);

        verticalLayoutWidget_2 = new QWidget(groupBox_10);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(270, 30, 331, 141));
        verticalLayout_19 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_19->setObjectName(QString::fromUtf8("verticalLayout_19"));
        verticalLayout_19->setContentsMargins(0, 0, 0, 0);
        Depth_show = new QLabel(verticalLayoutWidget_2);
        Depth_show->setObjectName(QString::fromUtf8("Depth_show"));
        Depth_show->setFont(font8);
        Depth_show->setStyleSheet(QString::fromUtf8("color:rgb(226,226,226)"));

        verticalLayout_19->addWidget(Depth_show);

        Temp_show = new QLabel(verticalLayoutWidget_2);
        Temp_show->setObjectName(QString::fromUtf8("Temp_show"));
        Temp_show->setFont(font8);
        Temp_show->setStyleSheet(QString::fromUtf8("color:rgb(226,226,226)"));

        verticalLayout_19->addWidget(Temp_show);

        rov_status = new QLabel(verticalLayoutWidget_2);
        rov_status->setObjectName(QString::fromUtf8("rov_status"));
        rov_status->setFont(font8);
        rov_status->setStyleSheet(QString::fromUtf8("color:rgb(226,226,226)"));

        verticalLayout_19->addWidget(rov_status);

        rulerBar = new RulerBar(page_7);
        rulerBar->setObjectName(QString::fromUtf8("rulerBar"));
        rulerBar->setGeometry(QRect(830, 440, 101, 381));
        rulerBar->setMaxValue(300.000000000000000);
        rulerBar->setValue(0.000000000000000);
        rulerBar->setLongStep(30);
        rulerBar->setBgColorStart(QColor(100, 100, 100));
        rulerBar->setBgColorEnd(QColor(7, 22, 79));
        Depth_show_3 = new QLabel(page_7);
        Depth_show_3->setObjectName(QString::fromUtf8("Depth_show_3"));
        Depth_show_3->setGeometry(QRect(810, 830, 141, 42));
        Depth_show_3->setFont(font8);
        Depth_show_3->setStyleSheet(QString::fromUtf8("color:rgb(226,226,226)"));
        label_149 = new QLabel(page_7);
        label_149->setObjectName(QString::fromUtf8("label_149"));
        label_149->setGeometry(QRect(0, 0, 401, 41));
        label_149->setStyleSheet(QString::fromUtf8("background-color:rgb(0, 74, 189);\n"
"color: rgb(185, 129, 168);\n"
"font-size:18px;\n"
"font-weight:700;\n"
"border-radius:10px;\n"
"border:2px dashed rgb(109, 156, 237)"));
        label_149->setAlignment(Qt::AlignCenter);
        frame_56 = new QFrame(page_7);
        frame_56->setObjectName(QString::fromUtf8("frame_56"));
        frame_56->setGeometry(QRect(0, 40, 401, 381));
        frame_56->setStyleSheet(QString::fromUtf8("background-color:rgb(7, 22, 79);\n"
"border:2px dashed rgb(109, 156, 237);\n"
""));
        frame_56->setFrameShape(QFrame::StyledPanel);
        frame_56->setFrameShadow(QFrame::Raised);
        widget_36 = new QWidget(frame_56);
        widget_36->setObjectName(QString::fromUtf8("widget_36"));
        widget_36->setGeometry(QRect(10, 10, 381, 361));
        widget_36->setStyleSheet(QString::fromUtf8("border:none;"));
        gaugeCompassPan = new GaugeCompassPan(widget_36);
        gaugeCompassPan->setObjectName(QString::fromUtf8("gaugeCompassPan"));
        gaugeCompassPan->setGeometry(QRect(15, 10, 160, 160));
        gaugePlane = new GaugePlane(widget_36);
        gaugePlane->setObjectName(QString::fromUtf8("gaugePlane"));
        gaugePlane->setGeometry(QRect(205, 10, 141, 160));
        Roll_show_2 = new QLabel(widget_36);
        Roll_show_2->setObjectName(QString::fromUtf8("Roll_show_2"));
        Roll_show_2->setGeometry(QRect(20, 190, 181, 42));
        Roll_show_2->setFont(font8);
        Roll_show_2->setStyleSheet(QString::fromUtf8("color:rgb(226,226,226)"));
        Roll_show_3 = new QLabel(widget_36);
        Roll_show_3->setObjectName(QString::fromUtf8("Roll_show_3"));
        Roll_show_3->setGeometry(QRect(20, 245, 201, 42));
        Roll_show_3->setFont(font8);
        Roll_show_3->setStyleSheet(QString::fromUtf8("color:rgb(226,226,226)"));
        Roll_show_4 = new QLabel(widget_36);
        Roll_show_4->setObjectName(QString::fromUtf8("Roll_show_4"));
        Roll_show_4->setGeometry(QRect(20, 300, 331, 42));
        Roll_show_4->setFont(font8);
        Roll_show_4->setStyleSheet(QString::fromUtf8("color:rgb(226,226,226)"));
        RollValue = new QLabel(widget_36);
        RollValue->setObjectName(QString::fromUtf8("RollValue"));
        RollValue->setGeometry(QRect(230, 190, 151, 42));
        RollValue->setFont(font8);
        RollValue->setStyleSheet(QString::fromUtf8("color:rgb(226,226,226)"));
        PitchValue = new QLabel(widget_36);
        PitchValue->setObjectName(QString::fromUtf8("PitchValue"));
        PitchValue->setGeometry(QRect(230, 245, 151, 42));
        PitchValue->setFont(font8);
        PitchValue->setStyleSheet(QString::fromUtf8("color:rgb(226,226,226)"));
        YawValue = new QLabel(widget_36);
        YawValue->setObjectName(QString::fromUtf8("YawValue"));
        YawValue->setGeometry(QRect(230, 300, 151, 42));
        YawValue->setFont(font8);
        YawValue->setStyleSheet(QString::fromUtf8("color:rgb(226,226,226)"));
        label_150 = new QLabel(page_7);
        label_150->setObjectName(QString::fromUtf8("label_150"));
        label_150->setGeometry(QRect(0, 430, 451, 41));
        label_150->setStyleSheet(QString::fromUtf8("background-color:rgb(0, 74, 189);\n"
"color: rgb(185, 129, 168);\n"
"font-size:18px;\n"
"font-weight:700;\n"
"border-radius:10px;\n"
"border:2px dashed rgb(109, 156, 237)"));
        label_150->setAlignment(Qt::AlignCenter);
        frame_57 = new QFrame(page_7);
        frame_57->setObjectName(QString::fromUtf8("frame_57"));
        frame_57->setGeometry(QRect(0, 470, 451, 231));
        frame_57->setStyleSheet(QString::fromUtf8("background-color:rgb(7, 22, 79);\n"
"border:2px dashed rgb(109, 156, 237);\n"
""));
        frame_57->setFrameShape(QFrame::StyledPanel);
        frame_57->setFrameShadow(QFrame::Raised);
        widget_37 = new QWidget(frame_57);
        widget_37->setObjectName(QString::fromUtf8("widget_37"));
        widget_37->setGeometry(QRect(10, 10, 431, 211));
        widget_37->setStyleSheet(QString::fromUtf8("border:none;"));
        Depth_show_2 = new QLabel(widget_37);
        Depth_show_2->setObjectName(QString::fromUtf8("Depth_show_2"));
        Depth_show_2->setGeometry(QRect(10, 40, 81, 42));
        Depth_show_2->setFont(font8);
        Depth_show_2->setStyleSheet(QString::fromUtf8("color:rgb(226,226,226)"));
        verticalSlider = new QSlider(widget_37);
        verticalSlider->setObjectName(QString::fromUtf8("verticalSlider"));
        verticalSlider->setGeometry(QRect(90, 50, 300, 30));
        verticalSlider->setMaximum(10);
        verticalSlider->setOrientation(Qt::Horizontal);
        verticalSlider->setTickPosition(QSlider::TicksAbove);
        verticalSlider->setTickInterval(0);
        Depth_show_4 = new QLabel(widget_37);
        Depth_show_4->setObjectName(QString::fromUtf8("Depth_show_4"));
        Depth_show_4->setGeometry(QRect(10, 120, 81, 42));
        Depth_show_4->setFont(font8);
        Depth_show_4->setStyleSheet(QString::fromUtf8("color:rgb(226,226,226)"));
        verticalSlider_2 = new QSlider(widget_37);
        verticalSlider_2->setObjectName(QString::fromUtf8("verticalSlider_2"));
        verticalSlider_2->setGeometry(QRect(90, 120, 300, 30));
        verticalSlider_2->setMaximum(10);
        verticalSlider_2->setOrientation(Qt::Horizontal);
        verticalSlider_2->setTickPosition(QSlider::TicksAbove);
        verticalSlider_2->setTickInterval(0);
        label_151 = new QLabel(page_7);
        label_151->setObjectName(QString::fromUtf8("label_151"));
        label_151->setGeometry(QRect(400, 0, 730, 41));
        label_151->setStyleSheet(QString::fromUtf8("background-color:rgb(0, 74, 189);\n"
"color: rgb(185, 129, 168);\n"
"font-size:18px;\n"
"font-weight:700;\n"
"border-radius:10px;\n"
"border:2px dashed rgb(109, 156, 237)"));
        label_151->setAlignment(Qt::AlignCenter);
        frame_58 = new QFrame(page_7);
        frame_58->setObjectName(QString::fromUtf8("frame_58"));
        frame_58->setGeometry(QRect(400, 40, 730, 381));
        frame_58->setStyleSheet(QString::fromUtf8("background-color:rgb(7, 22, 79);\n"
"border:2px dashed rgb(109, 156, 237);\n"
""));
        frame_58->setFrameShape(QFrame::StyledPanel);
        frame_58->setFrameShadow(QFrame::Raised);
        widget_38 = new QWidget(frame_58);
        widget_38->setObjectName(QString::fromUtf8("widget_38"));
        widget_38->setGeometry(QRect(10, 10, 711, 361));
        widget_38->setStyleSheet(QString::fromUtf8("border:none;"));
        gaugeWatchZ = new GaugeWatch(widget_38);
        gaugeWatchZ->setObjectName(QString::fromUtf8("gaugeWatchZ"));
        gaugeWatchZ->setGeometry(QRect(520, 20, 150, 150));
        gaugeWatchZ->setMinValue(-5.000000000000000);
        gaugeWatchZ->setMaxValue(5.000000000000000);
        gaugeWatchY = new GaugeWatch(widget_38);
        gaugeWatchY->setObjectName(QString::fromUtf8("gaugeWatchY"));
        gaugeWatchY->setGeometry(QRect(280, 20, 150, 150));
        gaugeWatchY->setMinValue(-5.000000000000000);
        gaugeWatchY->setMaxValue(5.000000000000000);
        gaugeWatchX = new GaugeWatch(widget_38);
        gaugeWatchX->setObjectName(QString::fromUtf8("gaugeWatchX"));
        gaugeWatchX->setGeometry(QRect(40, 20, 150, 150));
        gaugeWatchX->setMinValue(-5.000000000000000);
        gaugeWatchX->setMaxValue(5.000000000000000);
        VelocityX = new QLabel(widget_38);
        VelocityX->setObjectName(QString::fromUtf8("VelocityX"));
        VelocityX->setGeometry(QRect(40, 210, 161, 42));
        VelocityX->setFont(font8);
        VelocityX->setStyleSheet(QString::fromUtf8("color:rgb(226,226,226)"));
        AccelX = new QLabel(widget_38);
        AccelX->setObjectName(QString::fromUtf8("AccelX"));
        AccelX->setGeometry(QRect(40, 260, 151, 42));
        AccelX->setFont(font8);
        AccelX->setStyleSheet(QString::fromUtf8("color:rgb(226,226,226)"));
        VelocityY = new QLabel(widget_38);
        VelocityY->setObjectName(QString::fromUtf8("VelocityY"));
        VelocityY->setGeometry(QRect(280, 210, 211, 42));
        VelocityY->setFont(font8);
        VelocityY->setStyleSheet(QString::fromUtf8("color:rgb(226,226,226)"));
        AccelY = new QLabel(widget_38);
        AccelY->setObjectName(QString::fromUtf8("AccelY"));
        AccelY->setGeometry(QRect(280, 260, 229, 42));
        AccelY->setFont(font8);
        AccelY->setStyleSheet(QString::fromUtf8("color:rgb(226,226,226)"));
        VelocityZ = new QLabel(widget_38);
        VelocityZ->setObjectName(QString::fromUtf8("VelocityZ"));
        VelocityZ->setGeometry(QRect(520, 210, 191, 42));
        VelocityZ->setFont(font8);
        VelocityZ->setStyleSheet(QString::fromUtf8("color:rgb(226,226,226)"));
        AccelZ = new QLabel(widget_38);
        AccelZ->setObjectName(QString::fromUtf8("AccelZ"));
        AccelZ->setGeometry(QRect(520, 260, 201, 42));
        AccelZ->setFont(font8);
        AccelZ->setStyleSheet(QString::fromUtf8("color:rgb(226,226,226)"));
        label_152 = new QLabel(page_7);
        label_152->setObjectName(QString::fromUtf8("label_152"));
        label_152->setGeometry(QRect(1130, 0, 501, 41));
        label_152->setStyleSheet(QString::fromUtf8("background-color:rgb(0, 74, 189);\n"
"color: rgb(185, 129, 168);\n"
"font-size:18px;\n"
"font-weight:700;\n"
"border-radius:10px;\n"
"border:2px dashed rgb(109, 156, 237)"));
        label_152->setAlignment(Qt::AlignCenter);
        frame_59 = new QFrame(page_7);
        frame_59->setObjectName(QString::fromUtf8("frame_59"));
        frame_59->setGeometry(QRect(1130, 40, 501, 421));
        frame_59->setStyleSheet(QString::fromUtf8("background-color:rgb(7, 22, 79);\n"
"border:2px dashed rgb(109, 156, 237);\n"
""));
        frame_59->setFrameShape(QFrame::StyledPanel);
        frame_59->setFrameShadow(QFrame::Raised);
        widget_39 = new QWidget(frame_59);
        widget_39->setObjectName(QString::fromUtf8("widget_39"));
        widget_39->setGeometry(QRect(10, 10, 481, 401));
        widget_39->setStyleSheet(QString::fromUtf8("border:none;"));
        progressThree_3 = new ProgressThree(widget_39);
        progressThree_3->setObjectName(QString::fromUtf8("progressThree_3"));
        progressThree_3->setGeometry(QRect(170, 110, 300, 30));
        progressThree_3->setValue1(1500);
        progressThree_3->setValue2(400);
        progressThree_3->setValue3(0);
        progressThree_3->setColor1(QColor(0, 255, 0));
        progressThree_3->setColor2(QColor(255, 255, 255));
        progressThree_2 = new ProgressThree(widget_39);
        progressThree_2->setObjectName(QString::fromUtf8("progressThree_2"));
        progressThree_2->setGeometry(QRect(170, 60, 300, 30));
        progressThree_2->setValue1(1500);
        progressThree_2->setValue2(400);
        progressThree_2->setValue3(0);
        progressThree_2->setColor1(QColor(0, 255, 0));
        progressThree_2->setColor2(QColor(255, 255, 255));
        progressThree_6 = new ProgressThree(widget_39);
        progressThree_6->setObjectName(QString::fromUtf8("progressThree_6"));
        progressThree_6->setGeometry(QRect(170, 260, 300, 30));
        progressThree_6->setValue1(1500);
        progressThree_6->setValue2(400);
        progressThree_6->setValue3(0);
        progressThree_6->setColor1(QColor(0, 255, 0));
        progressThree_6->setColor2(QColor(255, 255, 255));
        servoChannel_6 = new QLabel(widget_39);
        servoChannel_6->setObjectName(QString::fromUtf8("servoChannel_6"));
        servoChannel_6->setGeometry(QRect(290, 260, 50, 30));
        servoChannel_6->setStyleSheet(QString::fromUtf8("background-color:transparent;\n"
"color:black;\n"
"font-weight:700;\n"
"font-size:18px;"));
        progressThree_7 = new ProgressThree(widget_39);
        progressThree_7->setObjectName(QString::fromUtf8("progressThree_7"));
        progressThree_7->setGeometry(QRect(170, 310, 300, 30));
        progressThree_7->setValue1(1500);
        progressThree_7->setValue2(400);
        progressThree_7->setValue3(0);
        progressThree_7->setColor1(QColor(0, 255, 0));
        progressThree_7->setColor2(QColor(255, 255, 255));
        progressThree_1 = new ProgressThree(widget_39);
        progressThree_1->setObjectName(QString::fromUtf8("progressThree_1"));
        progressThree_1->setGeometry(QRect(170, 10, 300, 30));
        progressThree_1->setValue1(1500);
        progressThree_1->setValue2(400);
        progressThree_1->setValue3(0);
        progressThree_1->setColor1(QColor(0, 255, 0));
        progressThree_1->setColor2(QColor(255, 255, 255));
        progressThree_4 = new ProgressThree(widget_39);
        progressThree_4->setObjectName(QString::fromUtf8("progressThree_4"));
        progressThree_4->setGeometry(QRect(170, 160, 300, 30));
        progressThree_4->setValue1(1500);
        progressThree_4->setValue2(400);
        progressThree_4->setValue3(0);
        progressThree_4->setColor1(QColor(0, 255, 0));
        progressThree_4->setColor2(QColor(255, 255, 255));
        progressThree_5 = new ProgressThree(widget_39);
        progressThree_5->setObjectName(QString::fromUtf8("progressThree_5"));
        progressThree_5->setGeometry(QRect(170, 210, 300, 30));
        progressThree_5->setValue1(1500);
        progressThree_5->setValue2(400);
        progressThree_5->setValue3(0);
        progressThree_5->setColor1(QColor(0, 255, 0));
        progressThree_5->setColor2(QColor(255, 255, 255));
        servoChannel_2 = new QLabel(widget_39);
        servoChannel_2->setObjectName(QString::fromUtf8("servoChannel_2"));
        servoChannel_2->setGeometry(QRect(290, 60, 50, 30));
        servoChannel_2->setStyleSheet(QString::fromUtf8("background-color:transparent;\n"
"color:black;\n"
"font-weight:700;\n"
"font-size:18px;"));
        servoChannel_3 = new QLabel(widget_39);
        servoChannel_3->setObjectName(QString::fromUtf8("servoChannel_3"));
        servoChannel_3->setGeometry(QRect(290, 110, 50, 30));
        servoChannel_3->setStyleSheet(QString::fromUtf8("background-color:transparent;\n"
"color:black;\n"
"font-weight:700;\n"
"font-size:18px;"));
        servoChannel_4 = new QLabel(widget_39);
        servoChannel_4->setObjectName(QString::fromUtf8("servoChannel_4"));
        servoChannel_4->setGeometry(QRect(290, 160, 50, 30));
        servoChannel_4->setStyleSheet(QString::fromUtf8("background-color:transparent;\n"
"color:black;\n"
"font-weight:700;\n"
"font-size:18px;"));
        servoChannel_5 = new QLabel(widget_39);
        servoChannel_5->setObjectName(QString::fromUtf8("servoChannel_5"));
        servoChannel_5->setGeometry(QRect(290, 210, 50, 30));
        servoChannel_5->setStyleSheet(QString::fromUtf8("background-color:transparent;\n"
"color:black;\n"
"font-weight:700;\n"
"font-size:18px;"));
        progressThree_8 = new ProgressThree(widget_39);
        progressThree_8->setObjectName(QString::fromUtf8("progressThree_8"));
        progressThree_8->setGeometry(QRect(170, 360, 300, 30));
        progressThree_8->setValue1(1500);
        progressThree_8->setValue2(400);
        progressThree_8->setValue3(0);
        progressThree_8->setColor1(QColor(0, 255, 0));
        progressThree_8->setColor2(QColor(255, 255, 255));
        servoChannel_7 = new QLabel(widget_39);
        servoChannel_7->setObjectName(QString::fromUtf8("servoChannel_7"));
        servoChannel_7->setGeometry(QRect(290, 310, 50, 30));
        servoChannel_7->setStyleSheet(QString::fromUtf8("background-color:transparent;\n"
"color:black;\n"
"font-weight:700;\n"
"font-size:18px;"));
        servoChannel_8 = new QLabel(widget_39);
        servoChannel_8->setObjectName(QString::fromUtf8("servoChannel_8"));
        servoChannel_8->setGeometry(QRect(290, 360, 50, 30));
        servoChannel_8->setStyleSheet(QString::fromUtf8("background-color:transparent;\n"
"color:black;\n"
"font-weight:700;\n"
"font-size:18px;"));
        servoChannel_1 = new QLabel(widget_39);
        servoChannel_1->setObjectName(QString::fromUtf8("servoChannel_1"));
        servoChannel_1->setGeometry(QRect(290, 10, 50, 30));
        servoChannel_1->setStyleSheet(QString::fromUtf8("background-color:transparent;\n"
"color:black;\n"
"font-weight:700;\n"
"font-size:18px;"));
        channel = new QLabel(widget_39);
        channel->setObjectName(QString::fromUtf8("channel"));
        channel->setGeometry(QRect(10, 0, 161, 42));
        QFont font9;
        font9.setPointSize(14);
        font9.setBold(true);
        channel->setFont(font9);
        channel->setStyleSheet(QString::fromUtf8("color:rgb(226,226,226)"));
        channel_2 = new QLabel(widget_39);
        channel_2->setObjectName(QString::fromUtf8("channel_2"));
        channel_2->setGeometry(QRect(10, 50, 161, 42));
        channel_2->setFont(font9);
        channel_2->setStyleSheet(QString::fromUtf8("color:rgb(226,226,226)"));
        channel_3 = new QLabel(widget_39);
        channel_3->setObjectName(QString::fromUtf8("channel_3"));
        channel_3->setGeometry(QRect(10, 100, 161, 42));
        channel_3->setFont(font9);
        channel_3->setStyleSheet(QString::fromUtf8("color:rgb(226,226,226)"));
        channel_4 = new QLabel(widget_39);
        channel_4->setObjectName(QString::fromUtf8("channel_4"));
        channel_4->setGeometry(QRect(10, 150, 161, 42));
        channel_4->setFont(font9);
        channel_4->setStyleSheet(QString::fromUtf8("color:rgb(226,226,226)"));
        channel_5 = new QLabel(widget_39);
        channel_5->setObjectName(QString::fromUtf8("channel_5"));
        channel_5->setGeometry(QRect(10, 200, 161, 42));
        channel_5->setFont(font9);
        channel_5->setStyleSheet(QString::fromUtf8("color:rgb(226,226,226)"));
        channel_6 = new QLabel(widget_39);
        channel_6->setObjectName(QString::fromUtf8("channel_6"));
        channel_6->setGeometry(QRect(10, 250, 161, 42));
        channel_6->setFont(font9);
        channel_6->setStyleSheet(QString::fromUtf8("color:rgb(226,226,226)"));
        channel_7 = new QLabel(widget_39);
        channel_7->setObjectName(QString::fromUtf8("channel_7"));
        channel_7->setGeometry(QRect(10, 300, 161, 42));
        channel_7->setFont(font9);
        channel_7->setStyleSheet(QString::fromUtf8("color:rgb(226,226,226)"));
        channel_8 = new QLabel(widget_39);
        channel_8->setObjectName(QString::fromUtf8("channel_8"));
        channel_8->setGeometry(QRect(10, 350, 161, 42));
        channel_8->setFont(font9);
        channel_8->setStyleSheet(QString::fromUtf8("color:rgb(226,226,226)"));
        stackedWidget->addWidget(page_7);
        page_8 = new QWidget();
        page_8->setObjectName(QString::fromUtf8("page_8"));
        gridLayout_25 = new QGridLayout(page_8);
        gridLayout_25->setObjectName(QString::fromUtf8("gridLayout_25"));
        gridLayout_25->setContentsMargins(0, 10, 0, 2);
        stackedWidget->addWidget(page_8);
        page_9 = new QWidget();
        page_9->setObjectName(QString::fromUtf8("page_9"));
        page_9->setStyleSheet(QString::fromUtf8(""));
        gridLayout_50 = new QGridLayout(page_9);
        gridLayout_50->setObjectName(QString::fromUtf8("gridLayout_50"));
        gridLayout_50->setContentsMargins(0, 0, 0, 0);
        widget_17 = new QWidget(page_9);
        widget_17->setObjectName(QString::fromUtf8("widget_17"));
        widget_17->setStyleSheet(QString::fromUtf8("QWidget {\n"
"	background-color: transparent;\n"
"}\n"
"\n"
"QPushButton {\n"
"        border-radius: 6px;\n"
"		padding: 5px;\n"
"		border: 1px solid rgb(46,52,54);\n"
"}\n"
"   \n"
"QPushButton:hover {\n"
"}\n"
"   \n"
"QPushButton:pressed {\n"
"        padding: 2px;   /* \346\250\241\346\213\237\346\214\211\351\222\256\346\214\211\344\270\213\345\201\217\347\247\273 */\n"
"}"));
        videoplayer = new QGridLayout(widget_17);
        videoplayer->setObjectName(QString::fromUtf8("videoplayer"));
        videoplayer->setContentsMargins(1, 1, 1, 1);

        gridLayout_50->addWidget(widget_17, 0, 0, 1, 1);

        stackedWidget->addWidget(page_9);

        gridLayout_5->addWidget(stackedWidget, 0, 0, 1, 1);


        gridLayout_2->addWidget(widget_home, 1, 1, 1, 1);

        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setMaximumSize(QSize(16777215, 500));
        groupBox->setFont(font7);
        groupBox->setStyleSheet(QString::fromUtf8("color: rgb(255, 244, 163);"));
        groupBox->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        label_dectStart = new QLabel(groupBox);
        label_dectStart->setObjectName(QString::fromUtf8("label_dectStart"));
        label_dectStart->setMaximumSize(QSize(90, 16777215));

        horizontalLayout_11->addWidget(label_dectStart);

        label_dectStart_input = new QLabel(groupBox);
        label_dectStart_input->setObjectName(QString::fromUtf8("label_dectStart_input"));

        horizontalLayout_11->addWidget(label_dectStart_input);


        gridLayout->addLayout(horizontalLayout_11, 2, 2, 1, 1);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        label_dectNum = new QLabel(groupBox);
        label_dectNum->setObjectName(QString::fromUtf8("label_dectNum"));
        label_dectNum->setMaximumSize(QSize(90, 16777215));

        horizontalLayout_10->addWidget(label_dectNum);

        label_dectNum_input = new QLabel(groupBox);
        label_dectNum_input->setObjectName(QString::fromUtf8("label_dectNum_input"));

        horizontalLayout_10->addWidget(label_dectNum_input);


        gridLayout->addLayout(horizontalLayout_10, 2, 1, 1, 1);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        label_dectPeople = new QLabel(groupBox);
        label_dectPeople->setObjectName(QString::fromUtf8("label_dectPeople"));
        label_dectPeople->setMaximumSize(QSize(90, 16777215));

        horizontalLayout_13->addWidget(label_dectPeople);

        label_dectPeople_input = new QLabel(groupBox);
        label_dectPeople_input->setObjectName(QString::fromUtf8("label_dectPeople_input"));

        horizontalLayout_13->addWidget(label_dectPeople_input);


        gridLayout->addLayout(horizontalLayout_13, 3, 6, 1, 1);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        label_pipeUnit = new QLabel(groupBox);
        label_pipeUnit->setObjectName(QString::fromUtf8("label_pipeUnit"));
        label_pipeUnit->setMaximumSize(QSize(90, 16777215));

        horizontalLayout_14->addWidget(label_pipeUnit);

        label_pipeUnit_input = new QLabel(groupBox);
        label_pipeUnit_input->setObjectName(QString::fromUtf8("label_pipeUnit_input"));

        horizontalLayout_14->addWidget(label_pipeUnit_input);


        gridLayout->addLayout(horizontalLayout_14, 2, 6, 1, 1);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        label_dectDirect = new QLabel(groupBox);
        label_dectDirect->setObjectName(QString::fromUtf8("label_dectDirect"));
        label_dectDirect->setMaximumSize(QSize(90, 16777215));

        horizontalLayout_9->addWidget(label_dectDirect);

        label_dectDirect_input = new QLabel(groupBox);
        label_dectDirect_input->setObjectName(QString::fromUtf8("label_dectDirect_input"));

        horizontalLayout_9->addWidget(label_dectDirect_input);


        gridLayout->addLayout(horizontalLayout_9, 3, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_pipeType = new QLabel(groupBox);
        label_pipeType->setObjectName(QString::fromUtf8("label_pipeType"));
        label_pipeType->setMaximumSize(QSize(90, 16777215));

        horizontalLayout_4->addWidget(label_pipeType);

        label_pipeType_input = new QLabel(groupBox);
        label_pipeType_input->setObjectName(QString::fromUtf8("label_pipeType_input"));

        horizontalLayout_4->addWidget(label_pipeType_input);


        gridLayout->addLayout(horizontalLayout_4, 3, 5, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_dectType = new QLabel(groupBox);
        label_dectType->setObjectName(QString::fromUtf8("label_dectType"));
        label_dectType->setMaximumSize(QSize(90, 16777215));

        horizontalLayout_3->addWidget(label_dectType);

        label_dectTye_input = new QLabel(groupBox);
        label_dectTye_input->setObjectName(QString::fromUtf8("label_dectTye_input"));

        horizontalLayout_3->addWidget(label_dectTye_input);


        gridLayout->addLayout(horizontalLayout_3, 3, 1, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_dectPlace = new QLabel(groupBox);
        label_dectPlace->setObjectName(QString::fromUtf8("label_dectPlace"));
        label_dectPlace->setMaximumSize(QSize(90, 16777215));

        horizontalLayout_2->addWidget(label_dectPlace);

        label_dectPlace_input = new QLabel(groupBox);
        label_dectPlace_input->setObjectName(QString::fromUtf8("label_dectPlace_input"));

        horizontalLayout_2->addWidget(label_dectPlace_input);


        gridLayout->addLayout(horizontalLayout_2, 2, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_pipeD = new QLabel(groupBox);
        label_pipeD->setObjectName(QString::fromUtf8("label_pipeD"));
        label_pipeD->setMaximumSize(QSize(90, 16777215));

        horizontalLayout_5->addWidget(label_pipeD);

        label_pipeD_input = new QLabel(groupBox);
        label_pipeD_input->setObjectName(QString::fromUtf8("label_pipeD_input"));

        horizontalLayout_5->addWidget(label_pipeD_input);


        gridLayout->addLayout(horizontalLayout_5, 2, 5, 1, 1);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        label_dectEnd = new QLabel(groupBox);
        label_dectEnd->setObjectName(QString::fromUtf8("label_dectEnd"));
        label_dectEnd->setMaximumSize(QSize(90, 16777215));

        horizontalLayout_12->addWidget(label_dectEnd);

        label_dectEnd_input = new QLabel(groupBox);
        label_dectEnd_input->setObjectName(QString::fromUtf8("label_dectEnd_input"));

        horizontalLayout_12->addWidget(label_dectEnd_input);


        gridLayout->addLayout(horizontalLayout_12, 3, 2, 1, 1);


        gridLayout_2->addWidget(groupBox, 2, 1, 1, 1);

        gridLayout_2->setColumnMinimumWidth(0, 5);
        gridLayout_2->setColumnMinimumWidth(1, 30);
        MainWindow->setCentralWidget(centralwidget);
        widget_3->raise();
        widget_home->raise();
        label_title->raise();
        groupBox->raise();
        frame->raise();
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1920, 24));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        pushButton_setting->setDefault(false);
        pushButton_datainput->setDefault(true);
        pushButton_datasearch->setDefault(true);
        pushButton_localvideo->setDefault(true);
        pushButton_utrans->setDefault(true);
        pushButton_upload->setDefault(true);
        pushButton_log->setDefault(true);
        pushButton_front->setDefault(true);
        pushButton_behind->setDefault(true);
        pushButton_location->setDefault(true);
        pushButton_location_2->setDefault(true);
        pushButton->setDefault(true);
        pushButton_exit->setDefault(true);
        stackedWidget->setCurrentIndex(2);
        pushButton_transfor_2->setDefault(true);
        pushButton_transforToMono_3->setDefault(true);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton_setting->setText(QString());
        label_connect->setText(QString());
        label_title->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p>\345\235\235\351\235\242\346\211\253\346\217\217\345\274\217\346\231\272\350\203\275\346\243\200\346\265\213\346\234\272\345\231\250\344\272\272</p></body></html>", nullptr));
        pushButton_datainput->setText(QString());
        label_infoInput->setText(QCoreApplication::translate("MainWindow", "\344\277\241\346\201\257\345\275\225\345\205\245", nullptr));
        pushButton_datasearch->setText(QString());
        label_infoSearch->setText(QCoreApplication::translate("MainWindow", "\344\277\241\346\201\257\346\237\245\350\257\242", nullptr));
        pushButton_localvideo->setText(QString());
        label_localVideo->setText(QCoreApplication::translate("MainWindow", "\346\234\254\345\234\260\350\247\206\351\242\221", nullptr));
        pushButton_utrans->setText(QString());
        label_uExport->setText(QCoreApplication::translate("MainWindow", "U\347\233\230\345\257\274\345\207\272", nullptr));
        pushButton_upload->setText(QString());
        label_cloudUpload->setText(QCoreApplication::translate("MainWindow", "\344\270\212\344\274\240\344\272\221\347\253\257", nullptr));
        pushButton_log->setText(QString());
        label_log->setText(QCoreApplication::translate("MainWindow", "\347\263\273\347\273\237\346\227\245\345\277\227", nullptr));
        pushButton_front->setText(QString());
        label_cloudUpload_2->setText(QCoreApplication::translate("MainWindow", "A\351\235\242", nullptr));
        pushButton_behind->setText(QString());
        label_cloudUpload_3->setText(QCoreApplication::translate("MainWindow", "B\351\235\242", nullptr));
        pushButton_location->setText(QString());
        label_cloudUpload_4->setText(QCoreApplication::translate("MainWindow", "\346\212\245\345\221\212\347\224\237\346\210\220", nullptr));
        pushButton_location_2->setText(QString());
        label_cloudUpload_5->setText(QCoreApplication::translate("MainWindow", "\347\212\266\346\200\201\346\230\276\347\244\272", nullptr));
        pushButton->setText(QString());
        label_cloudUpload_6->setText(QCoreApplication::translate("MainWindow", "\344\270\273\347\225\214\351\235\242", nullptr));
        pushButton_exit->setText(QString());
        label_cloudUpload_7->setText(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272", nullptr));
        label_main->setText(QString());
        pushButton_26->setText(QString());
        pushButton_27->setText(QString());
        label->setText(QCoreApplication::translate("MainWindow", "Loading...", nullptr));
        pushButton_28->setText(QString());
        pushButton_29->setText(QString());
        label_2->setText(QCoreApplication::translate("MainWindow", "Loading...", nullptr));
        pushButton_transfor_2->setText(QString());
        record->setText(QString());
        timeLabel->setText(QString());
        pushButton_2->setText(QString());
        pushButton_transforToMono_3->setText(QString());
        label_7->setText(QCoreApplication::translate("MainWindow", "Loading...", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("MainWindow", "\347\275\221\347\273\234\350\256\276\347\275\256", nullptr));
        pushButton_defult_network->setText(QCoreApplication::translate("MainWindow", "\346\201\242\345\244\215\351\273\230\350\256\244", nullptr));
        pushButton_confirm_network->setText(QCoreApplication::translate("MainWindow", "\347\241\256\350\256\244\346\233\264\346\224\271", nullptr));
        label_33->setText(QCoreApplication::translate("MainWindow", "\346\234\215\345\212\241\345\231\250IP\345\234\260\345\235\200\350\256\276\347\275\256", nullptr));
        label_34->setText(QCoreApplication::translate("MainWindow", "\346\234\215\345\212\241\345\231\250\347\253\257\345\217\243\350\256\276\347\275\256", nullptr));
        line_cloud_ip->setText(QCoreApplication::translate("MainWindow", "192.168.2.150", nullptr));
        line_cloud_port->setText(QCoreApplication::translate("MainWindow", "8080", nullptr));
        groupBox_6->setTitle(QCoreApplication::translate("MainWindow", "\346\234\254\346\234\272\347\275\221\347\273\234\347\212\266\346\200\201", nullptr));
        label_localnet->setText(QCoreApplication::translate("MainWindow", "\347\255\211\345\276\205\345\223\215\345\272\224", nullptr));
        label_localnet_state->setText(QString());
        groupBox_7->setTitle(QCoreApplication::translate("MainWindow", "\344\272\221\346\234\215\345\212\241\345\231\250\347\212\266\346\200\201", nullptr));
        label_cloudnet->setText(QCoreApplication::translate("MainWindow", "\347\255\211\345\276\205\345\223\215\345\272\224", nullptr));
        label_cloudnet_state->setText(QString());
        groupBox_9->setTitle(QCoreApplication::translate("MainWindow", "\351\242\204\350\255\246\351\230\210\345\200\274\350\256\276\347\275\256", nullptr));
        line_A->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        label_44->setText(QCoreApplication::translate("MainWindow", "(A)", nullptr));
        line_V->setText(QCoreApplication::translate("MainWindow", "24", nullptr));
        label_43->setText(QCoreApplication::translate("MainWindow", "(V)", nullptr));
        label_41->setText(QCoreApplication::translate("MainWindow", "\346\270\251\345\272\246\347\233\221\346\265\213\351\242\204\350\255\246\350\256\276\347\275\256", nullptr));
        label_40->setText(QCoreApplication::translate("MainWindow", "\347\224\265\346\265\201\347\233\221\346\265\213\351\242\204\350\255\246\350\256\276\347\275\256", nullptr));
        label_39->setText(QCoreApplication::translate("MainWindow", "\347\224\265\345\216\213\347\233\221\346\265\213\351\242\204\350\255\246\350\256\276\347\275\256", nullptr));
        line_temp->setText(QCoreApplication::translate("MainWindow", "50", nullptr));
        label_45->setText(QCoreApplication::translate("MainWindow", "(\302\260C)", nullptr));
        label_42->setText(QCoreApplication::translate("MainWindow", "\346\271\277\345\272\246\347\233\221\346\265\213\351\242\204\350\255\246\350\256\276\347\275\256", nullptr));
        line_humid->setText(QCoreApplication::translate("MainWindow", "50", nullptr));
        label_46->setText(QCoreApplication::translate("MainWindow", "(%)", nullptr));
        pushButton_state_defult->setText(QCoreApplication::translate("MainWindow", "\346\201\242\345\244\215\351\273\230\350\256\244", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "\347\241\256\350\256\244\346\233\264\346\224\271", nullptr));
        groupBox_8->setTitle(QCoreApplication::translate("MainWindow", "\344\272\221\347\253\257\347\231\273\351\231\206\350\256\276\347\275\256", nullptr));
        label_38->setText(QCoreApplication::translate("MainWindow", "\347\224\250\346\210\267\345\220\215", nullptr));
        line_username->setText(QCoreApplication::translate("MainWindow", "123", nullptr));
        label_48->setText(QCoreApplication::translate("MainWindow", "\345\257\206\347\240\201", nullptr));
        line_password->setText(QCoreApplication::translate("MainWindow", "123", nullptr));
        label_50->setText(QCoreApplication::translate("MainWindow", "\346\243\200\346\265\213\345\215\225\344\275\215", nullptr));
        line_unit->setText(QCoreApplication::translate("MainWindow", "\344\270\255\345\233\275\345\273\272\347\255\221\347\254\254\344\270\203\345\267\245\347\250\213\345\261\200", nullptr));
        pushButton_testnetwork->setText(QCoreApplication::translate("MainWindow", "\344\272\221\347\253\257\347\224\250\346\210\267\347\231\273\351\231\206", nullptr));
        groupBox_5->setTitle(QCoreApplication::translate("MainWindow", "\346\225\260\346\215\256\345\272\223\350\256\276\347\275\256", nullptr));
        label_51->setText(QCoreApplication::translate("MainWindow", "\346\225\260\346\215\256\345\272\223\345\220\215\347\247\260", nullptr));
        lineEdit->setText(QCoreApplication::translate("MainWindow", "tasks", nullptr));
        label_52->setText(QCoreApplication::translate("MainWindow", "\347\224\250\346\210\267\345\220\215", nullptr));
        lineEdit_2->setText(QCoreApplication::translate("MainWindow", "root", nullptr));
        label_53->setText(QCoreApplication::translate("MainWindow", "\345\257\206\347\240\201", nullptr));
        lineEdit_3->setText(QCoreApplication::translate("MainWindow", "123", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "\347\224\265\345\216\213\347\224\265\346\265\201\346\243\200\346\265\213", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "\347\224\265\345\216\213\346\243\200\346\265\213", nullptr));
        label_17->setText(QCoreApplication::translate("MainWindow", "(V)", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "\347\224\265\346\265\201\346\243\200\346\265\213", nullptr));
        label_18->setText(QCoreApplication::translate("MainWindow", "(A)", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "\350\210\261\344\275\223\345\244\226\351\203\250", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "(\302\260C)", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "26", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "(\302\260C)", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "40", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "\344\270\273\346\216\247\350\210\261", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\346\270\251\345\272\246\344\277\241\346\201\257", nullptr));
        label_21->setText(QCoreApplication::translate("MainWindow", "(%)", nullptr));
        label_22->setText(QCoreApplication::translate("MainWindow", "45", nullptr));
        label_20->setText(QCoreApplication::translate("MainWindow", "\350\210\261\344\275\223\345\244\226\351\203\250", nullptr));
        label_24->setText(QCoreApplication::translate("MainWindow", "48", nullptr));
        label_23->setText(QCoreApplication::translate("MainWindow", "(%)", nullptr));
        label_25->setText(QCoreApplication::translate("MainWindow", "\344\270\273\346\216\247\350\210\261", nullptr));
        label_26->setText(QCoreApplication::translate("MainWindow", "\346\271\277\345\272\246\344\277\241\346\201\257", nullptr));
        label_19->setText(QCoreApplication::translate("MainWindow", "\346\212\245\350\255\246\350\256\260\345\275\225", nullptr));
        textBrowser_2->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Microsoft YaHei UI'; font-size:14pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Ubuntu'; color:#ef2929;\">[\346\271\277\345\272\246\351\242\204\350\255\246] \346\271\277\345\272\246\350\266\205\350\277\20750%	[2024-8-26 13:01]</span></p></body></html>", nullptr));
        pushButton_18->setText(QString());
        pushButton_19->setText(QString());
        label_3->setText(QCoreApplication::translate("MainWindow", "Loading...", nullptr));
        pushButton_20->setText(QString());
        pushButton_21->setText(QString());
        label_5->setText(QCoreApplication::translate("MainWindow", "Loading...", nullptr));
        label_62->setText(QCoreApplication::translate("MainWindow", "IP\345\234\260\345\235\200\357\274\232", nullptr));
        Open_BT_9->setText(QCoreApplication::translate("MainWindow", "\346\211\223\345\274\200", nullptr));
        label_31->setText(QCoreApplication::translate("MainWindow", "IP\345\234\260\345\235\200\357\274\232", nullptr));
        Open_BT_4->setText(QCoreApplication::translate("MainWindow", "\346\211\223\345\274\200", nullptr));
        Open_BT_10->setText(QCoreApplication::translate("MainWindow", "\346\211\223\345\274\200", nullptr));
        label_65->setText(QCoreApplication::translate("MainWindow", "IP\345\234\260\345\235\200\357\274\232", nullptr));
        label_28->setText(QCoreApplication::translate("MainWindow", "IP\345\234\260\345\235\200\357\274\232", nullptr));
        Open_BT_3->setText(QCoreApplication::translate("MainWindow", "\346\211\223\345\274\200", nullptr));
        label_59->setText(QCoreApplication::translate("MainWindow", "IP\345\234\260\345\235\200\357\274\232", nullptr));
        Open_BT_8->setText(QCoreApplication::translate("MainWindow", "\346\211\223\345\274\200", nullptr));
        label_27->setText(QCoreApplication::translate("MainWindow", "IP\345\234\260\345\235\200\357\274\232", nullptr));
        Open_BT_2->setText(QCoreApplication::translate("MainWindow", "\346\211\223\345\274\200", nullptr));
        groupBox_10->setTitle(QCoreApplication::translate("MainWindow", "\344\274\240\346\204\237\345\231\250\344\277\241\346\201\257", nullptr));
        Roll_show->setText(QCoreApplication::translate("MainWindow", "Roll:0.00", nullptr));
        Yaw_show->setText(QCoreApplication::translate("MainWindow", "Yaw:0.00", nullptr));
        Pitch_show->setText(QCoreApplication::translate("MainWindow", "Pitch:0.00", nullptr));
        Depth_show->setText(QCoreApplication::translate("MainWindow", "Depth: 0.00", nullptr));
        Temp_show->setText(QCoreApplication::translate("MainWindow", "Tempture:0.00", nullptr));
        rov_status->setText(QCoreApplication::translate("MainWindow", "Power_Val:0.00", nullptr));
        Depth_show_3->setText(QCoreApplication::translate("MainWindow", "\346\267\261\345\272\246\357\274\2320.0m", nullptr));
        label_149->setText(QCoreApplication::translate("MainWindow", "\345\247\277\346\200\201\344\277\241\346\201\257", nullptr));
        Roll_show_2->setText(QCoreApplication::translate("MainWindow", "\346\250\252\346\273\232\350\247\222(Roll)\357\274\232", nullptr));
        Roll_show_3->setText(QCoreApplication::translate("MainWindow", "\344\277\257\345\206\262\350\247\222(Pitch)\357\274\232", nullptr));
        Roll_show_4->setText(QCoreApplication::translate("MainWindow", "\350\210\252\345\220\221\350\247\222(Yaw)\357\274\232", nullptr));
        RollValue->setText(QCoreApplication::translate("MainWindow", "0.00\302\260", nullptr));
        PitchValue->setText(QCoreApplication::translate("MainWindow", "0.00\302\260", nullptr));
        YawValue->setText(QCoreApplication::translate("MainWindow", "0.00\302\260", nullptr));
        label_150->setText(QCoreApplication::translate("MainWindow", "\347\201\257\345\205\211\344\277\241\346\201\257", nullptr));
        Depth_show_2->setText(QCoreApplication::translate("MainWindow", "\347\201\257\345\205\2111", nullptr));
        Depth_show_4->setText(QCoreApplication::translate("MainWindow", "\347\201\257\345\205\2112", nullptr));
        label_151->setText(QCoreApplication::translate("MainWindow", "\351\200\237\345\272\246\344\277\241\346\201\257", nullptr));
        gaugeWatchZ->setUnit(QCoreApplication::translate("MainWindow", "m/s", nullptr));
        gaugeWatchY->setUnit(QCoreApplication::translate("MainWindow", "m/s", nullptr));
        gaugeWatchX->setUnit(QCoreApplication::translate("MainWindow", "m/s", nullptr));
        VelocityX->setText(QCoreApplication::translate("MainWindow", "VelocX:0.0", nullptr));
        AccelX->setText(QCoreApplication::translate("MainWindow", "AccelX:0.0", nullptr));
        VelocityY->setText(QCoreApplication::translate("MainWindow", "VelocY:0.0", nullptr));
        AccelY->setText(QCoreApplication::translate("MainWindow", "AccelY:0.0", nullptr));
        VelocityZ->setText(QCoreApplication::translate("MainWindow", "VelocZ:0.0", nullptr));
        AccelZ->setText(QCoreApplication::translate("MainWindow", "AccelZ:0.0", nullptr));
        label_152->setText(QCoreApplication::translate("MainWindow", "\346\216\250\350\277\233\345\231\250\344\277\241\346\201\257", nullptr));
        servoChannel_6->setText(QCoreApplication::translate("MainWindow", "1500", nullptr));
        servoChannel_2->setText(QCoreApplication::translate("MainWindow", "1500", nullptr));
        servoChannel_3->setText(QCoreApplication::translate("MainWindow", "1500", nullptr));
        servoChannel_4->setText(QCoreApplication::translate("MainWindow", "1500", nullptr));
        servoChannel_5->setText(QCoreApplication::translate("MainWindow", "1500", nullptr));
        servoChannel_7->setText(QCoreApplication::translate("MainWindow", "1500", nullptr));
        servoChannel_8->setText(QCoreApplication::translate("MainWindow", "1500", nullptr));
        servoChannel_1->setText(QCoreApplication::translate("MainWindow", "1500", nullptr));
        channel->setText(QCoreApplication::translate("MainWindow", "ServoChannel1", nullptr));
        channel_2->setText(QCoreApplication::translate("MainWindow", "ServoChannel2", nullptr));
        channel_3->setText(QCoreApplication::translate("MainWindow", "ServoChannel3", nullptr));
        channel_4->setText(QCoreApplication::translate("MainWindow", "ServoChannel4", nullptr));
        channel_5->setText(QCoreApplication::translate("MainWindow", "ServoChannel5", nullptr));
        channel_6->setText(QCoreApplication::translate("MainWindow", "ServoChannel6", nullptr));
        channel_7->setText(QCoreApplication::translate("MainWindow", "ServoChannel7", nullptr));
        channel_8->setText(QCoreApplication::translate("MainWindow", "ServoChannel8", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "\346\243\200\346\265\213\344\277\241\346\201\257", nullptr));
        label_dectStart->setText(QCoreApplication::translate("MainWindow", "\350\265\267\345\247\213\346\240\207\350\256\260\357\274\232", nullptr));
        label_dectStart_input->setText(QString());
        label_dectNum->setText(QCoreApplication::translate("MainWindow", "\346\243\200\346\265\213\347\274\226\345\217\267\357\274\232", nullptr));
        label_dectNum_input->setText(QString());
        label_dectPeople->setText(QCoreApplication::translate("MainWindow", "\346\243\200\346\265\213\345\221\230\357\274\232", nullptr));
        label_dectPeople_input->setText(QString());
        label_pipeUnit->setText(QCoreApplication::translate("MainWindow", "\346\243\200\346\265\213\345\215\225\344\275\215\357\274\232", nullptr));
        label_pipeUnit_input->setText(QString());
        label_dectDirect->setText(QCoreApplication::translate("MainWindow", "\346\243\200\346\265\213\346\226\271\345\220\221:", nullptr));
        label_dectDirect_input->setText(QString());
        label_pipeType->setText(QCoreApplication::translate("MainWindow", "\345\235\235\344\275\223\346\235\220\350\264\250\357\274\232", nullptr));
        label_pipeType_input->setText(QString());
        label_dectType->setText(QCoreApplication::translate("MainWindow", "\345\235\235\344\275\223\347\261\273\345\236\213\357\274\232", nullptr));
        label_dectTye_input->setText(QString());
        label_dectPlace->setText(QCoreApplication::translate("MainWindow", "\346\243\200\346\265\213\345\234\260\347\202\271:", nullptr));
        label_dectPlace_input->setText(QString());
        label_pipeD->setText(QCoreApplication::translate("MainWindow", "\345\235\235\344\275\223\351\253\230\345\272\246\357\274\232", nullptr));
        label_pipeD_input->setText(QString());
        label_dectEnd->setText(QCoreApplication::translate("MainWindow", "\347\273\223\346\235\237\346\240\207\350\256\260\357\274\232", nullptr));
        label_dectEnd_input->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
