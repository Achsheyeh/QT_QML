#include <QGridLayout>
#include <QLabel>
#include <QLineEdit>
#include <QTextEdit>

#include "RvwGrdExc.h"

RvwGrdExc::RvwGrdExc(QWidget *parent)
    : QWidget(parent)
{
    QGridLayout *grd = new QGridLayout(this);
    grd->setVerticalSpacing(10);
    grd->setHorizontalSpacing(5);

    QLabel *title = new QLabel("Title:", this);
    grd->addWidget(title, 0, 0, 1, 1);
    title->setAlignment(Qt::AlignRight| Qt::AlignVCenter);

    QLineEdit *led1 = new QLineEdit(this);
    grd->addWidget(led1, 0, 1, 1, 1);

    QLabel *author = new QLabel("Author", this);
    grd->addWidget(author,1, 0, 1, 1);
    author->setAlignment(Qt::AlignRight | Qt::AlignVCenter);

    QLineEdit *led2 = new QLineEdit(this);
    grd->addWidget(led2, 1, 1, 1, 1);

    QLabel *rvw = new QLabel("Review", this);
    grd->addWidget(rvw, 2, 0, 1, 1);
    rvw->setAlignment(Qt::AlignRight | Qt::AlignVCenter);

    QTextEdit *td = new QTextEdit(this);
    grd->addWidget(td, 2, 1, 1, 1);

    setLayout(grd);
}

RvwGrdExc::~RvwGrdExc()
{
}
