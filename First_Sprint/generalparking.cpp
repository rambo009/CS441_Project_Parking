// Project: Parking Application
// Author: Ricky Rambo
// Last Modified: 2/11/2016
// Sprint: 1

// Under Construction

#include "generalparking.h"

const string GeneralParking::m_ID_type = "General Parking";

GeneralParking::GeneralParking(string location, unsigned int priority, bool aisle, bool occupancy)
    : Parking(location, priority, occupancy) {
    m_aisle = aisle;
}

GeneralParking::GeneralParking(const GeneralParking &parking)
    : Parking(parking.m_location, parking.m_priority, parking.m_occupancy) {
    m_aisle = parking.m_aisle;
}

bool GeneralParking::isAisle() {
    return m_aisle;
}

string GeneralParking::type() {
    return m_ID_type;
}
