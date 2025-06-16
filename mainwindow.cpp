#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QVBoxLayout>
#include "./include/dialog.h"
#include <QMessageBox>
#include  <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , configWindow(std::make_unique<Dialog>(this))
    , db(QSqlDatabase::addDatabase("QSQLITE"))
    , model(new QSqlQueryModel)
    , proxyModel(new QSortFilterProxyModel(this))
    , videoFolder("../../../video")
    , rtsp(new FFmpegWidget(this))
    , ui(new Ui::MainWindow)
{
    qDebug() << "Application started.";

    ui->setupUi(this);

    // 合并并清理路径
    videoPath = QDir::cleanPath(QCoreApplication::applicationDirPath() + QDir::separator() + "../../../video");
    databasePath = QDir::cleanPath(QCoreApplication::applicationDirPath() + QDir::separator() + "../../../database");
    logPath = QDir::cleanPath(QCoreApplication::applicationDirPath() + QDir::separator() + logFilePath);


    // 控制控件
    control = new Control();
    ui->gridLayout_20->addWidget(control);

    /*   更新UI的前后端情况  */
    ui->gaugeCompassPan->raise();
    ui->gaugePlane->raise();

    // 初始化
    initControl();
    initConnect();
    initDatabase();

    // this->setLayout(ui->gridLayout_3);

    configWindow->setWindowFlags(Qt::Window); // 避免继承父窗口样式

    qDebug() << QDir::cleanPath(QCoreApplication::applicationDirPath() + QDir::separator() + logFilePath);

    // pythonworker = new PythonWorker(this);
    // pythonworker->setScriptPath("../../../ardusub_control/connect_main.py");
    // // pythonworker->setScriptPath("./release/connect_main.py");
    // pythonworker->start();



    // qDebug() << QCoreApplication::applicationDirPath();

    // 注册STL容器类型（必须在连接信号槽前完成）
    qRegisterMetaType<std::unordered_map<QString, QString>>("std::unordered_map<QString,QString>");
    qRegisterMetaType<std::unordered_map<QString, QString>>("std::unordered_map<QString,QString>&");

}

MainWindow::~MainWindow()
{
    rtsp1->close();
    rtsp2->close();
    rtsp3->close();
    rtsp4->close();
    rtsp5->close();

    pythonworker->terminate();
    pythonworker->wait();

    qDebug() << "Application ended.";
    qInfo() << "--------------------------------------------------";
    delete ui;
}


// 初始化控件
void MainWindow::initControl()
{
    ui->stackedWidget->setCurrentIndex(0);

    ui->widget_14->setVisible(false);

    // rtsp 初始化
    rtsp1 = new FFmpegWidget(this);
    rtsp2 = new FFmpegWidget(this);
    rtsp3 = new FFmpegWidget(this);
    rtsp4 = new FFmpegWidget(this);
    rtsp5 = new FFmpegWidget(this);

    // 设置标签显示图片

    // 构建pixmap
    QPixmap pixmap(":/images/icon.jpg");

    // 设置pixmap比例
    int labelW = int(ui->label_main->width() * 0.8);
    int labelH = int(pixmap.height() * labelW / pixmap.width());

    qDebug() << ui->label_main->width() << ui->label_main->height();
    QSize size(labelW, labelH);  // 宽为label的宽，高通过比例计算，保持图片原比例
    pixmap = pixmap.scaled(size);

    // 将pixmap设置到label
    ui->label_main->setPixmap(pixmap);


    /* ---------- logViwer初始化 ------------ */
    ui->logViewer->setReadOnly(true);
    ui->logViewer->setWordWrapMode(QTextOption::NoWrap); // 禁用自动换行

    // QPushButton *btnRefresh = new QPushButton("刷新日志", this);
    // connect(btnRefresh, &QPushButton::clicked, this, &LogViewerWindow::loadLogFile);

    // QVBoxLayout *layout = new QVBoxLayout;
    // layout->addWidget(ui->logViewer);
    // //layout->addWidget(btnRefresh);

    // QWidget *centralWidget = new QWidget(this);
    // centralWidget->setLayout(layout);
    // setCentralWidget(centralWidget);

}

