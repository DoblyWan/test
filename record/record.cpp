#include "record.h"
#include "ui_record.h"

record::record(QWidget *parent, FFmpegWidget* rtsp, QString dir)
    : QWidget(parent)
    , ui(new Ui::record)
{
    ui->setupUi(this);


    m_rtsp = rtsp;

    ui->timeLabel->setText("00:00:00");

    recordPath = QDir::cleanPath(QCoreApplication::applicationDirPath() + QDir::separator() + recordFilePath);
    ui->recordBtn->setCheckable(true);
    ui->recordBtn->setStyleSheet(
        "QPushButton {"
        "   background-color: rgb(62, 67, 75);"
        "   border: 1px solid #333;"
        "   border-radius: 10px;"
        "   qproperty-icon: url(:/images/unrecord.png);"
        "}"
        "QPushButton:hover {"
        "   background-color:rgb(72, 78, 88);"
        "   icon: url(:/images/unrecordhover.png);"
        "   icon-size: 30px 30px; "
        "}"
        "QPushButton:checked {"
        "   background-color:  rgb(0, 120, 212);"
        "   icon: url(:/images/recording.png);"
        "   icon-size: 30px 30px; "
        "}"
        "QPushButton:checked:hover{"
        "   background-color: rgb(62,67,65)"
        "}"
        );


    // 初始化计时器
    timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, &::record::updateTimer);


    RECORD_DIR += dir;

}


void record::on_recordBtn_toggled(bool checked)
{

    if(checked){

        today = QDateTime::currentDateTime().toString("yyyy-MM-dd_hh-mm-ss");
        recordFilePath = QString("%1/app_%2.mp4").arg(RECORD_DIR).arg(today);
        recordPath = QDir::cleanPath(QCoreApplication::applicationDirPath() + QDir::separator() + recordFilePath);

        m_rtsp->thread->startRecord(recordPath);
        elapsedSeconds = 0;
        timer->start(1000);
    } else {
        m_rtsp->thread->stopRecord();
        timer->stop();
        ui->timeLabel->setText("00:00:00");
    }
}


void record::updateTimer()
{
    elapsedSeconds++;
    ui->timeLabel->setText(QTime::fromMSecsSinceStartOfDay(elapsedSeconds * 1000).toString("HH:mm:ss"));
}


QPushButton* record::getRecord()
{
    return ui->recordBtn;
}


record::~record()
{
    delete ui;
}
