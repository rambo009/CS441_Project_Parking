#ifndef ADMINMANAGER_H
#define ADMINMANAGER_H

#include "database.h"

class AdminManager
{
public:
    AdminManager();

    void insertTable(QTableWidget *tableWidget);

    void setTableToParking();
    void setTableToTransaction();
    void refreshTable();

private:
    Database m_database;

    enum {
        PARKING_TABLE,
        TRANSACTION_TABLE
    } m_lastSetTable;
};

#endif // ADMINMANAGER_H
