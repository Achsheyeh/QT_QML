//#include <QApplication>
#include <QPainter>
//#include <QPainterPath>
#include "trnsprntrect.h"


TrnsprntRect::TrnsprntRect(QWidget *parent)
    : QWidget(parent)
{
}

TrnsprntRect::~TrnsprntRect()
{
}

void TrnsprntRect::paintEvent(QPaintEvent *e){
    Q_UNUSED(e);
    doPainting();
}

void TrnsprntRect::doPainting(){
    QPainter painter(this);

    for (int i=1; i<=11; i++) {
        painter.setOpacity(i*0.1);
        painter.fillRect(50*i, 20, 40, 40, Qt::darkYellow);

    }
}

