#include <QApplication>
#include <QHBoxLayout>
#include <QSlider>
#include <QSpinBox>

int main(int argc, char** argv){
  // to initiate QT Window
  QApplication app(argc, argv);
  QWidget *window = new QWidget;
  window->setWindowTitle("Age App");

  // Spin Box Object Creation
  QSpinBox *spinBox = new QSpinBox;
  spinBox->setRange(0, 130); 
  // Slider Object creation 
  QSlider *slider = new QSlider(Qt::Horizontal);
  slider->setRange(0, 130);
  // enabling state change mechanism between widget elements
  // something like estalishment of communication between widget elements
  QObject::connect(spinBox, SIGNAL(valueChanged(int)), slider,  SLOT(setValue(int)));
  QObject::connect(slider, SIGNAL(valueChanged(int)), spinBox,  SLOT(setValue(int)));
  // setting default value , setting with slider also should reflect at spinbox end
  slider->setValue(35);
  // using horizontal box layout for window and adding respective elements to that window
  QHBoxLayout *layout = new QHBoxLayout;
  layout->addWidget(spinBox);
  layout->addWidget(slider);
  window->setLayout(layout);
  // displaying window
  window->show();
  // application run in loop till its get interrupted from user
  return app.exec();

}
