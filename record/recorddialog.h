#ifndef RECORDDIALOG_H
#define RECORDDIALOG_H

#include <QDialog>
#include <ffmpeg.h>
#include "record.h"

namespace Ui {
class recorddialog;
}

class recorddialog : public QDialog
{
    Q_OBJECT

public:
    explicit recorddialog(QWidget *parent = nullptr,
                          FFmpegWidget *rtsp1 =  nullptr,
                          FFmpegWidget *rtsp2 =  nullptr,
                          FFmpegWidget *rtsp3 =  nullptr,
                          FFmpegWidget *rtsp4 =  nullptr,
                          FFmpegWidget *rtsp5 =  nullptr);
    ~recorddialog();

    record* r = nullptr;

private:
    Ui::recorddialog *ui;

    FFmpegWidget* m_rtsp; // 成员变量声明
    std::vector<FFmpegWidget*> m_rtsps; // 存储FFmpegWidget指针

    QTimer *timer;
    qint64 startTime;
    qint64 elapsedSeconds = 0;

    QString RECORD_DIR = "../../../videos";
    QString today = QDateTime::currentDateTime().toString("yyyy-MM-dd_hh-mm-ss");
    QString recordFilePath = QString("%1/app_%2.mp4").arg(RECORD_DIR).arg(today);
    QString recordPath;

    record *record1 = new record();
    record *record2 = new record();
    record *record3 = new record();
    record *record4 = new record();
    record *record5 = new record();


private slots:

public slots:
    void cameraControl(int i, bool open);

protected:
    void closeEvent(QCloseEvent *event) override; // 重写关闭事件

};

#endif // RECORDDIALOG_H
