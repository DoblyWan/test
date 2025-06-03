#ifndef DETECTFORM_H
#define DETECTFORM_H

#include <QWidget>
#include <QPainter>

namespace Ui {
class detectForm;
}

class detectForm : public QWidget
{
    Q_OBJECT

public:
    explicit detectForm(QWidget *parent = nullptr);
    ~detectForm();

private:
    Ui::detectForm *ui;
    void paintEvent(QPaintEvent *event) override;
    void paintBorder(QWidget *widget);
};

#endif // DETECTFORM_H
