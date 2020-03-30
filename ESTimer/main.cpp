#include "estimerex.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ESTimerEx w;
    w.setWindowTitle("QT Timer to explaing event handling");
    w.show();
    return a.exec();
}
