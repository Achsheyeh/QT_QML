#include "burningwidget.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    BurningWidget w;
    w.resize(370, 200);
    w.setWindowTitle("Burning Widget");
    w.show();
    return a.exec();
}
