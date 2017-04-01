#include "database.h"

#include "macros.h"

Database::Database()
{
    vector<QString> lines = extractLinesFromFile(INITIALIZATION_FILENAME);

    m_terminalName = getStringValueFromLines(lines, TERMINAL_NAME_FILE_INDEX);
    QString hostName = getStringValueFromLines(lines, HOST_NAME_FILE_INDEX);
    QString portNumber = getStringValueFromLines(lines, PORT_NUMBER_FILE_INDEX);
    QString databaseName = getStringValueFromLines(lines, DATABASE_NAME_FILE_INDEX);
    QString password = getStringValueFromLines(lines, PASSWORD_FILE_INDEX);

    m_database = QSqlDatabase::addDatabase(DATABASE_TYPE);

    m_database.setHostName(hostName);
    m_database.setPort(portNumber.toInt());
    m_database.setDatabaseName(databaseName);
    m_database.setUserName(m_terminalName);
    m_database.setPassword(password);

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


vector<QString> Database::extractLinesFromFile(QString filename)
{
    QFile file(filename);
    vector<QString> lines;

    if(!file.open(QIODevice::ReadOnly | QIODevice::Text))
        return lines;

    QTextStream inFileStream(&file);

    while(!inFileStream.atEnd())
        lines.push_back(inFileStream.readLine());

    file.close();

    return lines;
}

QString Database::getStringValueFromLines(vector<QString> lines, QString linesContains) {
    for(int i = 0; i < lines.size(); i++)
        if(lines[i].startsWith(linesContains))
            return lines[i].remove(linesContains);
}
