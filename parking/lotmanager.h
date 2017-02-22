// Project: Parking Application
// Author: Ricky Rambo
// Last Modified: 2/19/2016
// Sprint: 1

#ifndef LOTMANAGER_H
#define LOTMANAGER_H

#include "parkingrecord.h"
#include "lot.h"

class LotManager
{
public:
    LotManager();

    ParkingRecord getNextGeneralParking();
    ParkingRecord getNextHandicapParking();
    ParkingRecord getNextFacultyParking();
    ParkingRecord getNextCarpoolParking();
    ParkingRecord getNextChargingStationParking();

    void freedParking(ParkingRecord parkingRecord);

private:
    Lot m_lot;
};

#endif // LOTMANAGER_H
