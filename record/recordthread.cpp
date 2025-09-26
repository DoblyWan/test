#include "recordthread.h"

RecordThread::RecordThread(QObject *parent) : QThread(parent) {}

RecordThread::~RecordThread() {
    stop();
}

void RecordThread::setOutput(const QString &filename, AVFormatContext *inFmtCtx, int videoIndex)
{
    srcStreamIndex = videoIndex;

    avformat_alloc_output_context2(&outFmtCtx, nullptr, nullptr, filename.toStdString().c_str());
    if (!outFmtCtx) return;

    AVStream *inStream = inFmtCtx->streams[videoIndex];
    in_time_base = inStream->time_base;  // ✅ 保存原始时间基

    outStream = avformat_new_stream(outFmtCtx, nullptr);
    avcodec_parameters_copy(outStream->codecpar, inStream->codecpar);
    outStream->codecpar->codec_tag = 0;

    if (!(outFmtCtx->oformat->flags & AVFMT_NOFILE)) {
        if (avio_open(&outFmtCtx->pb, filename.toStdString().c_str(), AVIO_FLAG_WRITE) < 0) return;
    }

    avformat_write_header(outFmtCtx, nullptr);
    running = true;
}

void RecordThread::enqueuePacket(const AVPacket &packet)
{
    QMutexLocker locker(&mutex);
    AVPacket copy;
    av_init_packet(&copy);
    av_packet_ref(&copy, &packet);
    packetQueue.enqueue(copy);
    condition.wakeOne();
}

void RecordThread::run()
{
    while (running) {
        AVPacket packet;
        {
            QMutexLocker locker(&mutex);
            if (packetQueue.isEmpty()) {
                condition.wait(&mutex);
                continue;
            }
            packet = packetQueue.dequeue();
        }

        // ✅ 正确使用时间基转换（适配 FFmpeg 4.2.1）
        av_packet_rescale_ts(&packet,
                             in_time_base,          // 输入时间基来自 inStream
                             outStream->time_base); // 输出时间基来自 outStream

        packet.stream_index = outStream->index;
        av_interleaved_write_frame(outFmtCtx, &packet);
        av_packet_unref(&packet);
    }

    // 清理
    if (outFmtCtx) {
        av_write_trailer(outFmtCtx);
        if (!(outFmtCtx->oformat->flags & AVFMT_NOFILE)) {
            avio_closep(&outFmtCtx->pb);
        }
        avformat_free_context(outFmtCtx);
        outFmtCtx = nullptr;
    }
}

void RecordThread::stop()
{
    QMutexLocker locker(&mutex);
    running = false;
    condition.wakeAll();
    locker.unlock();
    wait();

    // 清空缓冲区
    while (!packetQueue.isEmpty()) {
        AVPacket pkt = packetQueue.dequeue();
        av_packet_unref(&pkt);
    }
}

