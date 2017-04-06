#ifndef FACULTYPARKING_H
#define FACULTYPARKING_H

#include "parkingtype.h"

class FacultyParking : public ParkingType
{
public:
    FacultyParking();

protected:
    virtual void initialize() {}
};

#endif // FACULTYPARKING_H
