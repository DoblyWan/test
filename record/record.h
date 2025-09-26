#ifndef RECORD_H
#define RECORD_H

#include <QWidget>
#include <ffmpeg.h>

namespace Ui {
class record;
}

class record : public QWidget
{
    Q_OBJECT

public:
    explicit record(QWidget *parent = nullptr, FFmpegWidget* rtsp = nullptr, QString dir = "");
    ~record();

private:
    Ui::record *ui;

    FFmpegWidget* m_rtsp; // 成员变量声明

    QTimer *timer;
    qint64 startTime;
    qint64 elapsedSeconds = 0;

    QString RECORD_DIR = "../../../videos";
    QString today = QDateTime::currentDateTime().toString("yyyy-MM-dd_hh-mm-ss");
    QString recordFilePath = QString("%1/app_%2.mp4").arg(RECORD_DIR).arg(today);
    QString recordPath;


private slots:

    void on_recordBtn_toggled(bool checked);

    void updateTimer();

public:
    QPushButton* getRecord();

};

#endif // RECORD_H
