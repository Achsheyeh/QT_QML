#include "gradientexp.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    GradientExp w;
    w.setWindowTitle("Linear Gradients");
    w.show();
    return a.exec();
}
