#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    int i=0;
    int j=0;
j=i;
j=i+1;
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
