#include "mainwindow.h"

#include <QApplication>
#include <QLabel>
#include <QPixmap>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    MainWindow mainWindow;
    mainWindow.resize(500, 500);
    mainWindow.show();


    return a.exec();
}
