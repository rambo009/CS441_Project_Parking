#ifndef DATABASE_H
#define DATABASE_H

#include "parkingrecord.h"
#include "parkingtype.h"

#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QtSql>

#include <QMessageBox>

class Database
{
public:
    Database();

    QString queueLot();
    ParkingRecord queueParking(ParkingType &pt);
    void contest(ParkingRecord pr);
    bool final(ParkingRecord pr);

private:
    QSqlDatabase m_database;
};

#endif // DATABASE_H
