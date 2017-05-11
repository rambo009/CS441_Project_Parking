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
        throw DatabaseError(m_database.lastError().text());
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
                                "SET Contested = '" + m_terminalName + "' "
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

    QString transaction =       "INSERT INTO "
                                "Transaction(Letter_Loc, Num_Loc, Floor, Lot_Name, Start_Time, License_Plate)"
                                "VALUES ('" + parkingRecord.getAisleLetter() +
                                "', " + parkingRecord.getAisleNumber() +
                                ", " + parkingRecord.getFloorLevel() +
                                ", '" + parkingRecord.getLotName() +
                                "', NOW()"
                                ", '" + randomLicensePlate() + "');";

    query.exec(transaction);

    return true;
}


 ParkingLocationQueryRecord Database::parkingLocationQuery(QString lotName,
                                                           QString letterLocation,
                                                           QString numberLocation,
                                                           QString floor)
 {
     QString queryTransactionCommand =      "SELECT DISTINCT Start_Time, License_Plate "
                                            "FROM Transaction "
                                            "WHERE Lot_Name = '" + lotName + "' "
                                            "AND Num_Loc = " + numberLocation + " "
                                            "AND Letter_Loc = '" + letterLocation + "' "
                                            "AND Floor = " + floor + " "
                                            "AND End_Time IS NULL;";

     QString queryLotCommand =  "SELECT Type "
                                "FROM Lot "
                                "WHERE Lot_Name = '" + lotName + "' "
                                "AND Num_Loc = " + numberLocation + " "
                                "AND Letter_Loc = '" + letterLocation + "' "
                                "AND Floor = " + floor + ";";

     QSqlQuery query;

     query.exec(queryTransactionCommand);

     QString startingTime;
     QString licensePlate;
     QString parkingType;

     if(query.next()) {
         startingTime = query.value("Start_Time").toString();
         licensePlate = query.value("License_Plate").toString();
     }

     query.exec(queryLotCommand);

     if(query.next()) {
         parkingType = query.value("Type").toString();
     }

     return ParkingLocationQueryRecord(startingTime, parkingType, licensePlate);
 }


 QString Database::randomLicensePlate() {
     QString licensePlate;
     qsrand(QTime::currentTime().msec());

     for(int i = 0; i < 7; i++) {
         if(qrand() % 2) {
             licensePlate.append(QChar ('A' + qrand() % 26));
         }
         else {
             licensePlate.append(QChar ('0' + qrand() % 10));
         }
     }

     return licensePlate;
 }

