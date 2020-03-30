#include "esdiscnctex.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ESDiscnctEx w;
    w.setWindowTitle("Event Signal Disconnect mechanism");
    w.show();
    return a.exec();
}
