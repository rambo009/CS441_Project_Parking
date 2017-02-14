// Project: Parking Application
// Author: Ricky Rambo
// Last Modified: 2/11/2016
// Sprint: 1

// Under Construction

#include "handicapparking.h"

const string HandicapParking::m_ID_type = "Handicap Parking";

HandicapParking::HandicapParking(string location, unsigned int priority, bool occupancy)
    : Parking(location, priority, occupancy)
{

}

string HandicapParking::type() {
    return string("Handicap Parking");
}
