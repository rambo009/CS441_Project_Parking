// Project: Parking Application
// Author: Ricky Rambo
// Last Modified: 2/11/2016
// Sprint: 1

// Under Construction

#include "chargingstationparking.h"

const string ChargingStationParking::m_ID_type = "Charging Station Parking";

ChargingStationParking::ChargingStationParking(string location, unsigned int priority, bool occupancy)
    : Parking(location, priority, occupancy)
{

}

string ChargingStationParking::type() {
    return string("Charging Station Parking");
}
