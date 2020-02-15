#include <QApplication>
#include <QWidget>
#include <QIcon>

int main(int argc,char *argv[]){
  QApplication app(argc, argv);
  
  QWidget window;
  
  window.resize(250, 150);
  window.move(300, 300);
  window.setWindowTitle("ToolTip Sample");
  window.setToolTip("ToolTip");
  window.setWindowIcon(QIcon("earth.png"));
  window.show();

  return app.exec();
}
