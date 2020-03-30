#ifndef BURNINGWIDGET_H
#define BURNINGWIDGET_H

#include <QWidget>
#include <QSlider>
#include <QFrame>
#include "widget.h"

class BurningWidget : public QWidget
{
    Q_OBJECT

public:
    BurningWidget(QWidget *parent = nullptr);
    int getCurrentWidth();
    ~BurningWidget();
public slots:
    void valueChanged(int);
private:
    QSlider *slider;
    Widget *widget;
    int cur_width;

    void initUI();
};
#endif // BURNINGWIDGET_H
