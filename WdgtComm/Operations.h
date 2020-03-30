#pragma once

#include <QWidget>
#include <QApplication>
#include <QPushButton>
#include <QLabel>

class Operations: public QWidget {
  // Q_OBJECT is required to define own slots and signals

  Q_OBJECT

  public:
    Operations(QWidget *parent = 0);
  
  private slots:
    void onPlus();
    void onMinus();

  private:
    QLabel *lbl;

};
