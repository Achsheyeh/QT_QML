#include "RvwGrdExc.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    RvwGrdExc w;
    w.setWindowTitle("Review - Grid layout example");
    w.show();

    return a.exec();
}
