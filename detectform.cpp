#include "detectform.h"
#include "ui_detectform.h"
#include <QPainterPath>
#include <QDebug>

detectForm::detectForm(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::detectForm)
{
    ui->setupUi(this);
}

detectForm::~detectForm()
{
    delete ui;
}

void detectForm::paintEvent(QPaintEvent *event)
{
    paintBorder(ui->widget);
    paintBorder(ui->widget_3);
}

void detectForm::paintBorder(QWidget *widget)
{
    QPoint topLeftPoint = widget->pos();
    int x = topLeftPoint.x(); // 控件左上角的 x 坐标
    int y = topLeftPoint.y(); // 控件左上角的 y 坐标
    int width = ui->widget->width();
    int height = ui->widget->height();

    int borderWidth = 4;
    int radius = 40;
    int gap = 10;


    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing);
    // 绘制边框
    QPen borderPen(QColor(38,190,217), borderWidth);        // 边框颜色和粗细
    painter.setPen(borderPen);

    // 笔刷
    QBrush brush(QColor(24,48,60), Qt::SolidPattern);
    painter.setBrush(brush);

    QPainterPath path;

    path.moveTo(x + gap, y);
    path.lineTo(x + gap, y + height);
    path.lineTo(x + width - gap, y + height);
    path.lineTo(x + width - gap, y);

    // 顶部右侧圆弧
    QRect rect1(x + width - gap - radius, y - radius/2, radius, radius);
    path.arcTo(rect1, 0.0f, 90.0f);
    path.lineTo(x + width - gap - 2*radius, y - radius/2);

    path.lineTo(x + width - gap - 2.5*radius, y - 5);
    path.lineTo(x + gap + 2.5*radius, y - 5);

    path.lineTo(x + gap + 2*radius, y - radius/2);
    QRect rect4(x + gap, y - radius/2, radius, radius);
    path.arcTo(rect4, 90.0f, 90.0f);

    painter.fillPath(path, QColor(24,48,60));
    //painter.drawPath(path);

    // 绘制边框
    // 左侧边框
    painter.drawLine(x + gap - borderWidth / 2, y, x + gap - borderWidth / 2, y + 50);
    painter.drawLine(x + gap - borderWidth / 2, y + 70, x + gap - borderWidth / 2, y + 120);
    painter.drawLine(x + gap - borderWidth / 2, y + 150, x + gap - borderWidth / 2, y + 200);
    painter.drawLine(x + gap - borderWidth / 2, y + 220, x + gap - borderWidth / 2, y + 295);

    QRect rect2(x + gap - borderWidth / 2, y - radius/2, radius, radius);
    painter.drawArc(rect2, 180*16, -90*16);


    // 右侧边框
    painter.drawLine(x + width - gap + borderWidth / 2, y, x + width - gap + borderWidth / 2, y + 50);
    painter.drawLine(x + width - gap + borderWidth / 2, y + 70, x + width - gap + borderWidth / 2, y + 120);
    painter.drawLine(x + width - gap + borderWidth / 2, y + 150, x + width - gap + borderWidth / 2, y + 200);
    painter.drawLine(x + width - gap + borderWidth / 2, y + 220, x + width - gap + borderWidth / 2, y + 295);

    QRect rect3(x + width - gap - radius + borderWidth / 2, y - radius/2, radius, radius);
    painter.drawArc(rect3, 0*16, 90*16);


    // 顶部边框
    painter.drawLine(x + gap + radius/2 - borderWidth / 2, y - radius/2, x + gap + radius/2 + radius*1.5 , y - radius/2);
    painter.drawLine(x + gap + radius/2 + radius*1.5 + borderWidth *  3 / 4, y - radius/2, x + gap + radius/2 + radius*2, y - 5);

    painter.drawLine(x + gap + radius/2 + radius*2 + borderWidth / 2, y - 5, x + gap + radius*3.5, y - 5);
    painter.drawLine(x + gap + radius*3.5 + 15, y - 5, x + gap + radius*3.5 + 60, y - 5);

    painter.drawLine(x + width - gap - radius*3.5 - 15, y - 5, x + width - gap - radius*3.5 - 60, y - 5);
    painter.drawLine(x + width - gap - radius/2 - radius*2 - borderWidth / 2 , y - 5, x + width - gap - radius*3.5, y - 5);

    painter.drawLine(x + width - gap - radius/2 - radius*1.5 - borderWidth *  3 / 4, y - radius/2, x + width - gap - radius/2 - radius*2, y - 5);
    painter.drawLine(x + width - gap - radius/2 + borderWidth / 2, y - radius/2, x + width - gap - radius/2 - radius*1.5, y - radius/2);

}
