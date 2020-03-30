#include "formLytEx.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    FormLytEx w;
    w.setWindowTitle("Form Layout Example");
    w.show();
    return a.exec();
}
