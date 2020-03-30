#include "shapesqp.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    shapesQp w;
    w.setWindowTitle("Shapes");
    w.show();
    return a.exec();
}
