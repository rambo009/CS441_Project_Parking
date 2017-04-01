#include "database.h"

Database::Database()
{
    m_database = QSqlDatabase::addDatabase("QMYSQL");

    m_database.setHostName("vps120966.vps.ovh.ca");
    m_database.setPort(3306);
    m_database.setDatabaseName("ParkingApp001");
    m_database.setUserName("term001");
    m_database.setPassword("12345");

    if(!m_database.open()) {
        QMessageBox::critical(0, QObject::tr("Error: Couldn't connect to server."),
                              m_database.lastError().text());
        return;
    }
}

QString Database::queueLot() {
    QString queryCommand =  "SELECT Terminals.Lot_Name "
                            "FROM Terminals "
                            "WHERE 'false' = ANY ( "
                            "Select Occupied "
                            "FROM Lot "
                            "WHERE Terminals.Lot_Name = Lot.Lot_Name AND "
                            "Terminals.Term_Name = 'Term001') "
                            "ORDER BY Terminals.priority ASC "
                            "LIMIT 1;";

    QSqlQuery query;
    query.exec(queryCommand);

    if(!query.next())
        return QString();

    return query.value("Lot_Name").toString();
}

ParkingRecord Database::queueParking(ParkingType &parkingType) {
    QSqlQuery query;

    QString queryCommand = parkingType.getQueryStringNew();

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
                            "WHERE Contested = 'Term001';";

    QSqlQuery query;
    query.exec(checkCommand);

    if(!query.next())
        return false;

    QString contestCommand =    "UPDATE Lot "
                                "SET Contested = '', Occupied = 'true' "
                                "WHERE Contested = 'Term001';";

    query.exec(contestCommand);
}
