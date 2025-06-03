#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "pythonworker.h"

#include <QMainWindow>
#include <QPropertyAnimation>
#include <QDialog>
#include <QImage>

// 文件操作
#include <QDir>
#include <QDesktopServices>

#include <QApplication>
#include <QFile>
#include <QTextStream>
#include <QMutex>
#include <QDateTime>
#include <QDebug>
#include <QFileSystemWatcher>
#include <QDesktopServices>
#include <QFont>

// 数据库
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlTableModel>
#include <QSqlError>
#include <QSortFilterProxyModel>

#include <QtCore/qstring.h>

#include"customcontrol.h"
#include "./include/dialog.h"

#include "control.h"

// web界面
#include <QWebEngineView>

#include "ffmpeg.h"
#pragma execution_character_set("utf-8")


QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    QString username, password,ipaddress;

    QString urls; //添加四个rtsp地址
    QString urls1;
    QString urls2;
    QString urls3;

    FFmpegWidget* rtsp; //添加四个rtsp
    FFmpegWidget* rtsp1;
    FFmpegWidget* rtsp2;
    FFmpegWidget* rtsp3;
    FFmpegWidget* rtsp4;
    FFmpegWidget* rtsp5;
    //void fadeOutWidget(QWidget *widget, std::function<void()> callback = nullptr);

private:
    Ui::MainWindow *ui;
    int tabCount;             // 标签页计数器，用于标题命名
    // 自定义子窗口
    std::unique_ptr<Dialog> configWindow;  // unique指针存放信息登记窗口资源

    // 数据库
    QSqlDatabase db;  // sqlite数据库
    std::unique_ptr<QSqlQueryModel> model;
    std::unique_ptr<QSortFilterProxyModel> proxyModel;  // 代理模型

    // 视频文件信息
    QString videoFolder;
    QString videoName;

    // 日志
    QFileSystemWatcher *fileWatcher;
    QString LOG_DIR = "../../../logs";
    QString today = QDateTime::currentDateTime().toString("yyyy-MM-dd");
    QString logFilePath = QString("%1/app_%2.log").arg(LOG_DIR).arg(today);
    QMutex logMutex;

    // 路径
    QString videoPath;
    QString databasePath;
    QString logPath;

    // python文件
    PythonWorker *pythonworker;


    void initControl();
    void initConnect();
    bool initDatabase();
    bool turnOnCamera(QString username, QString password, QString ipaddress, QGridLayout *gridLayout, FFmpegWidget* rtsp);

    QString renderTemplate(const QString& templatePath, const QVariantMap& data); // 报告模板

    bool openRenderedHtmlInBrowser(const QString& htmlContent, const QString& title = "Report");


    void resizeEvent(QResizeEvent *event) override;

    // 控制控件
    Control *control;

private slots:
    //void closeTab(int index); // 关闭标签页
    void on_pushButton_datainput_clicked();
    void on_pushButton_datasearch_clicked();
    void on_pushButton_localvideo_clicked();
    void on_pushButton_location_2_clicked();
    void on_pushButton_transfor_clicked();

    // 加载日志
    void loadLogFile();

    void on_pushButton_log_clicked();

    void on_pushButton_setting_clicked();

    void on_pushButton_front_clicked();

    void on_pushButton_exit_clicked();

    void on_pushButton_behind_clicked();

    void on_pushButton_transforToMono_clicked();

    void on_pushButton_transfor_2_clicked();

    void on_pushButton_clicked();

    void on_pushButton_transforToMono_3_clicked();

    void on_pushButton_location_clicked();

    void on_Open_BT_2_clicked();

    void on_pushButton_utrans_clicked();

    void on_Open_BT_3_clicked();

    void on_Open_BT_9_clicked();

    void on_Open_BT_8_clicked();

    void on_Open_BT_4_clicked();

    void on_pushButton_upload_clicked();

public slots:
    void handleDataModified(const std::unordered_map<std::string, std::string>& modifiedData);


};
#endif // MAINWINDOW_H
