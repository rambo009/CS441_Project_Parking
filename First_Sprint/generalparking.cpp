// Project: Parking Application
// Author: Ricky Rambo
// Last Modified: 2/19/2016
// Sprint: 1

// Under Construction

#include "generalparking.h"

const string GeneralParking::m_ID_type = "General Parking";

GeneralParking::GeneralParking(string aisleLetter, string aisleNumber, string floorLevel, unsigned int priority, bool aisle, bool occupancy)
    : Parking(aisleLetter, aisleNumber, floorLevel, priority, occupancy) {
    m_aisle = aisle;
}

GeneralParking::GeneralParking(const GeneralParking &parking)
    : Parking(parking.m_aisleLetter, parking.m_aisleNumber, parking.m_floorLevel, parking.m_priority, parking.m_occupancy) {
    m_aisle = parking.m_aisle;
}

bool GeneralParking::isAisle() {
    return m_aisle;
}

string GeneralParking::getParkingType() {
    return m_ID_type;
}
