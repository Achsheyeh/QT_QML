#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

class ESClick : public QWidget
{
    Q_OBJECT

public:
    ESClick(QWidget *parent = nullptr);
    ~ESClick();
};
#endif // WIDGET_H
