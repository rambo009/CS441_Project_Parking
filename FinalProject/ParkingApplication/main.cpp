#include "mainwindow.h"
#include <QApplication>
#include <QMessageBox>

#include "singleton.h"
#include "lotmanager.h"


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    try {
        Singleton<LotManager>::instance();
    }
    catch(DatabaseError databaseError) {
        QMessageBox::critical(0, QObject::tr("Error: could not connect to server."),
                              databaseError.getErrorMessage());
        return a.exec();
    }

    MainWindow w;
    w.show();

    return a.exec();
}
