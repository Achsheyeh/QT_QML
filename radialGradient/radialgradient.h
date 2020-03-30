#ifndef RADIALGRADIENT_H
#define RADIALGRADIENT_H

#include <QWidget>

class RadialGradient : public QWidget
{

public:
    RadialGradient(QWidget *parent = nullptr);
    ~RadialGradient();
protected:
    void paintEvent(QPaintEvent *e);
private:
    void doPainting();
};
#endif // RADIALGRADIENT_H
