// Project: Parking Application
// Author: Ricky Rambo
// Last Modified: 2/19/2016
// Sprint: 1

#include "lotmanager.h"

LotManager::LotManager() : m_lot("A")
{
    for(int i = 0; i < 5; i++) {
        m_lot.insert(GeneralParking("A", to_string(i), "", 1, false));
        m_lot.insert(GeneralParking("B", to_string(i), "", 2, false));
        m_lot.insert(GeneralParking("C", to_string(i), "", 3, false));
        m_lot.insert(GeneralParking("D", to_string(i), "", 4, false));
        m_lot.insert(GeneralParking("E", to_string(i), "", 5, false));
        m_lot.insert(GeneralParking("F", to_string(i), "", 6, false));
        m_lot.insert(GeneralParking("G", to_string(i), "", 7, false));
        m_lot.insert(GeneralParking("H", to_string(i), "", 8, false));
        m_lot.insert(GeneralParking("I", to_string(i), "", 9, false));
        m_lot.insert(GeneralParking("J", to_string(i), "", 10, false));
        m_lot.insert(GeneralParking("K", to_string(i), "", 11, false));
        m_lot.insert(GeneralParking("L", to_string(i), "", 12, false));

        m_lot.insert(HandicapParking("H_A", to_string(i), "", 1, HandicapParking::NORMAL));
        m_lot.insert(HandicapParking("H_B", to_string(i), "", 2, HandicapParking::NORMAL));
        m_lot.insert(HandicapParking("H_C", to_string(i), "", 3, HandicapParking::NORMAL));

        m_lot.insert(FacultyParking("F_A", to_string(i), "", 1));
        m_lot.insert(FacultyParking("F_B", to_string(i), "", 2));
        m_lot.insert(FacultyParking("F_C", to_string(i), "", 3));
        m_lot.insert(FacultyParking("F_D", to_string(i), "", 4));
        m_lot.insert(FacultyParking("F_E", to_string(i), "", 5));
        m_lot.insert(FacultyParking("F_F", to_string(i), "", 6));

        m_lot.insert(CarpoolParking("C_A", to_string(i), "", 1, CarpoolParking::POOL_2));
        m_lot.insert(CarpoolParking("C_B", to_string(i), "", 1, CarpoolParking::POOL_3));
        m_lot.insert(CarpoolParking("C_C", to_string(i), "", 1, CarpoolParking::POOL_4));
        m_lot.insert(CarpoolParking("C_D", to_string(i), "", 1, CarpoolParking::POOL_PLUS));

        m_lot.insert(ChargingStationParking("CS_A", to_string(i), "", 1));
    }
}


ParkingRecord LotManager::getNextGeneralParking() {
    return m_lot.getNextGeneralParking();
}

ParkingRecord LotManager::getNextHandicapParking() {
    return m_lot.getNextHandicapParking();
}

ParkingRecord LotManager::getNextFacultyParking() {
    return m_lot.getNextFacultyParking();
}

ParkingRecord LotManager::getNextCarpoolParking() {
    return m_lot.getCarpoolParking();
}

ParkingRecord LotManager::getNextChargingStationParking() {
    return m_lot.getChargingStationParking();
}

void LotManager::freedParking(ParkingRecord parkingRecord) {
    string s = parkingRecord.getLocation();
    m_lot.freedParking(s);
}
