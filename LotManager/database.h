#ifndef DATABASE_H
#define DATABASE_H

#include "parkingrecord.h"
#include "parkingtype.h"

#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QtSql>

#include <vector>
using std::vector;

#include <QMessageBox>

class Database
{
public:
    Database();

    ParkingRecord queueParking(ParkingType &pt);
    void contest(ParkingRecord pr);
    bool final(ParkingRecord pr);

private:
    QSqlDatabase m_database;
    QString m_terminalName;
};

#endif // DATABASE_H
