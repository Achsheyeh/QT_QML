#ifndef DONUTSHAPE_H
#define DONUTSHAPE_H

#include <QWidget>

class DonutShape : public QWidget
{
public:
    DonutShape(QWidget *parent = nullptr);
    ~DonutShape();
protected:
    void paintEvent(QPaintEvent *event) override;
private:
    void doPainting();
};
#endif // DONUTSHAPE_H
