// Project: Parking Application
// Author: Ricky Rambo
// Last Modified: 2/19/2016
// Sprint: 1

// Under Construction
// A parking type.

#ifndef FACULTYPARKING_H
#define FACULTYPARKING_H

#include "parking.h"

// need to add service, manitance, and police classes

class FacultyParking : public Parking
{   
public:
    FacultyParking(string aisleLetter, string aisleNumber, string floorLevel, unsigned int priority, bool occupancy = false);

    string getParkingType();


private:
    static const string m_ID_type;
};

#endif // FACULTYPARKING_H
