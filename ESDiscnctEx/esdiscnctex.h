#ifndef ESDISCNCTEX_H
#define ESDISCNCTEX_H

#include <QWidget>
#include <QPushButton>
class ESDiscnctEx : public QWidget
{
    Q_OBJECT

public:
    ESDiscnctEx(QWidget *parent = nullptr);
    ~ESDiscnctEx();
private slots:
    void onClick();
    void onCheck(int);
private:
    QPushButton *clckBtn;
};
#endif // ESDISCNCTEX_H
