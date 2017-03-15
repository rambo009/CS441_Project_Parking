// Special Requirement: libmysql.dll must be placed in QT's compiler bin director.
// On my system, I placed libmysql.dll in C:\Qt\5.8\mingw53_32\bin.

#include "mainwindow.h"
#include <QApplication>

#include <QTableWidget>
#include <QSqlDatabase> // Must add sql in QT's Makefile
                        // Example: "QT += ... sql"
#include <QSqlError>
#include <QSqlQuery>
#include <QTSql>        // Allows to query.record().count()

#include <QMessageBox>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //MainWindow w;
    //w.show();

    QTableWidget* table = new QTableWidget();
    table->setWindowTitle("An example to connect to server");

    QSqlDatabase database = QSqlDatabase::addDatabase("QMYSQL");

    // Initialize connect to database.
    database.setHostName("vps120966.vps.ovh.ca");
    database.setPort(3306);
    database.setDatabaseName("testing");// This is is just a test database.
                                        // Later, we will change this to the
                                        // approriate name of the database.
    database.setUserName("term001"); // One of the terminals.
    database.setPassword("12345");
    // End of the initialize process.

    if (!database.open()) {
        QMessageBox::critical(0, QObject::tr("Error: Couldn't connect to server."),
                              database.lastError().text());
        return a.exec();
    }

    // Simple query command to print TheTest table in a window.
    QSqlQuery query("SELECT * FROM TheTest");
    table->setColumnCount(query.record().count());
    table->setRowCount(query.size());

    for(int index = 0; query.next(); index++) {
        table->setItem(index, 0, new QTableWidgetItem(query.value(0).toString()));
        table->setItem(index, 1, new QTableWidgetItem(query.value(1).toString()));
    }

    table->show();
    return a.exec();
}