// 初始化连接
void MainWindow::initConnect()
{
    connect(configWindow.get(), SIGNAL(dataModified(const std::unordered_map<std::string, std::string>&)), this, SLOT(handleDataModified(const std::unordered_map<std::string, std::string>&)));  // 信息登记窗口信号接收-槽函数调用
    // connect(control, SIGNAL(stateTransfer(const std::unordered_map<QString, QString>&)), this, SLOT(handleStateTransfer(const std::unordered_map<QString,QString>&))); // 状态数据信号接收-槽函数调用
    connect(control, &Control::stateTransfer, this, &MainWindow::handleStateTransfer);

    fileWatcher = new QFileSystemWatcher(this);
    fileWatcher->addPath(logPath);
    // connect(fileWatcher, SIGNAL(fileChanged()), ui->tableView, SLOT(loadLogFile()));

    turnOnCamera("","","192.168.2.65",ui->gridLayout_31, rtsp1);
    turnOnCamera("","","192.168.2.66",ui->gridLayout_37, rtsp2);
    turnOnCamera("","","192.168.2.107:8554/stream",ui->gridLayout_32, rtsp3);
    turnOnCamera("","","192.168.2.67",ui->gridLayout_42, rtsp4);
    turnOnCamera("","","192.168.2.68",ui->gridLayout_43, rtsp5);


}

// 初始化数据库
bool MainWindow::initDatabase()
{
    // 设置表格行高自适应
    // ui->tableView->verticalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);  // 自动设置行高
    ui->tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);  // 自动设置行高
    db.setDatabaseName(databasePath + "/pipe_database.db");
    if(db.open() == true) {
        qInfo() << "数据库成功连接!";
        //std::cout << "数据库成功连接" << std::endl;
        //MainWindow::log(LogLevel::Debug, "数据库数据成功连接");
        return true;
    } else {
        QMessageBox::warning(this, "警告", "数据库连接失败！请检查数据库服务并重启系统！");
        qWarning() << "数据库连接失败！请检查数据库服务并重启系统！";
        return false;
    }
}






// 可见性动画
void fadeOutWidget(QWidget *widget, std::function<void()> callback = nullptr) {
    QPropertyAnimation *animation = new QPropertyAnimation(widget, "windowOpacity");
    animation->setDuration(500);
    animation->setStartValue(1);
    animation->setEndValue(0);
    animation->start(QAbstractAnimation::DeleteWhenStopped);

    // 动画结束时触发回调
    QObject::connect(animation, &QPropertyAnimation::finished, [widget, callback]() {
        widget->hide();
        if (callback) {
            callback(); // 执行自定义后续代码
        }
    });
}



void MainWindow::on_pushButton_datainput_clicked()
{
    configWindow->show();
}


void MainWindow::on_pushButton_datasearch_clicked()
{
    if(!db.isOpen()) {  // 数据库未连接
        QMessageBox::warning(this, "警告", "系统数据库未连接!");
    } else {  // 查询并显示
        QString str = QString("select * from tasks");
        model->setQuery(str);  //执行查询操作，并将结果集保存到 model 对象中
        // ui->tableView->setModel(model.get());  // 显示查询结果
        proxyModel->setSourceModel(model.get()); // 设置源模型为原始的 QSqlQueryModel 对象
        ui->tableView->setModel(proxyModel.get());  // 设置代理模型为表格视图的模型

        ui->tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);  // 自动设置行高

        ui->stackedWidget->setCurrentIndex(1);
        ui->label_title->setText("检测信息查询");
    }
}


void MainWindow::on_pushButton_localvideo_clicked()
{
    // 使用QDesktopServices打开指定路径的文件夹
    if (QDir(this->videoFolder).exists()) {
        QDesktopServices::openUrl(QUrl::fromLocalFile(this->videoFolder));
        qInfo() << "视频文件成功打开!";
    } else {
        QMessageBox::warning(this, "文件夹不存在", "指定的文件夹路径不存在！");
    }
}



void MainWindow::on_pushButton_location_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(9);
    ui->label_title->setText("状态显示");
    // if(!detectform) {
    //     return;
    // }
    // detectform = new detectForm();  // 重新分配资源
    // ui->tabWidget->setVisible(true);
    //  //ui->tabWidget->addTab(detectform, "状态显示");
    // detectform->setStyleSheet("QWidget#detectform { background-color: rgb(14,25,31) !important;}"); // 显式设置样式
    // addNewTab("状态显示", detectform);
}


