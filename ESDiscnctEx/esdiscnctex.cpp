#include <QTextStream>
#include <QCheckBox>
#include <QHBoxLayout>

#include "esdiscnctex.h"

ESDiscnctEx::ESDiscnctEx(QWidget *parent)
    : QWidget(parent)
{
    QHBoxLayout *hbox = new QHBoxLayout(this);
    hbox->setSpacing(5);

    clckBtn = new QPushButton("Click Me", this);
    hbox->addWidget(clckBtn, 0, Qt::AlignLeft | Qt::AlignTop);

    QCheckBox *cb = new QCheckBox("Connect", this);
    cb->setCheckState(Qt::Checked);
    hbox->addWidget(cb, 0, Qt::AlignLeft| Qt::AlignTop);

    connect(clckBtn, &QPushButton::clicked, this, &ESDiscnctEx::onClick);
    connect(cb, &QCheckBox::stateChanged, this, &ESDiscnctEx::onCheck);

}
void ESDiscnctEx::onClick(){
    QTextStream out(stdout);
    out<< "Button Clicked" << endl;
}

void ESDiscnctEx::onCheck(int state){
    if (state == Qt::Checked) {
        connect(clckBtn, &QPushButton::clicked, this, &ESDiscnctEx::onClick);
    } else {
         disconnect(clckBtn, &QPushButton::clicked, this, &ESDiscnctEx::onClick);
    }
}

ESDiscnctEx::~ESDiscnctEx()
{
}

