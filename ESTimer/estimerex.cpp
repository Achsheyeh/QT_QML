#include <QHBoxLayout>
#include <QTime>
#include "estimerex.h"

ESTimerEx::ESTimerEx(QWidget *parent)
    : QWidget(parent)
{
    QHBoxLayout *hbox = new QHBoxLayout(this);
    hbox->setSpacing(5);

    label = new QLabel("", this);
    hbox->addWidget(label, 0, Qt::AlignRight|Qt::AlignBottom);

    QTime qtime = QTime::currentTime();
    QString stime = qtime.toString();
    label->setText(stime);

    startTimer(1000);
}

void ESTimerEx::timerEvent(QTimerEvent *e) {
    Q_UNUSED(e);
    QTime qtime = QTime::currentTime();
    QString stime = qtime.toString();
    label->setText(stime);
}
ESTimerEx::~ESTimerEx()
{
}
