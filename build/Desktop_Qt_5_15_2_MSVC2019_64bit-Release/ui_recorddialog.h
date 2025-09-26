/********************************************************************************
** Form generated from reading UI file 'recorddialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RECORDDIALOG_H
#define UI_RECORDDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>
#include "switchbutton.h"

QT_BEGIN_NAMESPACE

class Ui_recorddialog
{
public:
    QGridLayout *gridLayout_6;
    QLabel *label;
    SwitchButton *monocularCameraA1Switch;
    QWidget *widget;
    QGridLayout *gridLayout;
    QLabel *label_2;
    SwitchButton *monocularCameraA2Switch;
    QWidget *widget_2;
    QGridLayout *gridLayout_2;
    QLabel *label_3;
    SwitchButton *binocularCameraSwitch;
    QWidget *widget_3;
    QGridLayout *gridLayout_3;
    QLabel *label_4;
    SwitchButton *monocularCameraB1Switch;
    QWidget *widget_4;
    QGridLayout *gridLayout_4;
    QLabel *label_5;
    SwitchButton *monocularCameraB2Switch;
    QWidget *widget_5;
    QGridLayout *gridLayout_5;

    void setupUi(QDialog *recorddialog)
    {
        if (recorddialog->objectName().isEmpty())
            recorddialog->setObjectName(QString::fromUtf8("recorddialog"));
        recorddialog->resize(480, 600);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(recorddialog->sizePolicy().hasHeightForWidth());
        recorddialog->setSizePolicy(sizePolicy);
        recorddialog->setMinimumSize(QSize(480, 600));
        recorddialog->setMaximumSize(QSize(480, 600));
        recorddialog->setStyleSheet(QString::fromUtf8("background-color: rgb(14, 25, 31);\n"
"color: white;"));
        gridLayout_6 = new QGridLayout(recorddialog);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        label = new QLabel(recorddialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(50, 40));
        label->setMaximumSize(QSize(50, 100));
        QFont font;
        font.setPointSize(12);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(label, 0, 0, 1, 1);

        monocularCameraA1Switch = new SwitchButton(recorddialog);
        monocularCameraA1Switch->setObjectName(QString::fromUtf8("monocularCameraA1Switch"));
        monocularCameraA1Switch->setMaximumSize(QSize(100, 30));

        gridLayout_6->addWidget(monocularCameraA1Switch, 0, 1, 1, 1);

        widget = new QWidget(recorddialog);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setMinimumSize(QSize(260, 85));
        widget->setMaximumSize(QSize(260, 85));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);

        gridLayout_6->addWidget(widget, 0, 2, 1, 1);

        label_2 = new QLabel(recorddialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(label_2, 1, 0, 1, 1);

        monocularCameraA2Switch = new SwitchButton(recorddialog);
        monocularCameraA2Switch->setObjectName(QString::fromUtf8("monocularCameraA2Switch"));
        monocularCameraA2Switch->setMaximumSize(QSize(100, 30));

        gridLayout_6->addWidget(monocularCameraA2Switch, 1, 1, 1, 1);

        widget_2 = new QWidget(recorddialog);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setMinimumSize(QSize(260, 85));
        widget_2->setMaximumSize(QSize(260, 85));
        gridLayout_2 = new QGridLayout(widget_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);

        gridLayout_6->addWidget(widget_2, 1, 2, 1, 1);

        label_3 = new QLabel(recorddialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(label_3, 2, 0, 1, 1);

        binocularCameraSwitch = new SwitchButton(recorddialog);
        binocularCameraSwitch->setObjectName(QString::fromUtf8("binocularCameraSwitch"));
        binocularCameraSwitch->setMaximumSize(QSize(100, 30));

        gridLayout_6->addWidget(binocularCameraSwitch, 2, 1, 1, 1);

        widget_3 = new QWidget(recorddialog);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        widget_3->setMinimumSize(QSize(260, 85));
        widget_3->setMaximumSize(QSize(260, 85));
        gridLayout_3 = new QGridLayout(widget_3);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);

        gridLayout_6->addWidget(widget_3, 2, 2, 1, 1);

        label_4 = new QLabel(recorddialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font);
        label_4->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(label_4, 3, 0, 1, 1);

        monocularCameraB1Switch = new SwitchButton(recorddialog);
        monocularCameraB1Switch->setObjectName(QString::fromUtf8("monocularCameraB1Switch"));
        monocularCameraB1Switch->setMaximumSize(QSize(100, 30));

        gridLayout_6->addWidget(monocularCameraB1Switch, 3, 1, 1, 1);

        widget_4 = new QWidget(recorddialog);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        widget_4->setMinimumSize(QSize(260, 85));
        widget_4->setMaximumSize(QSize(260, 85));
        gridLayout_4 = new QGridLayout(widget_4);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);

        gridLayout_6->addWidget(widget_4, 3, 2, 1, 1);

        label_5 = new QLabel(recorddialog);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font);
        label_5->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(label_5, 4, 0, 1, 1);

        monocularCameraB2Switch = new SwitchButton(recorddialog);
        monocularCameraB2Switch->setObjectName(QString::fromUtf8("monocularCameraB2Switch"));
        monocularCameraB2Switch->setMinimumSize(QSize(1, 0));
        monocularCameraB2Switch->setMaximumSize(QSize(100, 30));

        gridLayout_6->addWidget(monocularCameraB2Switch, 4, 1, 1, 1);

        widget_5 = new QWidget(recorddialog);
        widget_5->setObjectName(QString::fromUtf8("widget_5"));
        widget_5->setMinimumSize(QSize(260, 85));
        widget_5->setMaximumSize(QSize(260, 85));
        gridLayout_5 = new QGridLayout(widget_5);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        gridLayout_5->setContentsMargins(0, 0, 0, 0);

        gridLayout_6->addWidget(widget_5, 4, 2, 1, 1);


        retranslateUi(recorddialog);

        QMetaObject::connectSlotsByName(recorddialog);
    } // setupUi

    void retranslateUi(QDialog *recorddialog)
    {
        recorddialog->setWindowTitle(QCoreApplication::translate("recorddialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("recorddialog", "A1", nullptr));
        label_2->setText(QCoreApplication::translate("recorddialog", "A2", nullptr));
        label_3->setText(QCoreApplication::translate("recorddialog", "BC", nullptr));
        label_4->setText(QCoreApplication::translate("recorddialog", "B1", nullptr));
        label_5->setText(QCoreApplication::translate("recorddialog", "B2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class recorddialog: public Ui_recorddialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECORDDIALOG_H
