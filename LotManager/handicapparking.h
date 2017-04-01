#ifndef HANDICAPPARKING_H
#define HANDICAPPARKING_H

#include "parkingtype.h"

class HandicapParking : public ParkingType
{
public:
    HandicapParking();

protected:
    virtual void initialize() {}
};

#endif // HANDICAPPARKING_H
