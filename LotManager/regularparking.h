#ifndef REGULARPARKING_H
#define REGULARPARKING_H

#include "parkingtype.h"

class RegularParking : public ParkingType
{
public:
    RegularParking();

protected:
    virtual void initialize()  {}
};

#endif // REGULARPARKING_H
