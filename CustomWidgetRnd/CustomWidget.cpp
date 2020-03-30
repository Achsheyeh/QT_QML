#include "CustomWidget.h"

CustomWidget::CustomWidget(QWidget *parent):
    QWidget(parent) {

}

void CustomWidget::paintEvent(QPaintEvent *event) {
    QPainter painter(this);
    static int color = 120;
    QRect r1 = rect().adjusted(10, 10, -10, -10);
    painter.setPen(QColor("blue"));
    painter.drawRect(r1);

    QRect r2(QPoint(0,0), QSize(40,40));
    if (m_lastPos.isNull()) {
        r2.moveCenter(r1.center());
    } else {
        r2.moveCenter(m_lastPos);
    }
    painter.fillRect(r2, QColor(color));
    color+=120;
    if (color > 50000)
        color = 120;
}
void CustomWidget::mousePressEvent(QMouseEvent *event)
{
    m_lastPos = event->pos();
    update();
}
void CustomWidget::mouseMoveEvent(QMouseEvent *event) {
    m_lastPos = event->pos();
    update();
}

