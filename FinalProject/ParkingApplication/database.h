#ifndef DATABASE_H
#define DATABASE_H

#include "parkingrecord.h"
#include "parkingtype.h"
#include "parkinglocationqueryrecord.h"
#include "databaseerror.h"

#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QtSql>

#include <vector>
using std::vector;


class Database
{
public:
    Database();

    ParkingRecord queueParking(ParkingType &pt);
    void contest(ParkingRecord pr);
    bool final(ParkingRecord pr);

    ParkingLocationQueryRecord parkingLocationQuery(QString lotName,
                                                    QString letterLocation,
                                                    QString numberLocation,
                                                    QString floor);

private:
    QSqlDatabase m_database;
    QString m_terminalName;

    QString randomLicensePlate();
};

#endif // DATABASE_H
