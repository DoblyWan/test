/********************************************************************************
** Form generated from reading UI file 'flightcontrol.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FLIGHTCONTROL_H
#define UI_FLIGHTCONTROL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSlider>
#include <QtWidgets/QWidget>
#include "gaugecompasspan.h"
#include "gaugeplane.h"
#include "gaugewatch.h"
#include "progressthree.h"
#include "rulerbar.h"
#include "switchbutton.h"

QT_BEGIN_NAMESPACE

class Ui_FlightControl
{
public:
    QFrame *frame;
    QGridLayout *gridLayout;
    QLabel *statue_13;
    QComboBox *Control_mode;
    QLabel *statue_3;
    SwitchButton *handleEnabled;
    QLabel *statue_4;
    SwitchButton *switchButton_2;
    QWidget *widget;
    QFrame *frame_56;
    QWidget *widget_36;
    GaugeCompassPan *gaugeCompassPan;
    GaugePlane *gaugePlane;
    QLabel *Roll_show_5;
    QLabel *Roll_show_6;
    QLabel *Roll_show_7;
    QLabel *rollValue;
    QLabel *pitchValue;
    QLabel *yawValue;
    QLabel *label_149;
    QFrame *frame_58;
    QWidget *widget_38;
    GaugeWatch *gaugeWatchZ;
    GaugeWatch *gaugeWatchY;
    GaugeWatch *gaugeWatchX;
    QFrame *frame_2;
    QGridLayout *gridLayout_2;
    QLabel *VelocityY_8;
    QLabel *AccelXL;
    QLabel *VelocityX_3;
    QLabel *VelocityX;
    QLabel *VelocityY;
    QLabel *VelocityZ_2;
    QLabel *VelocityZ_3;
    QLabel *VelocityZ;
    QLabel *VelocityY_7;
    QLabel *AccelX;
    QLabel *AccelY;
    QLabel *AccelZ;
    QLabel *label_151;
    QFrame *frame_57;
    QWidget *widget_37;
    QSlider *verticalSlider;
    QSlider *verticalSlider_2;
    QLabel *Depth_show_3;
    QLabel *Depth_show_7;
    QLabel *label_150;
    QLabel *label_152;
    QFrame *frame_59;
    QWidget *widget_40;
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
    QLabel *channel_9;
    QLabel *channel_10;
    QLabel *channel_11;
    QLabel *channel_12;
    QLabel *channel_13;
    QLabel *channel_14;
    QLabel *channel_15;
    QLabel *channel_16;
    QLabel *label_153;
    QFrame *frame_60;
    QWidget *widget_39;
    SwitchButton *monocularCameraA1Switch;
    QLabel *VelocityY_2;
    SwitchButton *monocularCameraA2Switch;
    QLabel *VelocityY_3;
    SwitchButton *binocularCameraSwitch;
    QLabel *VelocityY_4;
    QLabel *label_154;
    QLabel *label_155;
    QLabel *VelocityY_6;
    QLabel *VelocityY_5;
    SwitchButton *monocularCameraB1Switch;
    SwitchButton *monocularCameraB2Switch;
    QLabel *label_156;
    QFrame *frame_61;
    QWidget *widget_41;
    RulerBar *rulerBar;
    QLabel *Depth_show;
    QFrame *frame_62;
    QWidget *widget_42;
    QLabel *label_170;
    QLabel *label_171;

    void setupUi(QWidget *FlightControl)
    {
        if (FlightControl->objectName().isEmpty())
            FlightControl->setObjectName(QString::fromUtf8("FlightControl"));
        FlightControl->resize(2000, 1000);
        FlightControl->setStyleSheet(QString::fromUtf8("background-color: rgb(51, 51, 51);"));
        frame = new QFrame(FlightControl);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(11, 11, 228, 200));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(5, 10, 0, 10);
        statue_13 = new QLabel(frame);
        statue_13->setObjectName(QString::fromUtf8("statue_13"));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        statue_13->setFont(font);
        statue_13->setStyleSheet(QString::fromUtf8("color:rgb(226,226,226)"));

        gridLayout->addWidget(statue_13, 0, 0, 1, 1);

        Control_mode = new QComboBox(frame);
        Control_mode->addItem(QString());
        Control_mode->addItem(QString());
        Control_mode->addItem(QString());
        Control_mode->setObjectName(QString::fromUtf8("Control_mode"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Control_mode->sizePolicy().hasHeightForWidth());
        Control_mode->setSizePolicy(sizePolicy);
        Control_mode->setFont(font);
        Control_mode->setStyleSheet(QString::fromUtf8("color:rgb(226,226,226)"));
        Control_mode->setSizeAdjustPolicy(QComboBox::AdjustToContentsOnFirstShow);
        Control_mode->setPlaceholderText(QString::fromUtf8(""));
        Control_mode->setFrame(true);

        gridLayout->addWidget(Control_mode, 0, 1, 1, 1);

        statue_3 = new QLabel(frame);
        statue_3->setObjectName(QString::fromUtf8("statue_3"));
        statue_3->setFont(font);
        statue_3->setStyleSheet(QString::fromUtf8("color:rgb(226,226,226)"));

        gridLayout->addWidget(statue_3, 1, 0, 1, 1);

        handleEnabled = new SwitchButton(frame);
        handleEnabled->setObjectName(QString::fromUtf8("handleEnabled"));
        sizePolicy.setHeightForWidth(handleEnabled->sizePolicy().hasHeightForWidth());
        handleEnabled->setSizePolicy(sizePolicy);

        gridLayout->addWidget(handleEnabled, 1, 1, 1, 1);

        statue_4 = new QLabel(frame);
        statue_4->setObjectName(QString::fromUtf8("statue_4"));
        statue_4->setFont(font);
        statue_4->setStyleSheet(QString::fromUtf8("color:rgb(226,226,226)"));

        gridLayout->addWidget(statue_4, 2, 0, 1, 1);

        switchButton_2 = new SwitchButton(frame);
        switchButton_2->setObjectName(QString::fromUtf8("switchButton_2"));
        sizePolicy.setHeightForWidth(switchButton_2->sizePolicy().hasHeightForWidth());
        switchButton_2->setSizePolicy(sizePolicy);

        gridLayout->addWidget(switchButton_2, 2, 1, 1, 1);

        gridLayout->setRowStretch(0, 2);
        gridLayout->setRowStretch(1, 1);
        gridLayout->setRowStretch(2, 1);
        widget = new QWidget(FlightControl);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(250, 30, 1631, 950));
        frame_56 = new QFrame(widget);
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
        Roll_show_5 = new QLabel(widget_36);
        Roll_show_5->setObjectName(QString::fromUtf8("Roll_show_5"));
        Roll_show_5->setGeometry(QRect(20, 190, 181, 42));
        QFont font1;
        font1.setPointSize(17);
        font1.setBold(true);
        Roll_show_5->setFont(font1);
        Roll_show_5->setStyleSheet(QString::fromUtf8("color:rgb(226,226,226)"));
        Roll_show_6 = new QLabel(widget_36);
        Roll_show_6->setObjectName(QString::fromUtf8("Roll_show_6"));
        Roll_show_6->setGeometry(QRect(20, 245, 201, 42));
        Roll_show_6->setFont(font1);
        Roll_show_6->setStyleSheet(QString::fromUtf8("color:rgb(226,226,226)"));
        Roll_show_7 = new QLabel(widget_36);
        Roll_show_7->setObjectName(QString::fromUtf8("Roll_show_7"));
        Roll_show_7->setGeometry(QRect(20, 300, 331, 42));
        Roll_show_7->setFont(font1);
        Roll_show_7->setStyleSheet(QString::fromUtf8("color:rgb(226,226,226)"));
        rollValue = new QLabel(widget_36);
        rollValue->setObjectName(QString::fromUtf8("rollValue"));
        rollValue->setGeometry(QRect(230, 190, 151, 42));
        rollValue->setFont(font1);
        rollValue->setStyleSheet(QString::fromUtf8("color:rgb(226,226,226)"));
        pitchValue = new QLabel(widget_36);
        pitchValue->setObjectName(QString::fromUtf8("pitchValue"));
        pitchValue->setGeometry(QRect(230, 245, 151, 42));
        pitchValue->setFont(font1);
        pitchValue->setStyleSheet(QString::fromUtf8("color:rgb(226,226,226)"));
        yawValue = new QLabel(widget_36);
        yawValue->setObjectName(QString::fromUtf8("yawValue"));
        yawValue->setGeometry(QRect(230, 300, 151, 42));
        yawValue->setFont(font1);
        yawValue->setStyleSheet(QString::fromUtf8("color:rgb(226,226,226)"));
        label_149 = new QLabel(widget);
        label_149->setObjectName(QString::fromUtf8("label_149"));
        label_149->setGeometry(QRect(0, 0, 401, 41));
        label_149->setStyleSheet(QString::fromUtf8("background-color:rgb(0, 74, 189);\n"
"color: rgb(185, 129, 168);\n"
"font-size:18px;\n"
"font-weight:700;\n"
"border-radius:10px;\n"
"border:2px dashed rgb(109, 156, 237)"));
        label_149->setAlignment(Qt::AlignCenter);
        frame_58 = new QFrame(widget);
        frame_58->setObjectName(QString::fromUtf8("frame_58"));
        frame_58->setGeometry(QRect(400, 40, 671, 381));
        frame_58->setStyleSheet(QString::fromUtf8("background-color:rgb(7, 22, 79);\n"
"border:2px dashed rgb(109, 156, 237);\n"
""));
        frame_58->setFrameShape(QFrame::StyledPanel);
        frame_58->setFrameShadow(QFrame::Raised);
        widget_38 = new QWidget(frame_58);
        widget_38->setObjectName(QString::fromUtf8("widget_38"));
        widget_38->setGeometry(QRect(10, 10, 651, 361));
        widget_38->setStyleSheet(QString::fromUtf8("border:none;"));
        gaugeWatchZ = new GaugeWatch(widget_38);
        gaugeWatchZ->setObjectName(QString::fromUtf8("gaugeWatchZ"));
        gaugeWatchZ->setGeometry(QRect(460, 20, 150, 150));
        gaugeWatchZ->setMinValue(-5.000000000000000);
        gaugeWatchZ->setMaxValue(5.000000000000000);
        gaugeWatchY = new GaugeWatch(widget_38);
        gaugeWatchY->setObjectName(QString::fromUtf8("gaugeWatchY"));
        gaugeWatchY->setGeometry(QRect(250, 20, 150, 150));
        gaugeWatchY->setMinValue(-5.000000000000000);
        gaugeWatchY->setMaxValue(5.000000000000000);
        gaugeWatchX = new GaugeWatch(widget_38);
        gaugeWatchX->setObjectName(QString::fromUtf8("gaugeWatchX"));
        gaugeWatchX->setGeometry(QRect(40, 20, 150, 150));
        gaugeWatchX->setMinValue(-5.000000000000000);
        gaugeWatchX->setMaxValue(5.000000000000000);
        frame_2 = new QFrame(widget_38);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setGeometry(QRect(0, 180, 650, 185));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        gridLayout_2 = new QGridLayout(frame_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        VelocityY_8 = new QLabel(frame_2);
        VelocityY_8->setObjectName(QString::fromUtf8("VelocityY_8"));
        VelocityY_8->setFont(font1);
        VelocityY_8->setStyleSheet(QString::fromUtf8("color:rgb(226,226,226)"));
        VelocityY_8->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(VelocityY_8, 0, 1, 1, 1);

        AccelXL = new QLabel(frame_2);
        AccelXL->setObjectName(QString::fromUtf8("AccelXL"));
        AccelXL->setFont(font1);
        AccelXL->setStyleSheet(QString::fromUtf8("color:rgb(226,226,226)"));
        AccelXL->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(AccelXL, 2, 0, 1, 1);

        VelocityX_3 = new QLabel(frame_2);
        VelocityX_3->setObjectName(QString::fromUtf8("VelocityX_3"));
        VelocityX_3->setFont(font1);
        VelocityX_3->setStyleSheet(QString::fromUtf8("color:rgb(226,226,226)"));
        VelocityX_3->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(VelocityX_3, 0, 0, 1, 1);

        VelocityX = new QLabel(frame_2);
        VelocityX->setObjectName(QString::fromUtf8("VelocityX"));
        VelocityX->setFont(font1);
        VelocityX->setStyleSheet(QString::fromUtf8("color:rgb(226,226,226)"));
        VelocityX->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(VelocityX, 1, 0, 1, 1);

        VelocityY = new QLabel(frame_2);
        VelocityY->setObjectName(QString::fromUtf8("VelocityY"));
        VelocityY->setFont(font1);
        VelocityY->setStyleSheet(QString::fromUtf8("color:rgb(226,226,226)"));
        VelocityY->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(VelocityY, 1, 1, 1, 1);

        VelocityZ_2 = new QLabel(frame_2);
        VelocityZ_2->setObjectName(QString::fromUtf8("VelocityZ_2"));
        VelocityZ_2->setFont(font1);
        VelocityZ_2->setStyleSheet(QString::fromUtf8("color:rgb(226,226,226)"));
        VelocityZ_2->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(VelocityZ_2, 2, 2, 1, 1);

        VelocityZ_3 = new QLabel(frame_2);
        VelocityZ_3->setObjectName(QString::fromUtf8("VelocityZ_3"));
        VelocityZ_3->setFont(font1);
        VelocityZ_3->setStyleSheet(QString::fromUtf8("color:rgb(226,226,226)"));
        VelocityZ_3->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(VelocityZ_3, 0, 2, 1, 1);

        VelocityZ = new QLabel(frame_2);
        VelocityZ->setObjectName(QString::fromUtf8("VelocityZ"));
        VelocityZ->setFont(font1);
        VelocityZ->setStyleSheet(QString::fromUtf8("color:rgb(226,226,226)"));
        VelocityZ->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(VelocityZ, 1, 2, 1, 1);

        VelocityY_7 = new QLabel(frame_2);
        VelocityY_7->setObjectName(QString::fromUtf8("VelocityY_7"));
        VelocityY_7->setFont(font1);
        VelocityY_7->setStyleSheet(QString::fromUtf8("color:rgb(226,226,226)"));
        VelocityY_7->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(VelocityY_7, 2, 1, 1, 1);

        AccelX = new QLabel(frame_2);
        AccelX->setObjectName(QString::fromUtf8("AccelX"));
        AccelX->setFont(font1);
        AccelX->setStyleSheet(QString::fromUtf8("color:rgb(226,226,226)"));
        AccelX->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(AccelX, 3, 0, 1, 1);

        AccelY = new QLabel(frame_2);
        AccelY->setObjectName(QString::fromUtf8("AccelY"));
        AccelY->setFont(font1);
        AccelY->setStyleSheet(QString::fromUtf8("color:rgb(226,226,226)"));
        AccelY->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(AccelY, 3, 1, 1, 1);

        AccelZ = new QLabel(frame_2);
        AccelZ->setObjectName(QString::fromUtf8("AccelZ"));
        AccelZ->setFont(font1);
        AccelZ->setStyleSheet(QString::fromUtf8("color:rgb(226,226,226)"));
        AccelZ->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(AccelZ, 3, 2, 1, 1);

        gridLayout_2->setRowStretch(0, 1);
        gridLayout_2->setRowStretch(1, 1);
        gridLayout_2->setRowStretch(2, 1);
        gridLayout_2->setRowStretch(3, 1);
        gridLayout_2->setColumnStretch(0, 1);
        gridLayout_2->setColumnStretch(1, 1);
        gridLayout_2->setColumnStretch(2, 1);
        label_151 = new QLabel(widget);
        label_151->setObjectName(QString::fromUtf8("label_151"));
        label_151->setGeometry(QRect(400, 0, 671, 41));
        label_151->setStyleSheet(QString::fromUtf8("background-color:rgb(0, 74, 189);\n"
"color: rgb(185, 129, 168);\n"
"font-size:18px;\n"
"font-weight:700;\n"
"border-radius:10px;\n"
"border:2px dashed rgb(109, 156, 237)"));
        label_151->setAlignment(Qt::AlignCenter);
        frame_57 = new QFrame(widget);
        frame_57->setObjectName(QString::fromUtf8("frame_57"));
        frame_57->setGeometry(QRect(1320, 460, 201, 481));
        frame_57->setStyleSheet(QString::fromUtf8("background-color:rgb(7, 22, 79);\n"
"border:2px dashed rgb(109, 156, 237);\n"
""));
        frame_57->setFrameShape(QFrame::StyledPanel);
        frame_57->setFrameShadow(QFrame::Raised);
        widget_37 = new QWidget(frame_57);
        widget_37->setObjectName(QString::fromUtf8("widget_37"));
        widget_37->setGeometry(QRect(10, 20, 181, 441));
        widget_37->setStyleSheet(QString::fromUtf8("border:none;"));
        verticalSlider = new QSlider(widget_37);
        verticalSlider->setObjectName(QString::fromUtf8("verticalSlider"));
        verticalSlider->setGeometry(QRect(25, 40, 30, 300));
        verticalSlider->setMaximum(10);
        verticalSlider->setOrientation(Qt::Vertical);
        verticalSlider->setTickPosition(QSlider::TicksAbove);
        verticalSlider->setTickInterval(0);
        verticalSlider_2 = new QSlider(widget_37);
        verticalSlider_2->setObjectName(QString::fromUtf8("verticalSlider_2"));
        verticalSlider_2->setGeometry(QRect(115, 40, 30, 300));
        verticalSlider_2->setMaximum(10);
        verticalSlider_2->setOrientation(Qt::Vertical);
        verticalSlider_2->setTickPosition(QSlider::TicksAbove);
        verticalSlider_2->setTickInterval(0);
        Depth_show_3 = new QLabel(widget_37);
        Depth_show_3->setObjectName(QString::fromUtf8("Depth_show_3"));
        Depth_show_3->setGeometry(QRect(10, 360, 81, 42));
        Depth_show_3->setFont(font1);
        Depth_show_3->setStyleSheet(QString::fromUtf8("color:rgb(226,226,226)"));
        Depth_show_7 = new QLabel(widget_37);
        Depth_show_7->setObjectName(QString::fromUtf8("Depth_show_7"));
        Depth_show_7->setGeometry(QRect(95, 360, 81, 42));
        Depth_show_7->setFont(font1);
        Depth_show_7->setStyleSheet(QString::fromUtf8("color:rgb(226,226,226)"));
        label_150 = new QLabel(widget);
        label_150->setObjectName(QString::fromUtf8("label_150"));
        label_150->setGeometry(QRect(1320, 420, 201, 41));
        label_150->setStyleSheet(QString::fromUtf8("background-color:rgb(0, 74, 189);\n"
"color: rgb(185, 129, 168);\n"
"font-size:18px;\n"
"font-weight:700;\n"
"border-radius:10px;\n"
"border:2px dashed rgb(109, 156, 237)"));
        label_150->setAlignment(Qt::AlignCenter);
        label_152 = new QLabel(widget);
        label_152->setObjectName(QString::fromUtf8("label_152"));
        label_152->setGeometry(QRect(0, 420, 551, 41));
        label_152->setStyleSheet(QString::fromUtf8("background-color:rgb(0, 74, 189);\n"
"color: rgb(185, 129, 168);\n"
"font-size:18px;\n"
"font-weight:700;\n"
"border-radius:10px;\n"
"border:2px dashed rgb(109, 156, 237)"));
        label_152->setAlignment(Qt::AlignCenter);
        frame_59 = new QFrame(widget);
        frame_59->setObjectName(QString::fromUtf8("frame_59"));
        frame_59->setGeometry(QRect(0, 460, 551, 481));
        frame_59->setStyleSheet(QString::fromUtf8("background-color:rgb(7, 22, 79);\n"
"border:2px dashed rgb(109, 156, 237);\n"
""));
        frame_59->setFrameShape(QFrame::StyledPanel);
        frame_59->setFrameShadow(QFrame::Raised);
        widget_40 = new QWidget(frame_59);
        widget_40->setObjectName(QString::fromUtf8("widget_40"));
        widget_40->setGeometry(QRect(20, 30, 481, 401));
        widget_40->setStyleSheet(QString::fromUtf8("border:none;"));
        progressThree_3 = new ProgressThree(widget_40);
        progressThree_3->setObjectName(QString::fromUtf8("progressThree_3"));
        progressThree_3->setGeometry(QRect(210, 120, 300, 30));
        progressThree_3->setValue1(100);
        progressThree_3->setValue2(100);
        progressThree_3->setValue3(0);
        progressThree_3->setColor1(QColor(0, 255, 0));
        progressThree_3->setColor2(QColor(255, 255, 255));
        progressThree_2 = new ProgressThree(widget_40);
        progressThree_2->setObjectName(QString::fromUtf8("progressThree_2"));
        progressThree_2->setGeometry(QRect(210, 70, 300, 30));
        progressThree_2->setValue1(100);
        progressThree_2->setValue2(100);
        progressThree_2->setValue3(0);
        progressThree_2->setColor1(QColor(0, 255, 0));
        progressThree_2->setColor2(QColor(255, 255, 255));
        progressThree_6 = new ProgressThree(widget_40);
        progressThree_6->setObjectName(QString::fromUtf8("progressThree_6"));
        progressThree_6->setGeometry(QRect(210, 270, 300, 30));
        progressThree_6->setValue1(100);
        progressThree_6->setValue2(100);
        progressThree_6->setValue3(0);
        progressThree_6->setColor1(QColor(0, 255, 0));
        progressThree_6->setColor2(QColor(255, 255, 255));
        servoChannel_6 = new QLabel(widget_40);
        servoChannel_6->setObjectName(QString::fromUtf8("servoChannel_6"));
        servoChannel_6->setGeometry(QRect(330, 270, 50, 30));
        servoChannel_6->setStyleSheet(QString::fromUtf8("background-color:transparent;\n"
"color:black;\n"
"font-weight:700;\n"
"font-size:18px;"));
        progressThree_7 = new ProgressThree(widget_40);
        progressThree_7->setObjectName(QString::fromUtf8("progressThree_7"));
        progressThree_7->setGeometry(QRect(210, 320, 300, 30));
        progressThree_7->setValue1(100);
        progressThree_7->setValue2(100);
        progressThree_7->setValue3(0);
        progressThree_7->setColor1(QColor(0, 255, 0));
        progressThree_7->setColor2(QColor(255, 255, 255));
        progressThree_1 = new ProgressThree(widget_40);
        progressThree_1->setObjectName(QString::fromUtf8("progressThree_1"));
        progressThree_1->setGeometry(QRect(210, 20, 300, 30));
        progressThree_1->setValue1(100);
        progressThree_1->setValue2(100);
        progressThree_1->setValue3(0);
        progressThree_1->setColor1(QColor(0, 255, 0));
        progressThree_1->setColor2(QColor(255, 255, 255));
        progressThree_4 = new ProgressThree(widget_40);
        progressThree_4->setObjectName(QString::fromUtf8("progressThree_4"));
        progressThree_4->setGeometry(QRect(210, 170, 300, 30));
        progressThree_4->setValue1(100);
        progressThree_4->setValue2(100);
        progressThree_4->setValue3(0);
        progressThree_4->setColor1(QColor(0, 255, 0));
        progressThree_4->setColor2(QColor(255, 255, 255));
        progressThree_5 = new ProgressThree(widget_40);
        progressThree_5->setObjectName(QString::fromUtf8("progressThree_5"));
        progressThree_5->setGeometry(QRect(210, 220, 300, 30));
        progressThree_5->setValue1(100);
        progressThree_5->setValue2(100);
        progressThree_5->setValue3(0);
        progressThree_5->setColor1(QColor(0, 255, 0));
        progressThree_5->setColor2(QColor(255, 255, 255));
        servoChannel_2 = new QLabel(widget_40);
        servoChannel_2->setObjectName(QString::fromUtf8("servoChannel_2"));
        servoChannel_2->setGeometry(QRect(330, 70, 50, 30));
        servoChannel_2->setStyleSheet(QString::fromUtf8("background-color:transparent;\n"
"color:black;\n"
"font-weight:700;\n"
"font-size:18px;"));
        servoChannel_3 = new QLabel(widget_40);
        servoChannel_3->setObjectName(QString::fromUtf8("servoChannel_3"));
        servoChannel_3->setGeometry(QRect(330, 120, 50, 30));
        servoChannel_3->setStyleSheet(QString::fromUtf8("background-color:transparent;\n"
"color:black;\n"
"font-weight:700;\n"
"font-size:18px;"));
        servoChannel_4 = new QLabel(widget_40);
        servoChannel_4->setObjectName(QString::fromUtf8("servoChannel_4"));
        servoChannel_4->setGeometry(QRect(330, 170, 50, 30));
        servoChannel_4->setStyleSheet(QString::fromUtf8("background-color:transparent;\n"
"color:black;\n"
"font-weight:700;\n"
"font-size:18px;"));
        servoChannel_5 = new QLabel(widget_40);
        servoChannel_5->setObjectName(QString::fromUtf8("servoChannel_5"));
        servoChannel_5->setGeometry(QRect(330, 220, 50, 30));
        servoChannel_5->setStyleSheet(QString::fromUtf8("background-color:transparent;\n"
"color:black;\n"
"font-weight:700;\n"
"font-size:18px;"));
        progressThree_8 = new ProgressThree(widget_40);
        progressThree_8->setObjectName(QString::fromUtf8("progressThree_8"));
        progressThree_8->setGeometry(QRect(210, 370, 300, 30));
        progressThree_8->setValue1(100);
        progressThree_8->setValue2(100);
        progressThree_8->setValue3(0);
        progressThree_8->setColor1(QColor(0, 255, 0));
        progressThree_8->setColor2(QColor(255, 255, 255));
        servoChannel_7 = new QLabel(widget_40);
        servoChannel_7->setObjectName(QString::fromUtf8("servoChannel_7"));
        servoChannel_7->setGeometry(QRect(330, 320, 50, 30));
        servoChannel_7->setStyleSheet(QString::fromUtf8("background-color:transparent;\n"
"color:black;\n"
"font-weight:700;\n"
"font-size:18px;"));
        servoChannel_8 = new QLabel(widget_40);
        servoChannel_8->setObjectName(QString::fromUtf8("servoChannel_8"));
        servoChannel_8->setGeometry(QRect(330, 370, 50, 30));
        servoChannel_8->setStyleSheet(QString::fromUtf8("background-color:transparent;\n"
"color:black;\n"
"font-weight:700;\n"
"font-size:18px;"));
        servoChannel_1 = new QLabel(widget_40);
        servoChannel_1->setObjectName(QString::fromUtf8("servoChannel_1"));
        servoChannel_1->setGeometry(QRect(330, 20, 50, 30));
        servoChannel_1->setStyleSheet(QString::fromUtf8("background-color:transparent;\n"
"color:black;\n"
"font-weight:700;\n"
"font-size:18px;"));
        channel_9 = new QLabel(widget_40);
        channel_9->setObjectName(QString::fromUtf8("channel_9"));
        channel_9->setGeometry(QRect(20, 10, 181, 42));
        QFont font2;
        font2.setPointSize(14);
        font2.setBold(true);
        channel_9->setFont(font2);
        channel_9->setStyleSheet(QString::fromUtf8("color:rgb(226,226,226)"));
        channel_10 = new QLabel(widget_40);
        channel_10->setObjectName(QString::fromUtf8("channel_10"));
        channel_10->setGeometry(QRect(20, 60, 181, 42));
        channel_10->setFont(font2);
        channel_10->setStyleSheet(QString::fromUtf8("color:rgb(226,226,226)"));
        channel_11 = new QLabel(widget_40);
        channel_11->setObjectName(QString::fromUtf8("channel_11"));
        channel_11->setGeometry(QRect(20, 110, 181, 42));
        channel_11->setFont(font2);
        channel_11->setStyleSheet(QString::fromUtf8("color:rgb(226,226,226)"));
        channel_12 = new QLabel(widget_40);
        channel_12->setObjectName(QString::fromUtf8("channel_12"));
        channel_12->setGeometry(QRect(20, 160, 181, 42));
        channel_12->setFont(font2);
        channel_12->setStyleSheet(QString::fromUtf8("color:rgb(226,226,226)"));
        channel_13 = new QLabel(widget_40);
        channel_13->setObjectName(QString::fromUtf8("channel_13"));
        channel_13->setGeometry(QRect(20, 210, 181, 42));
        channel_13->setFont(font2);
        channel_13->setStyleSheet(QString::fromUtf8("color:rgb(226,226,226)"));
        channel_14 = new QLabel(widget_40);
        channel_14->setObjectName(QString::fromUtf8("channel_14"));
        channel_14->setGeometry(QRect(20, 260, 181, 42));
        channel_14->setFont(font2);
        channel_14->setStyleSheet(QString::fromUtf8("color:rgb(226,226,226)"));
        channel_15 = new QLabel(widget_40);
        channel_15->setObjectName(QString::fromUtf8("channel_15"));
        channel_15->setGeometry(QRect(20, 310, 181, 42));
        channel_15->setFont(font2);
        channel_15->setStyleSheet(QString::fromUtf8("color:rgb(226,226,226)"));
        channel_16 = new QLabel(widget_40);
        channel_16->setObjectName(QString::fromUtf8("channel_16"));
        channel_16->setGeometry(QRect(20, 360, 181, 42));
        channel_16->setFont(font2);
        channel_16->setStyleSheet(QString::fromUtf8("color:rgb(226,226,226)"));
        label_153 = new QLabel(widget);
        label_153->setObjectName(QString::fromUtf8("label_153"));
        label_153->setGeometry(QRect(1070, 0, 451, 41));
        label_153->setStyleSheet(QString::fromUtf8("background-color:rgb(0, 74, 189);\n"
"color: rgb(185, 129, 168);\n"
"font-size:18px;\n"
"font-weight:700;\n"
"border-radius:10px;\n"
"border:2px dashed rgb(109, 156, 237)"));
        label_153->setAlignment(Qt::AlignCenter);
        frame_60 = new QFrame(widget);
        frame_60->setObjectName(QString::fromUtf8("frame_60"));
        frame_60->setGeometry(QRect(1070, 40, 451, 381));
        frame_60->setStyleSheet(QString::fromUtf8("background-color:rgb(7, 22, 79);\n"
"border:2px dashed rgb(109, 156, 237);\n"
""));
        frame_60->setFrameShape(QFrame::StyledPanel);
        frame_60->setFrameShadow(QFrame::Raised);
        widget_39 = new QWidget(frame_60);
        widget_39->setObjectName(QString::fromUtf8("widget_39"));
        widget_39->setGeometry(QRect(70, 10, 370, 200));
        widget_39->setStyleSheet(QString::fromUtf8("border:none;\n"
"border-bottom: 2px dashed rgb(109, 156, 237);"));
        monocularCameraA1Switch = new SwitchButton(widget_39);
        monocularCameraA1Switch->setObjectName(QString::fromUtf8("monocularCameraA1Switch"));
        monocularCameraA1Switch->setGeometry(QRect(240, 20, 100, 30));
        VelocityY_2 = new QLabel(widget_39);
        VelocityY_2->setObjectName(QString::fromUtf8("VelocityY_2"));
        VelocityY_2->setGeometry(QRect(40, 15, 170, 40));
        VelocityY_2->setFont(font1);
        VelocityY_2->setStyleSheet(QString::fromUtf8("color:rgb(226,226,226);\n"
"border:none"));
        monocularCameraA2Switch = new SwitchButton(widget_39);
        monocularCameraA2Switch->setObjectName(QString::fromUtf8("monocularCameraA2Switch"));
        monocularCameraA2Switch->setGeometry(QRect(240, 80, 101, 30));
        VelocityY_3 = new QLabel(widget_39);
        VelocityY_3->setObjectName(QString::fromUtf8("VelocityY_3"));
        VelocityY_3->setGeometry(QRect(40, 75, 170, 40));
        VelocityY_3->setFont(font1);
        VelocityY_3->setStyleSheet(QString::fromUtf8("color:rgb(226,226,226);\n"
"border:none"));
        binocularCameraSwitch = new SwitchButton(widget_39);
        binocularCameraSwitch->setObjectName(QString::fromUtf8("binocularCameraSwitch"));
        binocularCameraSwitch->setGeometry(QRect(240, 140, 101, 30));
        VelocityY_4 = new QLabel(widget_39);
        VelocityY_4->setObjectName(QString::fromUtf8("VelocityY_4"));
        VelocityY_4->setGeometry(QRect(40, 135, 170, 40));
        VelocityY_4->setFont(font1);
        VelocityY_4->setStyleSheet(QString::fromUtf8("color:rgb(226,226,226);\n"
"border:none"));
        label_154 = new QLabel(frame_60);
        label_154->setObjectName(QString::fromUtf8("label_154"));
        label_154->setGeometry(QRect(0, 0, 61, 211));
        label_154->setLayoutDirection(Qt::LeftToRight);
        label_154->setStyleSheet(QString::fromUtf8("background-color:rgb(0, 74, 189);\n"
"color: rgb(185, 129, 168);\n"
"font-size:18px;\n"
"font-weight:700;\n"
"border-radius:10px;\n"
"border:2px dashed rgb(109, 156, 237)"));
        label_154->setAlignment(Qt::AlignCenter);
        label_155 = new QLabel(frame_60);
        label_155->setObjectName(QString::fromUtf8("label_155"));
        label_155->setGeometry(QRect(0, 210, 60, 171));
        label_155->setLayoutDirection(Qt::LeftToRight);
        label_155->setStyleSheet(QString::fromUtf8("background-color:rgb(0, 74, 189);\n"
"color: rgb(185, 129, 168);\n"
"font-size:18px;\n"
"font-weight:700;\n"
"border-radius:10px;\n"
"border:2px dashed rgb(109, 156, 237)"));
        label_155->setAlignment(Qt::AlignCenter);
        VelocityY_6 = new QLabel(frame_60);
        VelocityY_6->setObjectName(QString::fromUtf8("VelocityY_6"));
        VelocityY_6->setGeometry(QRect(110, 240, 171, 42));
        VelocityY_6->setFont(font1);
        VelocityY_6->setStyleSheet(QString::fromUtf8("color:rgb(226,226,226);\n"
"border:none"));
        VelocityY_5 = new QLabel(frame_60);
        VelocityY_5->setObjectName(QString::fromUtf8("VelocityY_5"));
        VelocityY_5->setGeometry(QRect(110, 310, 171, 42));
        VelocityY_5->setFont(font1);
        VelocityY_5->setStyleSheet(QString::fromUtf8("color:rgb(226,226,226);\n"
"border:none"));
        monocularCameraB1Switch = new SwitchButton(frame_60);
        monocularCameraB1Switch->setObjectName(QString::fromUtf8("monocularCameraB1Switch"));
        monocularCameraB1Switch->setGeometry(QRect(310, 250, 101, 30));
        monocularCameraB2Switch = new SwitchButton(frame_60);
        monocularCameraB2Switch->setObjectName(QString::fromUtf8("monocularCameraB2Switch"));
        monocularCameraB2Switch->setGeometry(QRect(310, 320, 101, 30));
        label_156 = new QLabel(widget);
        label_156->setObjectName(QString::fromUtf8("label_156"));
        label_156->setGeometry(QRect(1520, 0, 111, 41));
        label_156->setStyleSheet(QString::fromUtf8("background-color:rgb(0, 74, 189);\n"
"color: rgb(185, 129, 168);\n"
"font-size:18px;\n"
"font-weight:700;\n"
"border-radius:10px;\n"
"border:2px dashed rgb(109, 156, 237)"));
        label_156->setAlignment(Qt::AlignCenter);
        frame_61 = new QFrame(widget);
        frame_61->setObjectName(QString::fromUtf8("frame_61"));
        frame_61->setGeometry(QRect(1520, 40, 111, 901));
        frame_61->setStyleSheet(QString::fromUtf8("background-color:rgb(7, 22, 79);\n"
"border:2px dashed rgb(109, 156, 237);\n"
""));
        frame_61->setFrameShape(QFrame::StyledPanel);
        frame_61->setFrameShadow(QFrame::Raised);
        widget_41 = new QWidget(frame_61);
        widget_41->setObjectName(QString::fromUtf8("widget_41"));
        widget_41->setGeometry(QRect(10, 10, 91, 881));
        widget_41->setStyleSheet(QString::fromUtf8("border:none;"));
        rulerBar = new RulerBar(widget_41);
        rulerBar->setObjectName(QString::fromUtf8("rulerBar"));
        rulerBar->setGeometry(QRect(-10, 40, 111, 851));
        rulerBar->setMaxValue(300.000000000000000);
        rulerBar->setValue(0.000000000000000);
        rulerBar->setLongStep(10);
        rulerBar->setBgColorStart(QColor(100, 100, 100));
        rulerBar->setBgColorEnd(QColor(7, 22, 79));
        Depth_show = new QLabel(widget_41);
        Depth_show->setObjectName(QString::fromUtf8("Depth_show"));
        Depth_show->setGeometry(QRect(-5, -6, 101, 42));
        QFont font3;
        font3.setPointSize(13);
        font3.setBold(true);
        Depth_show->setFont(font3);
        Depth_show->setStyleSheet(QString::fromUtf8("color:rgb(226,226,226)"));
        Depth_show->setAlignment(Qt::AlignCenter);
        frame_62 = new QFrame(widget);
        frame_62->setObjectName(QString::fromUtf8("frame_62"));
        frame_62->setGeometry(QRect(550, 460, 771, 481));
        frame_62->setStyleSheet(QString::fromUtf8("background-color:rgb(7, 22, 79);\n"
"border:2px dashed rgb(109, 156, 237);\n"
""));
        frame_62->setFrameShape(QFrame::StyledPanel);
        frame_62->setFrameShadow(QFrame::Raised);
        widget_42 = new QWidget(frame_62);
        widget_42->setObjectName(QString::fromUtf8("widget_42"));
        widget_42->setGeometry(QRect(20, 10, 501, 441));
        widget_42->setStyleSheet(QString::fromUtf8("border: none;"));
        label_170 = new QLabel(widget);
        label_170->setObjectName(QString::fromUtf8("label_170"));
        label_170->setGeometry(QRect(550, 420, 221, 41));
        label_170->setStyleSheet(QString::fromUtf8("background-color:rgb(0, 74, 189);\n"
"color: rgb(185, 129, 168);\n"
"font-size:18px;\n"
"font-weight:700;\n"
"border-radius:10px;\n"
"border:2px dashed rgb(109, 156, 237)"));
        label_170->setAlignment(Qt::AlignCenter);
        label_171 = new QLabel(widget);
        label_171->setObjectName(QString::fromUtf8("label_171"));
        label_171->setGeometry(QRect(770, 420, 551, 41));
        label_171->setStyleSheet(QString::fromUtf8("background-color:rgb(0, 74, 189);\n"
"color: rgb(185, 129, 168);\n"
"font-size:18px;\n"
"font-weight:700;\n"
"border-radius:10px;\n"
"border:2px dashed rgb(109, 156, 237)"));
        label_171->setAlignment(Qt::AlignCenter);

        retranslateUi(FlightControl);

        QMetaObject::connectSlotsByName(FlightControl);
    } // setupUi

    void retranslateUi(QWidget *FlightControl)
    {
        FlightControl->setWindowTitle(QCoreApplication::translate("FlightControl", "Form", nullptr));
        statue_13->setText(QCoreApplication::translate("FlightControl", "\346\216\247\345\210\266\346\250\241\345\274\217\357\274\232", nullptr));
        Control_mode->setItemText(0, QCoreApplication::translate("FlightControl", "\346\211\213\345\212\250\346\250\241\345\274\217", nullptr));
        Control_mode->setItemText(1, QCoreApplication::translate("FlightControl", "\350\207\252\345\212\250\347\250\263\345\256\232", nullptr));
        Control_mode->setItemText(2, QCoreApplication::translate("FlightControl", "\345\256\232\346\267\261\346\250\241\345\274\217", nullptr));

        statue_3->setText(QCoreApplication::translate("FlightControl", "\346\211\213\346\237\204\344\275\277\350\203\275\357\274\232", nullptr));
        statue_4->setText(QCoreApplication::translate("FlightControl", "\344\275\277\350\203\275\357\274\232", nullptr));
        Roll_show_5->setText(QCoreApplication::translate("FlightControl", "\346\250\252\346\273\232\350\247\222(Roll)", nullptr));
        Roll_show_6->setText(QCoreApplication::translate("FlightControl", "\344\277\257\345\206\262\350\247\222(Pitch)", nullptr));
        Roll_show_7->setText(QCoreApplication::translate("FlightControl", "\350\210\252\345\220\221\350\247\222(Yaw)", nullptr));
        rollValue->setText(QCoreApplication::translate("FlightControl", "0.00\302\260", nullptr));
        pitchValue->setText(QCoreApplication::translate("FlightControl", "0.00\302\260", nullptr));
        yawValue->setText(QCoreApplication::translate("FlightControl", "0.00\302\260", nullptr));
        label_149->setText(QCoreApplication::translate("FlightControl", "\345\247\277\346\200\201\344\277\241\346\201\257", nullptr));
        gaugeWatchZ->setUnit(QCoreApplication::translate("FlightControl", "m/s", nullptr));
        gaugeWatchY->setUnit(QCoreApplication::translate("FlightControl", "m/s", nullptr));
        gaugeWatchX->setUnit(QCoreApplication::translate("FlightControl", "m/s", nullptr));
        VelocityY_8->setText(QCoreApplication::translate("FlightControl", "\351\200\237\345\272\246Y", nullptr));
        AccelXL->setText(QCoreApplication::translate("FlightControl", "\345\212\240\351\200\237\345\272\246X", nullptr));
        VelocityX_3->setText(QCoreApplication::translate("FlightControl", "\351\200\237\345\272\246X", nullptr));
        VelocityX->setText(QCoreApplication::translate("FlightControl", "0.0m/s", nullptr));
        VelocityY->setText(QCoreApplication::translate("FlightControl", "0.0m/s", nullptr));
        VelocityZ_2->setText(QCoreApplication::translate("FlightControl", "\345\212\240\351\200\237\345\272\246Z", nullptr));
        VelocityZ_3->setText(QCoreApplication::translate("FlightControl", "\351\200\237\345\272\246Z", nullptr));
        VelocityZ->setText(QCoreApplication::translate("FlightControl", "0.0m/s", nullptr));
        VelocityY_7->setText(QCoreApplication::translate("FlightControl", "\345\212\240\351\200\237\345\272\246Y", nullptr));
        AccelX->setText(QCoreApplication::translate("FlightControl", "0.0m/s\302\262", nullptr));
        AccelY->setText(QCoreApplication::translate("FlightControl", "0.0m/s\302\262", nullptr));
        AccelZ->setText(QCoreApplication::translate("FlightControl", "0.0m/s\302\262", nullptr));
        label_151->setText(QCoreApplication::translate("FlightControl", "\351\200\237\345\272\246\344\277\241\346\201\257", nullptr));
        Depth_show_3->setText(QCoreApplication::translate("FlightControl", "\347\201\257\345\205\2111", nullptr));
        Depth_show_7->setText(QCoreApplication::translate("FlightControl", "\347\201\257\345\205\2112", nullptr));
        label_150->setText(QCoreApplication::translate("FlightControl", "\347\201\257\345\205\211\344\277\241\346\201\257", nullptr));
        label_152->setText(QCoreApplication::translate("FlightControl", "\346\216\250\350\277\233\345\231\250\344\277\241\346\201\257", nullptr));
        servoChannel_6->setText(QCoreApplication::translate("FlightControl", "0%", nullptr));
        servoChannel_2->setText(QCoreApplication::translate("FlightControl", "0%", nullptr));
        servoChannel_3->setText(QCoreApplication::translate("FlightControl", "0%", nullptr));
        servoChannel_4->setText(QCoreApplication::translate("FlightControl", "0%", nullptr));
        servoChannel_5->setText(QCoreApplication::translate("FlightControl", "0%", nullptr));
        servoChannel_7->setText(QCoreApplication::translate("FlightControl", "0%", nullptr));
        servoChannel_8->setText(QCoreApplication::translate("FlightControl", "0%", nullptr));
        servoChannel_1->setText(QCoreApplication::translate("FlightControl", "0%", nullptr));
        channel_9->setText(QCoreApplication::translate("FlightControl", "ServoChannel1", nullptr));
        channel_10->setText(QCoreApplication::translate("FlightControl", "ServoChannel2", nullptr));
        channel_11->setText(QCoreApplication::translate("FlightControl", "ServoChannel3", nullptr));
        channel_12->setText(QCoreApplication::translate("FlightControl", "ServoChannel4", nullptr));
        channel_13->setText(QCoreApplication::translate("FlightControl", "ServoChannel5", nullptr));
        channel_14->setText(QCoreApplication::translate("FlightControl", "ServoChannel6", nullptr));
        channel_15->setText(QCoreApplication::translate("FlightControl", "ServoChannel7", nullptr));
        channel_16->setText(QCoreApplication::translate("FlightControl", "ServoChannel8", nullptr));
        label_153->setText(QCoreApplication::translate("FlightControl", "\346\221\204\345\203\217\345\244\264\344\277\241\346\201\257", nullptr));
        VelocityY_2->setText(QCoreApplication::translate("FlightControl", "\345\215\225\347\233\256\346\221\204\345\203\217\345\244\2641", nullptr));
        VelocityY_3->setText(QCoreApplication::translate("FlightControl", "\345\215\225\347\233\256\346\221\204\345\203\217\345\244\2642", nullptr));
        VelocityY_4->setText(QCoreApplication::translate("FlightControl", "\345\217\214\347\233\256\346\221\204\345\203\217\345\244\264", nullptr));
        label_154->setText(QCoreApplication::translate("FlightControl", "<p><br><br><br>A<br><br>\351\235\242<br><p>", nullptr));
        label_155->setText(QCoreApplication::translate("FlightControl", "<html><head/><body><p><br><br>B<br><br/>\351\235\242<br/></p><p><br/></p></body></html>", nullptr));
        VelocityY_6->setText(QCoreApplication::translate("FlightControl", "\345\215\225\347\233\256\346\221\204\345\203\217\345\244\2641", nullptr));
        VelocityY_5->setText(QCoreApplication::translate("FlightControl", "\345\215\225\347\233\256\346\221\204\345\203\217\345\244\2642", nullptr));
        label_156->setText(QCoreApplication::translate("FlightControl", "\346\267\261\345\272\246", nullptr));
        Depth_show->setText(QCoreApplication::translate("FlightControl", "0.00m", nullptr));
        label_170->setText(QCoreApplication::translate("FlightControl", "\346\212\245\350\255\246\346\227\266\351\227\264", nullptr));
        label_171->setText(QCoreApplication::translate("FlightControl", "\346\212\245\350\255\246\345\206\205\345\256\271", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FlightControl: public Ui_FlightControl {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FLIGHTCONTROL_H
