#ifndef GRADIENTEXP_H
#define GRADIENTEXP_H

#include <QWidget>

class GradientExp : public QWidget
{

public:
    GradientExp(QWidget *parent = nullptr);
    ~GradientExp();
protected:
    void paintEvent(QPaintEvent *event) override;
private:
    void doPainting();
};
#endif // GRADIENTEXP_H
