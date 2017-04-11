#include "database.h"
#include "databaseinitializationfilereader.h"
#include "macros.h"

Database::Database()
{
    DatabaseInitializationFileReader init(INITIALIZATION_FILE);

    m_database = QSqlDatabase::addDatabase(DATABASE_TYPE);
    m_terminalName = init.getTerminalName();

    m_database.setHostName(init.getHostName());
    m_database.setPort(init.getPortNumber().toInt());
    m_database.setDatabaseName(init.getDatabaseName());
    m_database.setUserName(m_terminalName);
    m_database.setPassword(init.getPassword());

    if(!m_database.open()) {
        QMessageBox::critical(0, QObject::tr("Error: Couldn't connect to server."),
                              m_database.lastError().text());
        return;
    }
}

ParkingRecord Database::queueParking(ParkingType &parkingType) {
    QSqlQuery query;

    QString queryCommand = parkingType.getQueryString(m_terminalName);

    query.exec(queryCommand);

    if(!query.next())
        return ParkingRecord();

    QString lotName = query.value("Lot_Name").toString();
    QString aisleLetter = query.value("Letter_Loc").toString();
    QString aisleNumber = query.value("Num_Loc").toString();
    QString floorLevel = query.value("Floor").toString();

    return ParkingRecord(lotName, aisleLetter, aisleNumber, floorLevel);
}

void Database::contest(ParkingRecord parkingRecord)
{
    QString contestCommand =    "UPDATE Lot "
                                "SET Contested = 'Term001' "
                                "WHERE "
                                "Lot_Name = '" + parkingRecord.getLotName() + "' AND "
                                "Letter_Loc = '" + parkingRecord.getAisleLetter() + "' AND "
                                "Num_Loc = " + parkingRecord.getAisleNumber() + " AND "
                                "Floor = " + parkingRecord.getFloorLevel() + ";";

    QSqlQuery query;
    query.exec(contestCommand);
}

bool Database::final(ParkingRecord parkingRecord)
{
    QString checkCommand =  "SELECT Contested "
                            "FROM Lot "
                            "WHERE Contested = '" + m_terminalName +"';";

    QSqlQuery query;
    query.exec(checkCommand);

    if(!query.next())
        return false;

    QString contestCommand =    "UPDATE Lot "
                                "SET Contested = '', Occupied = 'true' "
                                "WHERE Contested = '" + m_terminalName +"';";

    query.exec(contestCommand);

    return true;
}

