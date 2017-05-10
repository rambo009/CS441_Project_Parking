#ifndef CARPOOLPARKING_H
#define CARPOOLPARKING_H

#include "parkingtype.h"

class CarpoolParking : public ParkingType
{
public:
    CarpoolParking();

protected:
    virtual void initialize() {}
};

#endif // CARPOOLPARKING_H
