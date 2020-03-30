#include <QPushButton>
#include <QApplication>
#include <QHBoxLayout>
#include "ESClick.h"

ESClick::ESClick(QWidget *parent)
    : QWidget(parent)
{
    QHBoxLayout *hbox = new QHBoxLayout(this);
    hbox->setSpacing(5);

    QPushButton *qutBtn = new QPushButton("Quit", this);
    hbox->addWidget(qutBtn, 0, Qt::AlignLeft|Qt::AlignTop);

    connect(qutBtn, &QPushButton::clicked, qApp, &QApplication::quit);

}

ESClick::~ESClick()
{
}

