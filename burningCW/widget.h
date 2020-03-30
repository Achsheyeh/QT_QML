#ifndef WIDGET_H
#define WIDGET_H

#include <QFrame>

class BurningWidget;

class Widget: public QFrame {
public:
   Widget(QWidget *parent = 0);
protected:
   void paintEvent(QPaintEvent *e);
   void drawWidget(QPainter &qp);
private:
   QWidget *m_parent;
   BurningWidget *burn;


   static const int DISTANCE = 19;
   static const int LINE_WIDTH = 5;
   static const int DIVISIONS = 10;
   static constexpr float FULL_CAPACITY = 700.0;
   static constexpr float MAX_CAPACITY = 750.0;

};


#endif // WIDGET_H
