// Project: Parking Application
// Author: Ricky Rambo
// Last Modified: 2/19/2016
// Sprint: 1

// Under Construction

#include "chargingstationparking.h"

const string ChargingStationParking::m_ID_type = "Charging Station Parking";

ChargingStationParking::ChargingStationParking(string aisleLetter, string aisleNumber, string floorLevel, unsigned int priority, bool occupancy)
    : Parking(aisleLetter, aisleNumber, floorLevel, priority, occupancy)
{

}

string ChargingStationParking::getParkingType() {
    return string("Charging Station Parking");
}
