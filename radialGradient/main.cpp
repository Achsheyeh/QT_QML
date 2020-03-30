#include "radialgradient.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    RadialGradient w;
    w.resize(380,250);
    w.setWindowTitle("Radial Gradient Excercise");
    w.show();
    return a.exec();
}
