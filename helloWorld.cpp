#include <QApplication>
#include <QLabel>

int main(int argc, char **argv){

  QApplication app(argc, argv);
  QLabel label("<H2> Hello World! <br> <br> Welcome to my world </H2>");
  label.show();
  return app.exec();
}
