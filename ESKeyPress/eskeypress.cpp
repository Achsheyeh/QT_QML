#include <QApplication>
#include <QKeyEvent>
#include "eskeypress.h"

ESKeyPress::ESKeyPress(QWidget *parent)
    : QWidget(parent)
{

}

void ESKeyPress::keyPressEvent(QKeyEvent *event) {
    if (event->key() == Qt::Key_Escape ){
        qApp->quit();
    }
}
ESKeyPress::~ESKeyPress()
{
}

