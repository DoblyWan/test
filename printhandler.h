#ifndef PRINTHANDLER_H
#define PRINTHANDLER_H

#include <QObject>
#include <QWebEngineView>


class PrintHandler : public QObject
{
    Q_OBJECT
public:
    explicit PrintHandler(QWebEngineView *view, QObject *parent = nullptr);

public slots:
    void print();

private:
    QWebEngineView *m_view;
};

#endif // PRINTHANDLER_H
