#include "adminmanager.h"

AdminManager::AdminManager()
{

}

void AdminManager::insertTable(QTableWidget *tableWidget) {
    m_database.insertTable(tableWidget);
}

void AdminManager::setTableToParking() {
    m_database.setTableToParking();
    m_lastSetTable = PARKING_TABLE;
}

void AdminManager::setTableToTransaction() {
    m_database.setTableToTransaction();
    m_lastSetTable = TRANSACTION_TABLE;
}

void AdminManager::refreshTable() {
    if(m_lastSetTable == PARKING_TABLE) {
        m_database.setTableToParking();
    }

    else { // m_lastSetTable == TRANSACTION_TABLE
        m_database.setTableToTransaction();
    }
}
