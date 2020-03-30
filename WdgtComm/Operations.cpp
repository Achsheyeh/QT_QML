#include "Operations.h"
#include <QGridLayout>

Operations::Operations(QWidget *parent) : QWidget(parent) {

  QPushButton *plsBtn = new QPushButton("+", this);
  QPushButton *mnsBtn = new QPushButton("-", this);
  lbl = new QLabel("0", this);

  QGridLayout *grid = new QGridLayout(this);
  grid->addWidget(plsBtn, 0, 0);
  grid->addWidget(mnsBtn, 0 ,1);
  grid->addWidget(lbl, 1, 1);

  setLayout(grid);

  connect(plsBtn, &QPushButton::clicked, this, &Operations::onPlus);
  connect(mnsBtn, &QPushButton::clicked, this, &Operations::onMinus);

}

void Operations::onPlus() {
  int val = lbl->text().toInt();
  val++;
  lbl->setText(QString::number(val));
}

void Operations::onMinus() {
  int val = lbl->text().toInt();
  val--;
  lbl->setText(QString::number(val));
}