// 转换摄像头
void MainWindow::on_pushButton_transfor_clicked()
{

}


void MainWindow::loadLogFile()
{
    QMutexLocker locker(&logMutex); // 使用全局锁确保线程安全

    QFile file(logFilePath);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        ui->logViewer->appendPlainText("无法打开日志文件！");
        return;
    }

    QTextStream in(&file);
    ui->logViewer->setPlainText(in.readAll());
    file.close();

    // 自动滚动到底部
    QTextCursor cursor = ui->logViewer->textCursor();
    cursor.movePosition(QTextCursor::End);
    ui->logViewer->setTextCursor(cursor);
}


void MainWindow::handleDataModified(const std::unordered_map<std::string, std::string> &modifiedData)
{
    // sysStat.isInput = true;
    // 更新标签显示数据
    qInfo() << "信息录入完成!";

    ui->label_dectPlace_input->setText(QString::fromStdString(modifiedData.at("place")));
    ui->label_dectTye_input->setText(QString::fromStdString(modifiedData.at("pipeType")));
    ui->label_pipeType_input->setText(QString::fromStdString(modifiedData.at("pipeMaterial")));
    ui->label_pipeD_input->setText(QString::fromStdString(modifiedData.at("pipeSize")));
    ui->label_dectDirect_input->setText(QString::fromStdString(modifiedData.at("direction")));

    ui->label_dectNum_input->setText(QString::fromStdString(modifiedData.at("num")));
    ui->label_dectStart_input->setText(QString::fromStdString(modifiedData.at("startNum")));
    ui->label_dectEnd_input->setText(QString::fromStdString(modifiedData.at("endNum")));
    ui->label_pipeUnit_input->setText(QString::fromStdString(modifiedData.at("unit")));
    ui->label_dectPeople_input->setText(QString::fromStdString(modifiedData.at("person")));

    // 更新数据库数据
    // 如果任务编号没有改变，则update更新; 否则insert一条新数据
    //updateDatabase(modifiedData, "tasks");

    // 发送信号：日期+任务编号
    // 更新视频名
    // this->videoName = QString::fromStdString(modifiedData.at("startNum") + "-" + modifiedData.at("endNum"));
    // emit fileName(this->videoName.toStdString());
}

void MainWindow::handleStateTransfer(const std::unordered_map<QString, QString> &robotData)
{
    qInfo() << "------- data received -------";

    ui->Depth_show->setText(robotData.at("depth"));
    ui->Pitch_show->setText(robotData.at("pitch"));
    ui->Yaw_show->setText(robotData.at("yaw"));
    ui->Roll_show->setText(robotData.at("roll"));
    ui->Temp_show->setText(robotData.at("temp"));
    ui->rov_status->setText(robotData.at("status"));
    ui->gaugeCompassPan->setValue((int)robotData.at("compass").toDouble());
    ui->gaugePlane->setRollValue((int)robotData.at("rollValue").toDouble());
    ui->gaugePlane->setDegValue((int)robotData.at("degValue").toDouble());


}


void MainWindow::on_pushButton_log_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
    ui->label_title->setText("系统日志");
    loadLogFile();
}


// 设置界面
void MainWindow::on_pushButton_setting_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
    ui->label_title->setText("系统设置");
}


void MainWindow::on_pushButton_front_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
    ui->label_title->setText("A面");



}


// 退出程序
void MainWindow::on_pushButton_exit_clicked()
{
    close();
}


void MainWindow::on_pushButton_behind_clicked()
{
    ui->stackedWidget->setCurrentIndex(6);
    ui->label_title->setText("B面");
}


void MainWindow::on_pushButton_transforToMono_clicked()
{
    // fadeOutWidget(ui->widget_13, [this]{
    //     ui->widget_10->setVisible(true);
    // });
}


void MainWindow::on_pushButton_transfor_2_clicked()
{
    fadeOutWidget(ui->widget_10, [this](){
        ui->widget_10->setVisible(false);
        ui->widget_14->setVisible(true);
    });
}


void MainWindow::on_pushButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
    ui->label_title->setText("坝面扫描式智能检测机器人");
}


