#ifndef PARKINGLOCATIONQUERYRECORD_H
#define PARKINGLOCATIONQUERYRECORD_H

#include <QString>

class ParkingLocationQueryRecord
{
public:
    ParkingLocationQueryRecord(QString startTime, QString parkingType, QString licencePlate);
    ParkingLocationQueryRecord();

    QString getStartingTime();
    QString getParkingType();
    QString getLicencePlate();

private:
    QString m_startingTime;
    QString m_parkingType;
    QString m_licencePlate;
};

#endif // PARKINGLOCATIONQUERYRECORD_H
