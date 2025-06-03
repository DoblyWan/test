#ifndef PYTHONWORKER_H
#define PYTHONWORKER_H

#include <Python.h>
#include <QThread>
#include <windows.h> // Windows控制台API
#include <QDir>
#include <QDebug>
#include <QProcess>

class PythonWorker : public QThread
{
    Q_OBJECT
public:
    explicit PythonWorker(QObject *parent = nullptr);
    void setScriptPath(const QString &path);

signals:
    void outputReceived(const QString &text);
    void scriptFinished();
    void errorOccurred(const QString &message);

protected:
    void run() override;

private:
    QString m_scriptPath;

    // 获取 Python 文件所在目录
    QString pythonFileDir;

    // 重定向python输出到控制台
    void redirectPythonOutputToConsole();
};

#endif // PYTHONWORKER_H
