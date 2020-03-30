#ifndef LINES_H
#define LINES_H

#include <QWidget>

class lines : public QWidget
{

public:
    lines(QWidget *parent = nullptr);
    ~lines();
protected:
    void paintEvent(QPaintEvent *event) override;
    void drawLines(QPainter *qp);
};
#endif // LINES_H
