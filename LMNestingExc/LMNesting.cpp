#include <QVBoxLayout>
#include <QPushButton>
#include <QListWidget>
#include "LMNesting.h"


LMNesting :: LMNesting(QWidget* parent): QWidget(parent){
    QVBoxLayout *vbox = new QVBoxLayout();
    QHBoxLayout *hbox = new QHBoxLayout(this);
    QListWidget *lw = new QListWidget(this);

    lw->addItem("Iron man");
    lw->addItem("Captain America");
    lw->addItem("Thor");
    lw->addItem("Shazam");
    lw->addItem("Hulk");
    lw->addItem("Batman");

    QPushButton *add = new QPushButton("Add", this);
    QPushButton *rename =new QPushButton("Rename", this);
    QPushButton *remove = new QPushButton("Remove", this);
    QPushButton *rmall = new QPushButton("Remove All", this);

    vbox->setSpacing(3);
    //vbox->addStretch(1);
    vbox->addWidget(add);
    vbox->addWidget(rename);
    vbox->addWidget(remove);
    vbox->addWidget(rmall);
    vbox->addStretch(0);

    hbox->addWidget(lw);
    hbox->addSpacing(15);
    hbox->addLayout(vbox);

    setLayout(hbox);
}