void MainWindow::on_pushButton_transforToMono_3_clicked()
{
    fadeOutWidget(ui->widget_14, [this](){
        ui->widget_14->setVisible(false);
        ui->widget_10->setVisible(true);
    });
}


void MainWindow::on_pushButton_location_clicked()
{
    // ui->stackedWidget->setCurrentIndex(7);
    // QMessageBox::warning(this, "警告", "生成报告失败！请检查系统设置并重启系统！");


    QVariantMap data;
    data["report_title"] = "系统监控报告";
    data["heading"] = "2023年第三季度性能分析";
    data["timestamp"] = QDateTime::currentDateTime().toString();
    data["cpu_usage"] = 42.5;  // 自动转换为字符串

    QString result = renderTemplate("../../../report/test.html", data);


    // 1. 获取目录路径
    QString tempDir = "../../../report";

    // 2. 创建唯一文件名
    QString fileName = QString("report_%1.html")
                           .arg(QDateTime::currentDateTime().toString("yyyyMMdd_hhmmsszzz"));
    QString filePath = tempDir + "/" + fileName;

    // 3. 写入文件
    QFile file(filePath);
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text)) {
        QMessageBox::critical(nullptr, "文件错误",
                              QString("无法创建临时文件:\n%1\n错误: %2")
                                  .arg(filePath, file.errorString()));
    }

    QTextStream out(&file);
    out.setCodec("UTF-8");  // 确保中文支持
    out << result;
    file.close();

    // 4. 设置文件权限（跨平台兼容）
    file.setPermissions(QFile::ReadOwner | QFile::WriteOwner | QFile::ReadUser |
                        QFile::ReadGroup | QFile::ReadOther);

    // 5. 使用默认浏览器打开
    // QString path = QFileInfo(QDir::currentPath(), filePath).absoluteFilePath());
    // qDebug() << QFileInfo(QDir::currentPath(), filePath).absoluteFilePath();
    // QUrl url = QUrl::fromLocalFile(QFileInfo(QDir::currentPath(), filePath).absoluteFilePath());
    QUrl url = QUrl::fromLocalFile(QFileInfo(QDir::currentPath(), "../../../report/report.html").absoluteFilePath());

    // QDesktopServices::openUrl(QUrl(url));

    // 创建 Web 视图
    QWebEngineView *webView = new QWebEngineView(ui->report);


    // 加载网页
    webView->load(QUrl(url));

    // // 创建开发者工具窗口
    // QWebEngineView *devToolsView = new QWebEngineView();

    // // 关联到主视图
    // webView->page()->setDevToolsPage(devToolsView->page());

    // // 显示开发者工具
    // devToolsView->show();

    // 设置窗口大小并显示
    webView->resize(1625, 950);
    // webView->show();
    ui->stackedWidget->setCurrentIndex(8);
    ui->label_title->setText("报告生成");
}





















/* ---------- 测试区域 -------------- */


bool MainWindow::turnOnCamera(QString username, QString password, QString ipaddress, QGridLayout *gridLayout, FFmpegWidget* rtsp)
{
    QString urls = "rtsp://";

    // 如果用户名和密码不为空，才添加到 URL 中
    if (!username.isEmpty() && !password.isEmpty()) {
        urls += username + ":" + password + "@";
    }
    urls += ipaddress;

    qDebug() << "RTSP URL is:" << urls;

    gridLayout->addWidget(rtsp);

    QString url = urls.trimmed();
    rtsp->setUrl(url);
    rtsp->open();

    // if(rtsp->success){
    //     return true;
    // } else {
    //     QMessageBox::warning(this, "错误", "摄像头连接失败！请检查摄像头服务并重启系统！");
    //     qWarning() << "摄像头连接失败！请检查摄像头服务并重启系统！";
    //     return false;
    // }

    return true;

}


void MainWindow::on_Open_BT_2_clicked()
{
    QString urls = "rtsp://";


    username = "";
    password = "";
    ipaddress = ui->IP_Edit_2->text();

    // 如果用户名和密码不为空，才添加到 URL 中
    if (!username.isEmpty() && !password.isEmpty()) {
        urls += username + ":" + password + "@";
    }
    urls += ipaddress;

    qDebug() << "RTSP URL is:" << urls;
    // FFmpegWidget* rtsp = new FFmpegWidget(this);

    ui->gridLayout_27->addWidget(rtsp);

    if (ui->Open_BT_2->text() == "打开") {
        ui->Open_BT_2->setText("关闭");
        QString url = urls.trimmed();
        // rtsp = new FFmpegWidget(this);
        //ui->gridLayout_2->addWidget(rtsp);
        rtsp->setUrl(url);
        rtsp->open();
    } else {
        ui->Open_BT_2->setText("打开");
        rtsp->close();
    }
}

