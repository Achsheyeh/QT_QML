#include "QMoveEvent"
#include "esmv.h"

ESMv::ESMv(QWidget *parent)
    : QWidget(parent)
{

}

void ESMv::moveEvent(QMoveEvent *event)
{
    int x = event->pos().x();
    int y = event->pos().y();

    QString text = QString::number(x)+","+QString::number(y);
    setWindowTitle(text);
}
ESMv::~ESMv()
{
}

