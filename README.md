# QT_QML
Qt works

1. Working on QT Api and uploaded the codes containing sample usage of the provided API. Each .cpp file contains correspoing .pro file.
2. Take a combination of .cpp and corresponding .pro file into separate directory and run the following command
   for ex, TryCursor is the directory name containing Cursors.cpp and Cursors.pro
   Go to TryCursor directory and run the following to get the makefile
   
   $>qmake
   $>make

How to Generate .pro file
3. Prepare a .cpp file and place the any separate directory , go to that directory and run the following
   $>qmake -project
   Above command generates .pro file and update the .pro file at end of file if widget api is required
   QT += widgets
   
