#include "printhandler.h"
#include <QPrinter>
#include <QPrintDialog>
#include <QDebug>

PrintHandler::PrintHandler(QWebEngineView *view, QObject *parent)
    : QObject{parent}, m_view(view)
{}

void PrintHandler::print()
{
    if (!m_view || !m_view->page()) {
        qWarning() << "PrintHandler: Invalid view or page";
        return;
    }

    QPrinter printer;
    QPrintDialog dialog(&printer, m_view);

    if (dialog.exec() == QDialog::Accepted) {
        m_view->page()->print(&printer, [](bool success) {
            qDebug() << "Print result:" << (success ? "Success" : "Failed");
        });
    }
}
