#include "database.h"
#include "databaseinitializationfilereader.h"
#include "macros.h"

#include <QSqlQuery>
#include <QTSql>


Database::Database()
{
    DatabaseInitializationFileReader init(INITIALIZATION_FILE);

    m_database = QSqlDatabase::addDatabase(DATABASE_TYPE);

    m_database.setHostName(init.getHostName());
    m_database.setPort(init.getPortNumber().toInt());
    m_database.setDatabaseName(init.getDatabaseName());
    m_database.setUserName(init.getTerminalName());
    m_database.setPassword(init.getPassword());

    if(!m_database.open()) {
        throw DatabaseError(m_database.lastError().text());
    }

   m_parkingTableHeaders.push_back("Letter Location");
   m_parkingTableHeaders.push_back("Number Location");
   m_parkingTableHeaders.push_back("Floor");
   m_parkingTableHeaders.push_back("Lot Name");
   m_parkingTableHeaders.push_back("Priority");
   m_parkingTableHeaders.push_back("Type");
   m_parkingTableHeaders.push_back("Contested");
   m_parkingTableHeaders.push_back("Occupied");

   m_transactionTableHeaders.push_back("Transaction #");
   m_transactionTableHeaders.push_back("Letter Location");
   m_transactionTableHeaders.push_back("Number Location");
   m_transactionTableHeaders.push_back("Floor");
   m_transactionTableHeaders.push_back("Lot Name");
   m_transactionTableHeaders.push_back("Starting Time");
   m_transactionTableHeaders.push_back("End Time");
   m_transactionTableHeaders.push_back("License Plate");

    m_tableWidget = NULL;
}

void Database::insertTable(QTableWidget *tableWidget) {
    m_tableWidget = tableWidget;
}


void Database::setTableToParking() {

    m_tableWidget->clear();

    if(m_tableWidget == NULL)
        return;

    tableQuery("Lot");

    for(int column = 0; column < m_tableWidget->columnCount(); column++)
        m_tableWidget->setHorizontalHeaderItem(column, new QTableWidgetItem(m_parkingTableHeaders[column]));

}

void Database::setTableToTransaction() {

    m_tableWidget->clear();

    if(m_tableWidget == NULL)
        return;

    tableQuery("Transaction");

    for(int column = 0; column < m_tableWidget->columnCount(); column++)
        m_tableWidget->setHorizontalHeaderItem(column, new QTableWidgetItem(m_transactionTableHeaders[column]));

}

void Database::tableQuery(QString tableName) {
    QSqlQuery query("SELECT * FROM " + tableName + ";");

    m_tableWidget->setColumnCount(query.record().count());
    m_tableWidget->setRowCount(query.size());

    for(int row = 0; query.next(); row++) {
        for(int column = 0; column < m_tableWidget->columnCount(); column++)
        m_tableWidget->setItem(row, column, new QTableWidgetItem(query.value(column).toString()));
    }
}

