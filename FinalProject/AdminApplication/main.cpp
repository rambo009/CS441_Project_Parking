#include "adminwindow.h"
#include <QApplication>
#include <QMessageBox>

#include "singleton.h"
#include "adminmanager.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    try {
        Singleton<AdminManager>::instance();
    }
    catch(DatabaseError databaseError) {
        QMessageBox::critical(0, QObject::tr("Error: could not connect to server."),
                              databaseError.getErrorMessage());
        return a.exec();
    }

    AdminWindow adminWindow;
    adminWindow.setWindowTitle("Parking Admin");
    adminWindow.show();

    return a.exec();
}
