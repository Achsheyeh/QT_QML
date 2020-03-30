#ifndef ESKEYPRESS_H
#define ESKEYPRESS_H

#include <QWidget>

class ESKeyPress : public QWidget
{
    Q_OBJECT

public:
    ESKeyPress(QWidget *parent = nullptr);
    ~ESKeyPress();
protected:
    void keyPressEvent(QKeyEvent *event) override;
};
#endif // ESKEYPRESS_H
