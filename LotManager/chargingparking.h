#ifndef CHARGINGPARKING_H
#define CHARGINGPARKING_H

#include "parkingtype.h"

class ChargingParking : public ParkingType
{
public:
    ChargingParking();

protected:
    virtual void initialize() {}
};

#endif // CHARGINGPARKING_H
