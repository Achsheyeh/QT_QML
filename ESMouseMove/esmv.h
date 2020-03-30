#ifndef ESMV_H
#define ESMV_H

#include <QWidget>

class ESMv : public QWidget
{
    Q_OBJECT

public:
    ESMv(QWidget *parent = nullptr);
    ~ESMv();
protected:
    void moveEvent(QMoveEvent *e) override;

};
#endif // ESMOUSEMV_H
