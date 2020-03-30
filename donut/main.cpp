#include "donutshape.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    DonutShape w;
    w.resize(350, 280);
    w.setWindowTitle("Donut");
    w.show();
    return a.exec();
}
