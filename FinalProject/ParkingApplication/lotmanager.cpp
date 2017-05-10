#include "lotmanager.h"

#include <QFile>
#include <QTextStream>
#include <QDebug>

#include "regularparking.h"
#include "handicapparking.h"
#include "carpoolparking.h"
#include "chargingparking.h"
#include "facultyparking.h"
#include "serviceparking.h"
#include "maintenanceparking.h"
#include "policeparking.h"

LotManager::LotManager()
{

}


ParkingRecord LotManager::getNextRegularParking()
{
    RegularParking regularParking;
    return queryDatabase(regularParking);
}

ParkingRecord LotManager::getNextHandicapParking()
{
    HandicapParking handicapParking;
    return queryDatabase(handicapParking);
}

ParkingRecord LotManager::getNextCarpoolParking()
{
    CarpoolParking carpoolParking;
    return queryDatabase(carpoolParking);
}

ParkingRecord LotManager::getNextChargingStationParking()
{
    ChargingParking chargingParking;
    return queryDatabase(chargingParking);
}

ParkingRecord LotManager::getNextFacultyParking()
{
    FacultyParking facultyParking;
    return queryDatabase(facultyParking);
}

ParkingRecord LotManager::getNextServiceParking()
{
    ServiceParking serviceParking;
    return queryDatabase(serviceParking);
}

ParkingRecord LotManager::getNextMaintenanceParking()
{
    MaintenanceParking maintenanceParking;
    return queryDatabase(maintenanceParking);
}

ParkingRecord LotManager::getNextPoliceParking()
{
    PoliceParking policeParking;
    return queryDatabase(policeParking);
}


ParkingRecord LotManager::queryDatabase(ParkingType &parkingType)
{
    ParkingRecord parkingRecord;

    while(true) {
        parkingRecord = queryParkingSpot(parkingType);

        if(parkingRecord.getLotName() == "")
            return parkingRecord;

        contestParkingSpot(parkingRecord);

        if(finalQuery(parkingRecord))
            break;
    }

    return parkingRecord;
}

ParkingRecord LotManager::queryParkingSpot(ParkingType &parkingType)
{
    return m_database.queueParking(parkingType);
}

void LotManager::contestParkingSpot(ParkingRecord parkingRecord)
{
    m_database.contest(parkingRecord);
}

bool LotManager::finalQuery(ParkingRecord parkingRecord)
{
    return m_database.final(parkingRecord);
}

ParkingLocationQueryRecord LotManager::getParkingLocationQuery(QString lotName,
                                                               QString letterLocation,
                                                               QString numberLocation,
                                                               QString floor)
{
    return m_database.parkingLocationQuery(lotName, letterLocation, numberLocation, floor);
}
