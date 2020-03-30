#include "eskeypress.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ESKeyPress w;
    w.setWindowTitle("KeyPress Event handling");
    w.show();
    return a.exec();
}
