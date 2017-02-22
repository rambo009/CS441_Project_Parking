// Project: Parking Application
// Author: Ricky Rambo
// Last Modified: 2/19/2016
// Sprint: 1

#include "parkingrecord.h"

ParkingRecord::ParkingRecord(string lotName, string aisleLetter, string aisleNumber, string floorLevel)
{
    m_lotName = lotName;
    m_aisleLetter = aisleLetter;
    m_aisleNumber = aisleNumber;
    m_floorLevel = floorLevel;
}

ParkingRecord::ParkingRecord() {

}

QString ParkingRecord::getLotName() {
    return QString(m_lotName.c_str());
}

QString ParkingRecord::getAisleLetter() {
    return QString(m_aisleLetter.c_str());
}

QString ParkingRecord::getAisleNumber() {
    return QString(m_aisleNumber.c_str());
}

QString ParkingRecord::getFloorLevel() {
    return QString(m_floorLevel.c_str());
}

string ParkingRecord::getAllInfo() {
    return m_lotName + " " + m_aisleLetter + " " + m_aisleNumber + " " + m_floorLevel;
}

string ParkingRecord::getLocation() {
    string s = m_aisleLetter + m_aisleNumber + m_floorLevel;
    return s;
}
