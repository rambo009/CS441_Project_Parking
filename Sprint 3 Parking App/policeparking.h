#ifndef POLICEPARKING_H
#define POLICEPARKING_H

#include "parkingtype.h"

class PoliceParking : public ParkingType
{
public:
    PoliceParking();

protected:
    virtual void initialize()  {}
};

#endif // POLICEPARKING_H