void MainWindow::on_Open_BT_3_clicked()
{
    QString urls = "rtsp://";


    username = "";
    password = "";
    ipaddress = ui->IP_Edit_3->text();

    // 如果用户名和密码不为空，才添加到 URL 中
    if (!username.isEmpty() && !password.isEmpty()) {
        urls += username + ":" + password + "@";
    }
    urls += ipaddress;

    qDebug() << "RTSP URL is:" << urls;
    // FFmpegWidget* rtsp = new FFmpegWidget(this);

    ui->gridLayout_28->addWidget(rtsp1);

    if (ui->Open_BT_3->text() == "打开") {
        ui->Open_BT_3->setText("关闭");
        QString url = urls.trimmed();
        // rtsp = new FFmpegWidget(this);
        //ui->gridLayout_2->addWidget(rtsp);
        rtsp1->setUrl(url);
        rtsp1->open();
    } else {
        ui->Open_BT_3->setText("打开");
        rtsp1->close();
    }
}


// 报告
QString MainWindow::renderTemplate(const QString& templatePath, const QVariantMap& data) {
    QFile tpl(templatePath);
    tpl.open(QFile::ReadOnly);
    QString html = QString::fromUtf8(tpl.readAll());

    for (auto it = data.constBegin(); it != data.constEnd(); ++it) {
        html.replace("{{" + it.key() + "}}", it.value().toString());
    }
    return html;
}

void MainWindow::resizeEvent(QResizeEvent *event)
{


    // // 控件按钮样式
    // ui->frame_3->setStyleSheet(
    //     "QLabel {"+
    //     QString("font-size: %1").arg(14 * this->width() / 1920) + "px;"
    //     +"}"
    //     );


    // // 日志样式表
    // ui->logViewer->setStyleSheet(
    //     QString("font-size: %1").arg(ui->logViewer->font().pointSizeF() * 2 * this->width() / 1920) + "px;"
    //     );



    // // qDebug() << QString("font-size: %1").arg(14 * this->width() / 1920) + "px;";


    // QSize size = ui->pushButton_datainput->size();
    // int iconSize = 150 * 0.5; // 例如取最小边的50%
    // ui->pushButton_datainput->setIconSize(QSize(iconSize, iconSize));

    // QList<QPushButton*> frameButtons = ui->frame_3->findChildren<QPushButton*>();
    // for (QPushButton *btn : frameButtons) {
    //     btn->setIconSize(QSize(iconSize, iconSize));
    // }
}



void MainWindow::on_pushButton_utrans_clicked()
{
    QMessageBox::warning(this, "警告", "U盘打开失败！请检查U盘插入并重启系统！");
}


// 将HTML内容保存到临时文件并用浏览器打开
// bool MainWindow::openRenderedHtmlInBrowser(const QString& htmlContent, const QString& title = "Report") {
    // // 1. 获取临时目录路径
    // QString tempDir = QStandardPaths::writableLocation(QStandardPaths::TempLocation);
    // if (tempDir.isEmpty()) {
    //     QMessageBox::critical(nullptr, "错误", "无法获取临时目录路径");
    //     return false;
    // }

    // // 2. 创建唯一文件名
    // QString fileName = QString("%1_%2.html")
    //                        .arg(title)
    //                        .arg(QDateTime::currentDateTime().toString("yyyyMMdd_hhmmsszzz"));
    // QString filePath = tempDir + "/" + fileName;

    // // 3. 写入文件
    // QFile file(filePath);
    // if (!file.open(QIODevice::WriteOnly | QIODevice::Text)) {
    //     QMessageBox::critical(nullptr, "文件错误",
    //                           QString("无法创建临时文件:\n%1\n错误: %2")
    //                               .arg(filePath, file.errorString()));
    //     return false;
    // }

    // QTextStream out(&file);
    // out.setCodec("UTF-8");  // 确保中文支持
    // out << htmlContent;
    // file.close();

    // // 4. 设置文件权限（跨平台兼容）
    // file.setPermissions(QFile::ReadOwner | QFile::WriteOwner | QFile::ReadUser |
    //                     QFile::ReadGroup | QFile::ReadOther);

    // // 5. 使用默认浏览器打开
    // QUrl url = QUrl::fromLocalFile(filePath);

    // if (!QDesktopServices::openUrl(url)) {
    // // 备用方案：尝试直接启动浏览器
    // #if defined(Q_OS_WIN)
    //         QProcess::startDetached("cmd.exe", {"/c", "start", "", filePath});
    // #elif defined(Q_OS_MACOS)
    //         QProcess::startDetached("open", {filePath});
    // #elif defined(Q_OS_LINUX)
    //         QProcess::startDetached("xdg-open", {filePath});
    // #else
    //         QMessageBox::warning(nullptr, "打开失败",
    //                              "无法打开HTML文件，请手动访问:\n" + filePath);
    //         return false;
    // #endif
    // }

