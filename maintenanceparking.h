#ifndef MAINTENANCEPARKING_H
#define MAINTENANCEPARKING_H

#include "parkingtype.h"

class MaintenanceParking : public ParkingType
{
public:
    MaintenanceParking();

protected:
    virtual void initialize()  {}
};

#endif // MAINTENANCEPARKING_H
