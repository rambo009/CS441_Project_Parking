#include "adminwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    AdminWindow adminWindow;

    adminWindow.setWindowTitle("Parking Admin");

    adminWindow.show();

    return a.exec();
}
