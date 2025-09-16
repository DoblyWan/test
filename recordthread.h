#ifndef RECORDTHREAD_H
#define RECORDTHREAD_H

#include <QThread>
#include <QQueue>
#include <QMutex>
#include <QWaitCondition>

extern "C" {
#include <libavformat/avformat.h>
#include <libavcodec/avcodec.h>
}

class RecordThread : public QThread
{
    Q_OBJECT
public:
    explicit RecordThread(QObject *parent = nullptr);
    ~RecordThread();

    void setOutput(const QString &filename, AVFormatContext *inFmtCtx, int videoIndex);
    void enqueuePacket(const AVPacket &packet);
    void stop();

protected:
    void run() override;

private:
    QQueue<AVPacket> packetQueue;
    QMutex mutex;
    QWaitCondition condition;
    bool running = false;

    AVFormatContext *outFmtCtx = nullptr;
    AVStream *outStream = nullptr;
    int srcStreamIndex = -1;
    AVRational in_time_base;  // ✅ 输入流的时间基，用于 timestamp 处理
};

#endif // RECORDTHREAD_H
