#include "ESClick.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ESClick w;
    w.setWindowTitle("Signal by click, slot handled by Qapplication's quit ");
    w.show();
    return a.exec();
}
