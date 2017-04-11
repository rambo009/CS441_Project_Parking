#ifndef SERVICEPARKING_H
#define SERVICEPARKING_H

#include "parkingtype.h"

class ServiceParking : public ParkingType
{
public:
    ServiceParking();

protected:
    virtual void initialize()  {}
};

#endif // SERVICEPARKING_H
