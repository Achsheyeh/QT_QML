#include "Calculator.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Calculator  w;
    w.move(300, 300);
    w.setWindowTitle("Calculator - grid layout example");
    w.show();
    return a.exec();
}
