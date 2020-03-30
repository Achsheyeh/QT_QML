
#include <QApplication>
#include "LMNesting.h"


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    LMNesting w;
    w.setWindowTitle("Layout management nesting example");
    w.show();
    return a.exec();
}
