#include "esmv.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ESMv w;
    w.setWindowTitle("Widget move Event Example");
    w.show();
    return a.exec();
}
