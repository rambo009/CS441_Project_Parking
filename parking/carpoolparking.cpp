// Project: Parking Application
// Author: Ricky Rambo
// Last Modified: 2/19/2016
// Sprint: 1

// Under Construction

#include "carpoolparking.h"

const string CarpoolParking::m_ID_type = "Carpool Parking";

CarpoolParking::CarpoolParking(string aisleLetter, string aisleNumber, string floorLevel, unsigned int priority, CarpoolType type, bool occupancy)
    : Parking(aisleLetter, aisleNumber, floorLevel, priority, occupancy)
{
    m_carpoolType = type;
}

string CarpoolParking::getParkingType() {
    return m_ID_type;
}

string CarpoolParking::getCarpoolType() {
    switch (m_carpoolType) {
    case POOL_2:
        return "Carpool Two";

    case POOL_3:
        return "Carpool Three";

    case POOL_4:
        return "Carpool Four";

    case POOL_PLUS:
        return "Carpool Plus";
    }

    return "Carpool Error";
}
