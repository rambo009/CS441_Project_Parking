#include "parkingrecord.h"

ParkingRecord::ParkingRecord(QString lotName, QString aisleLetter, QString aisleNumber, QString floorLevel)
{
    m_lotName = lotName;
    m_aisleLetter = aisleLetter;
    m_aisleNumber = aisleNumber;
    m_floorLevel = floorLevel;
}

ParkingRecord::ParkingRecord()
{

}

QString ParkingRecord::getLotName() {
    return m_lotName;
}

QString ParkingRecord::getAisleLetter() {
    return m_aisleLetter;
}

QString ParkingRecord::getAisleNumber() {
    return m_aisleNumber;
}

QString ParkingRecord::getFloorLevel() {
    return m_floorLevel;
}
