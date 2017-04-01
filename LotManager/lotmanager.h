#ifndef LOTMANAGER_H
#define LOTMANAGER_H

#include "parkingrecord.h"

#include "database.h"

class LotManager
{
public:
    LotManager();

    ParkingRecord getNextRegularParking();
    ParkingRecord getNextHandicapParking();
    ParkingRecord getNextCarpoolParking();
    ParkingRecord getNextChargingStationParking();

    ParkingRecord getNextFacultyParking();
    ParkingRecord getNextServiceParking();
    ParkingRecord getNextMaintenanceParking();
    ParkingRecord getNextPoliceParking();

private:
    QString m_lotName;
    Database m_database;

    ParkingRecord queryDatabase(ParkingType &parkingType);
    ParkingRecord queryParkingSpot(ParkingType &parkingType);
    void contestParkingSpot(ParkingRecord pr);
    bool finalQuery(ParkingRecord pr);
};

#endif // LOTMANAGER_H
