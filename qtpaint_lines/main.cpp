#include "lines.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    lines w;
    w.resize(280, 720);
    w.setWindowTitle("Lines");
    w.show();
    return a.exec();
}
