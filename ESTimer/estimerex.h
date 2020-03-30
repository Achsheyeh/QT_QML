#ifndef ESTIMEREX_H
#define ESTIMEREX_H

#include <QWidget>
#include <QLabel>

class ESTimerEx : public QWidget
{
    Q_OBJECT

public:
    ESTimerEx(QWidget *parent = nullptr);
    ~ESTimerEx();
protected:
    void timerEvent(QTimerEvent *e);
private:
    QLabel *label;

};
#endif // ESTIMEREX_H
