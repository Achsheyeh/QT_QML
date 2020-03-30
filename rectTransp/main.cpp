#include "trnsprntrect.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    TrnsprntRect w;
    w.setWindowTitle("Transparent Rectangle");
    w.show();
    return a.exec();
}
