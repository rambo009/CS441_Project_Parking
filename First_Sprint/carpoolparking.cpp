// Project: Parking Application
// Author: Ricky Rambo
// Last Modified: 2/11/2016
// Sprint: 1

// Under Construction

#include "carpoolparking.h"

CarpoolParking::CarpoolParking(string location, unsigned int priority, bool occupancy)
    : Parking(location, priority, occupancy)
{

}

string CarpoolParking::type() {
    return string("Carpool Parking");
}
