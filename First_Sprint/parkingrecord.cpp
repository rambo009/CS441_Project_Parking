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


string ParkingRecord::getLotName() {
    return m_lotName;
}

string ParkingRecord::getAisleLetter() {
    return m_aisleLetter;
}

string ParkingRecord::getAisleNumber() {
    return m_aisleNumber;
}

string ParkingRecord::getFloorLevel() {
    return m_floorLevel;
}

string ParkingRecord::getAllInfo() {
    return m_lotName + " " + m_aisleLetter + " " + m_aisleNumber + " " + m_floorLevel;
}

string ParkingRecord::getLocation() {
    string s = m_aisleLetter + m_aisleNumber + m_floorLevel;
    return s;
}
