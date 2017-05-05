#ifndef DATABASE_H
#define DATABASE_H

#include <vector>
using std::vector;

#include <QTableWidget>

#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QtSql>

#include <QMessageBox>

class Database
{
public:
    Database();

    void insertTable(QTableWidget *tableWidget);

    void setTableToParking();
    void setTableToTransaction();

    void tableQuery(QString tableName);


private:
    QSqlDatabase m_database;
    QTableWidget *m_tableWidget;

    vector<QString> m_parkingTableHeaders;
    vector<QString> m_transactionTableHeaders;
};

#endif // DATABASE_H
