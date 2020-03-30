#ifndef PATTERNS_H
#define PATTERNS_H

#include <QWidget>

class Patterns : public QWidget
{
public:
    Patterns(QWidget *parent = nullptr);
    ~Patterns();
protected:
    void paintEvent(QPaintEvent *e) override;
private:
     void doPainting();
};
#endif // PATTERNS_H
