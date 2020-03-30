#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

class Calculator : public QWidget

{
    Q_OBJECT

public:
    Calculator(QWidget *parent = nullptr);
    ~Calculator();
};
#endif // WIDGET_H
