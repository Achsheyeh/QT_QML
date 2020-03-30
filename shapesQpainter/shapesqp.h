#ifndef SHAPESQP_H
#define SHAPESQP_H

#include <QWidget>

class shapesQp : public QWidget
{

public:
    shapesQp(QWidget *parent = nullptr);
    ~shapesQp();
protected:
    void paintEvent(QPaintEvent *event) override;
private:
    void doPainting();
};
#endif // SHAPESQP_H
