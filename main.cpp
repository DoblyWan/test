#include "mainwindow.h"

#include <QApplication>
#include <QFile>
#include <QTextStream>
#include <QMutex>
#include <QDateTime>
#include <QDebug>

QMutex logMutex;
QFile logFile;
QString currentLogDate; // 记录当前日志日期
const QString LOG_DIR = "../../../logs"; // 日志存储目录

// 声明默认消息处理函数指针
static QtMessageHandler defaultHandler = nullptr;


void messageHandler(QtMsgType type, const QMessageLogContext &context, const QString &msg);

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);


    defaultHandler = qInstallMessageHandler(messageHandler);

    // 程序结束时关闭日志
    QObject::connect(&a, &QApplication::aboutToQuit, [] {
        qInstallMessageHandler(nullptr);
        if (logFile.isOpen()) logFile.close();
    });


    MainWindow w;

    extern Control *control;
    QObject::connect(&w, &MainWindow::lightSignal, control, &Control::handleLightData);

     w.show();
    // w.showFullScreen();

    return a.exec();
}


void messageHandler(QtMsgType type, const QMessageLogContext &context, const QString &msg) {
    QMutexLocker locker(&logMutex);

    // 获取当前日期并生成文件名
    QString today = QDateTime::currentDateTime().toString("yyyy-MM-dd");
    QString logFileName = QString("%1/app_%2.log").arg(LOG_DIR).arg(today);

    // 如果日期变化或文件未打开，创建新文件
    if (logFile.fileName() != logFileName || !logFile.isOpen()) {
        if (logFile.isOpen()) {
            logFile.close();
        }

        // 创建日志目录（如果不存在）
        QDir().mkpath(LOG_DIR);

        logFile.setFileName(logFileName);
        if (!logFile.open(QIODevice::WriteOnly | QIODevice::Append | QIODevice::Text)) {
            fprintf(stderr, "无法打开日志文件: %s\n", logFileName.toUtf8().constData());
            return;
        }
    }

    QTextStream out(&logFile);

    QString timestamp = QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss.zzz");
    QString level;

    switch (type) {
    case QtDebugMsg:    level = "DEBUG"; break;
    case QtInfoMsg:     level = "INFO"; break;
    case QtWarningMsg: level = "WARNING"; break;
    case QtCriticalMsg:level = "CRITICAL"; break;
    case QtFatalMsg:   level = "FATAL"; break;
    }

    QString logEntry = QString("[%1] [%2] %3 (%4:%5)\n")
                           .arg(timestamp)
                           .arg(level)
                           .arg(msg)
                           .arg(context.file)
                           .arg(context.line);

    out << logEntry;
    out.flush();

    // fprintf(stderr, "%s", logEntry.toLocal8Bit().constData());
    // 调用默认处理函数（输出到控制台）
    if (defaultHandler) {
        defaultHandler(type, context, msg);
    }

    if (type == QtFatalMsg) abort();
}
