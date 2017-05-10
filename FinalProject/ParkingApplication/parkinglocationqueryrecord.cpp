#include "parkinglocationqueryrecord.h"

ParkingLocationQueryRecord::ParkingLocationQueryRecord(QString startTime, QString parkingType, QString licencePlate)
{
    m_startingTime = startTime;
    m_parkingType = parkingType;
    m_licencePlate = licencePlate;
}

ParkingLocationQueryRecord::ParkingLocationQueryRecord() {

}

QString ParkingLocationQueryRecord::getStartingTime() {
   return m_startingTime;
}

QString ParkingLocationQueryRecord::getParkingType() {
    return m_parkingType;
}

QString ParkingLocationQueryRecord::getLicencePlate() {
    return m_licencePlate;
}
