#include "CustomWidget.h"
#include <QApplication>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QScopedPointer<QWidget> w(new CustomWidget());

    w->show();
    return a.exec();
}
