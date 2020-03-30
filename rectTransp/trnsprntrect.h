#ifndef TRNSPRNTRECT_H
#define TRNSPRNTRECT_H

#include <QWidget>

class TrnsprntRect : public QWidget
{


public:
    TrnsprntRect(QWidget *parent = nullptr);
    ~TrnsprntRect();

protected:
    void paintEvent(QPaintEvent *event) override;
    void doPainting();
};
#endif // TRNSPRNTRECT_H
