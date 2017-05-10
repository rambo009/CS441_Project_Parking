#ifndef PARKINGRECORD_H
#define PARKINGRECORD_H

#include <QString>

class ParkingRecord
{
public:
    ParkingRecord(QString lotName, QString ailseLetter, QString ailseNumber, QString floorLevel);
    ParkingRecord();

    QString getLotName();
    QString getAisleLetter();
    QString getAisleNumber();
    QString getFloorLevel();

private:
    QString m_lotName;
    QString m_aisleLetter;
    QString m_aisleNumber;
    QString m_floorLevel;
};

#endif // PARKINGRECORD_H
