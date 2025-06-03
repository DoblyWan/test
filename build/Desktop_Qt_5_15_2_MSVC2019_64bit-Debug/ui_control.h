/********************************************************************************
** Form generated from reading UI file 'control.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONTROL_H
#define UI_CONTROL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>
#include "switchbutton.h"

QT_BEGIN_NAMESPACE

class Ui_Control
{
public:
    QFrame *frame;
    QGridLayout *gridLayout;
    QLabel *statue_13;
    QComboBox *Control_mode;
    QLabel *statue_3;
    SwitchButton *switchButton;
    QLabel *statue_4;
    SwitchButton *switchButton_2;

    void setupUi(QWidget *Control)
    {
        if (Control->objectName().isEmpty())
            Control->setObjectName(QString::fromUtf8("Control"));
        Control->resize(230, 250);
        Control->setStyleSheet(QString::fromUtf8("background-color:	transparent;"));
        frame = new QFrame(Control);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(1, 1, 228, 200));
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

        switchButton = new SwitchButton(frame);
        switchButton->setObjectName(QString::fromUtf8("switchButton"));
        sizePolicy.setHeightForWidth(switchButton->sizePolicy().hasHeightForWidth());
        switchButton->setSizePolicy(sizePolicy);

        gridLayout->addWidget(switchButton, 1, 1, 1, 1);

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

        retranslateUi(Control);

        QMetaObject::connectSlotsByName(Control);
    } // setupUi

    void retranslateUi(QWidget *Control)
    {
        Control->setWindowTitle(QCoreApplication::translate("Control", "Form", nullptr));
        statue_13->setText(QCoreApplication::translate("Control", "\346\216\247\345\210\266\346\250\241\345\274\217\357\274\232", nullptr));
        Control_mode->setItemText(0, QCoreApplication::translate("Control", "\346\211\213\345\212\250\346\250\241\345\274\217", nullptr));
        Control_mode->setItemText(1, QCoreApplication::translate("Control", "\350\207\252\345\212\250\347\250\263\345\256\232", nullptr));
        Control_mode->setItemText(2, QCoreApplication::translate("Control", "\345\256\232\346\267\261\346\250\241\345\274\217", nullptr));

        statue_3->setText(QCoreApplication::translate("Control", "\346\211\213\346\237\204\344\275\277\350\203\275\357\274\232", nullptr));
        statue_4->setText(QCoreApplication::translate("Control", "\344\275\277\350\203\275\357\274\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Control: public Ui_Control {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONTROL_H
