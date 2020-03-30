#include "Operations.h"


int main(int argc, char **argv) {
  QApplication app(argc, argv);
  
  Operations window;
 
  window.resize(300, 190);
  window.setWindowTitle("Sample Operations");
  window.show();

  return app.exec();
}
