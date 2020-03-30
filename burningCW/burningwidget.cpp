#include <QVBoxLayout>
#include <QHBoxLayout>
#include "burningwidget.h"

BurningWidget::BurningWidget(QWidget *parent)
    : QWidget(parent)
{
   initUI();
}

BurningWidget::~BurningWidget()
{
}

void BurningWidget::initUI() {
    const int MAX_VALUE = 750;
    cur_width = 0;

    slider = new QSlider(Qt::Horizontal, this);
    slider->setMaximum(MAX_VALUE);
    slider->setGeometry(50, 50, 130, 30);
    connect (slider, &QSlider::valueChanged, this, &BurningWidget::valueChanged);

    QVBoxLayout *vbox = new QVBoxLayout(this);
    QHBoxLayout *hbox = new QHBoxLayout();

    vbox->addStretch(1);
    widget = new Widget(this);
    hbox->addWidget(widget, 0);
    vbox->addLayout(hbox);
   // vbox->addWidget(widget, 0);
    setLayout(vbox);

}

void BurningWidget::valueChanged(int val){
    cur_width = val;
    widget->repaint();
}

int BurningWidget::getCurrentWidth() {
    return cur_width;
}

