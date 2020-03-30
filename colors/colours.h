#ifndef COLOURS_H
#define COLOURS_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class colours; }
QT_END_NAMESPACE

class colours : public QWidget
{

public:
    colours(QWidget *parent = nullptr);
    ~colours();

protected:
    void paintEvent(QPaintEvent *event) override;
private:
    void doPainting();

};
#endif // COLOURS_H
