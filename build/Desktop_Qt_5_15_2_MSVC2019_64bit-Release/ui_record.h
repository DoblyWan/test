/********************************************************************************
** Form generated from reading UI file 'record.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RECORD_H
#define UI_RECORD_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_record
{
public:
    QPushButton *recordBtn;
    QPushButton *pushButton;
    QLabel *timeLabel;

    void setupUi(QWidget *record)
    {
        if (record->objectName().isEmpty())
            record->setObjectName(QString::fromUtf8("record"));
        record->resize(260, 85);
        record->setStyleSheet(QString::fromUtf8("background-color: rgb(14, 25, 31);\n"
"color: white;"));
        recordBtn = new QPushButton(record);
        recordBtn->setObjectName(QString::fromUtf8("recordBtn"));
        recordBtn->setGeometry(QRect(5, 5, 75, 75));
        recordBtn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/unrecord.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon.addFile(QString::fromUtf8(":/images/unrecordhover.png"), QSize(), QIcon::Normal, QIcon::On);
        recordBtn->setIcon(icon);
        recordBtn->setIconSize(QSize(30, 30));
        pushButton = new QPushButton(record);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(100, 15, 50, 50));
        pushButton->setStyleSheet(QString::fromUtf8("border:none;"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/startrecord.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon1);
        pushButton->setIconSize(QSize(25, 25));
        timeLabel = new QLabel(record);
        timeLabel->setObjectName(QString::fromUtf8("timeLabel"));
        timeLabel->setGeometry(QRect(150, 15, 100, 50));
        QFont font;
        font.setPointSize(12);
        timeLabel->setFont(font);

        retranslateUi(record);

        QMetaObject::connectSlotsByName(record);
    } // setupUi

    void retranslateUi(QWidget *record)
    {
        record->setWindowTitle(QCoreApplication::translate("record", "Form", nullptr));
        recordBtn->setText(QString());
        pushButton->setText(QString());
        timeLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class record: public Ui_record {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECORD_H
