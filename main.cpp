#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow *mainwindow = MainWindow::Getinstance();
    mainwindow->show();
    return a.exec();
}