//     return true;
// }






void MainWindow::on_Open_BT_9_clicked()
{
    QString urls = "rtsp://";


    username = "";
    password = "";
    ipaddress = ui->IP_Edit_9->text();

    // 如果用户名和密码不为空，才添加到 URL 中
    if (!username.isEmpty() && !password.isEmpty()) {
        urls += username + ":" + password + "@";
    }
    urls += ipaddress;

    qDebug() << "RTSP URL is:" << urls;
    // FFmpegWidget* rtsp = new FFmpegWidget(this);

    ui->gridLayout_34->addWidget(rtsp2);

    if (ui->Open_BT_9->text() == "打开") {
        ui->Open_BT_9->setText("关闭");
        QString url = urls.trimmed();
        // rtsp = new FFmpegWidget(this);
        //ui->gridLayout_2->addWidget(rtsp);
        rtsp2->setUrl(url);
        rtsp2->open();
    } else {
        ui->Open_BT_9->setText("打开");
        rtsp2->close();
    }
}


void MainWindow::on_Open_BT_4_clicked()
{
    QString urls = "rtsp://";


    username = "";
    password = "";
    ipaddress = ui->IP_Edit_4->text();

    // 如果用户名和密码不为空，才添加到 URL 中
    if (!username.isEmpty() && !password.isEmpty()) {
        urls += username + ":" + password + "@";
    }
    urls += ipaddress;

    qDebug() << "RTSP URL is:" << urls;
    // FFmpegWidget* rtsp = new FFmpegWidget(this);

    ui->gridLayout_29->addWidget(rtsp4);

    if (ui->Open_BT_4->text() == "打开") {
        ui->Open_BT_4->setText("关闭");
        QString url = urls.trimmed();
        // rtsp = new FFmpegWidget(this);
        //ui->gridLayout_2->addWidget(rtsp);
        rtsp4->setUrl(url);
        rtsp4->open();
    } else {
        ui->Open_BT_4->setText("打开");
        rtsp4->close();
    }
}


void MainWindow::on_Open_BT_8_clicked()
{
    QString urls = "rtsp://";


    username = "";
    password = "";
    ipaddress = ui->IP_Edit_8->text();

    // 如果用户名和密码不为空，才添加到 URL 中
    if (!username.isEmpty() && !password.isEmpty()) {
        urls += username + ":" + password + "@";
    }
    urls += ipaddress;

    qDebug() << "RTSP URL is:" << urls;
    // FFmpegWidget* rtsp = new FFmpegWidget(this);

    ui->gridLayout_33->addWidget(rtsp3);

    if (ui->Open_BT_8->text() == "打开") {
        ui->Open_BT_8->setText("关闭");
        QString url = urls.trimmed();
        // rtsp = new FFmpegWidget(this);
        //ui->gridLayout_2->addWidget(rtsp);
        rtsp3->setUrl(url);
        rtsp3->open();
    } else {
        ui->Open_BT_8->setText("打开");
        rtsp3->close();
    }
}


void MainWindow::on_pushButton_upload_clicked()
{
    QMessageBox::warning(this, "错误", "云端打开失败！请检查云端服务并重启系统！");
}

