#include "recorddialog.h"
#include "ui_recorddialog.h"

recorddialog::recorddialog(QWidget *parent,
                           FFmpegWidget *rtsp1,
                           FFmpegWidget *rtsp2,
                           FFmpegWidget *rtsp3,
                           FFmpegWidget *rtsp4,
                           FFmpegWidget *rtsp5)
    : QDialog(parent)
    , ui(new Ui::recorddialog)
{
    ui->setupUi(this);
    setWindowTitle("视频录制");


    record1 = new record(this, rtsp1, "/A1");
    record2 = new record(this, rtsp1, "/A2");
    record3 = new record(this, rtsp1, "/BC");
    record4 = new record(this, rtsp1, "/B1");
    record5 = new record(this, rtsp1, "/B2");


    // 添加录制界面
    ui->gridLayout->addWidget(record1);
    ui->gridLayout_2->addWidget(record2);
    ui->gridLayout_3->addWidget(record3);
    ui->gridLayout_4->addWidget(record4);
    ui->gridLayout_5->addWidget(record5);


    // 摄像头开关初始化
    ui->monocularCameraA1Switch->setChecked(rtsp1->isOpenSuccess);
    ui->monocularCameraA2Switch->setChecked(rtsp2->isOpenSuccess);
    ui->binocularCameraSwitch->setChecked(rtsp3->isOpenSuccess);
    ui->monocularCameraB1Switch->setChecked(rtsp4->isOpenSuccess);
    ui->monocularCameraB2Switch->setChecked(rtsp5->isOpenSuccess);

    ui->monocularCameraA1Switch->setEnabled(false);
    ui->monocularCameraA2Switch->setEnabled(false);
    ui->binocularCameraSwitch->setEnabled(false);
    ui->monocularCameraB1Switch->setEnabled(false);
    ui->monocularCameraB2Switch->setEnabled(false);

}

recorddialog::~recorddialog()
{
    delete ui;
}

void recorddialog::cameraControl(int i, bool open)
{
    if(i == 1){
        ui->monocularCameraA1Switch->setChecked(open);
        record1->getRecord()->setEnabled(open);
    } else if(i == 2){
        ui->monocularCameraA2Switch->setChecked(open);
        record2->getRecord()->setEnabled(open);
    } else if(i == 3){
        ui->binocularCameraSwitch->setChecked(open);
        record3->getRecord()->setEnabled(open);
    } else if(i == 4){
        ui->monocularCameraB1Switch->setChecked(open);
        record4->getRecord()->setEnabled(open);
    } else if(i == 5){
        ui->monocularCameraB2Switch->setChecked(open);
        record5->getRecord()->setEnabled(open);
    }
}


// 重写关闭方法
void recorddialog::closeEvent(QCloseEvent *event)
{
    // 忽略默认的关闭行为，我们不希望真的关闭（销毁）对话框
    event->ignore();

    // 隐藏对话框（界面不可见，但对象和状态都保留）
    this->hide();
}
