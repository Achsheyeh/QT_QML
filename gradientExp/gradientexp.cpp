#include "gradientexp.h"
#include <QPainter>

GradientExp::GradientExp(QWidget *parent)
    : QWidget(parent)
{
}

GradientExp::~GradientExp()
{
}

void GradientExp::paintEvent(QPaintEvent *e) {
  Q_UNUSED(e);
  doPainting();
}

void GradientExp::doPainting(){
    QPainter painter(this);

    QLinearGradient grad1(0, 20, 0, 110);

    grad1.setColorAt(0.1, Qt::black);
    grad1.setColorAt(0.25, Qt::green);
    grad1.setColorAt(0.5, Qt::yellow);
    grad1.setColorAt(0.75, Qt::red);
    grad1.setColorAt(0.9, Qt::black);

    painter.fillRect(20, 20, 300, 90, grad1);

    QLinearGradient grad2(0, 55, 250, 0);

    grad2.setColorAt(0.2, Qt::black);
    grad2.setColorAt(0.5, Qt::red);
    grad2.setColorAt(0.8, Qt::black);

    painter.fillRect(20, 140, 300, 100, grad2);

}
