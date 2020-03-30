#include "donutshape.h"

#include <QPainter>

DonutShape::DonutShape(QWidget *parent)
    : QWidget(parent)
{
}
void DonutShape::paintEvent(QPaintEvent *event) {
    Q_UNUSED(event);
    doPainting();
}
DonutShape::~DonutShape()
{
}

void DonutShape::doPainting(){
    QPainter painter(this);

    painter.setPen(QPen(QBrush("#535353"), 0.5));
    painter.setRenderHint((QPainter::Antialiasing));
    int h = height();
    int w = width();

    painter.translate(QPoint(w/2, h/2));
    for (qreal rot= 0; rot< 360.0; rot+= 5.0) {
        painter.drawEllipse(-125, -40, 250, 80);
        painter.rotate(5.0);
    }
}
