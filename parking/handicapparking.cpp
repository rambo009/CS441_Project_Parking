// Project: Parking Application
// Author: Ricky Rambo
// Last Modified: 2/19/2016
// Sprint: 1

// Under Construction

#include "handicapparking.h"

const string HandicapParking::m_ID_type = "Handicap Parking";

HandicapParking::HandicapParking(string aisleLetter, string aisleNumber, string floorLevel, unsigned int priority, HandicapType type, bool occupancy)
    : Parking(aisleLetter, aisleNumber, floorLevel, priority, occupancy)
{
    m_handicapType = type;
}

string HandicapParking::getParkingType() {
    return string("Handicap Parking");
}

string HandicapParking::getHandicapType() {
    switch (m_handicapType) {
    case NORMAL:
        return string("Normal");

    case LARGE:
        return string("Large");
    }

    return string("Error");
}
