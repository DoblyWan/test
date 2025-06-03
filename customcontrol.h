#ifndef CUSTOMCONTROL_H
#define CUSTOMCONTROL_H

#include <QWidget>
#include <QPainter>

class CustomControl : public QWidget
{
    Q_OBJECT
public:
    explicit CustomControl(QWidget *parent = nullptr);

private:
    void paintBorder(QWidget *widget);

protected:
    void paintEvent(QPaintEvent *event) override;

signals:
};

#endif // CUSTOMCONTROL_H
