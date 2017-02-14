// Project: Parking Application
// Author: Ricky Rambo
// Last Modified: 2/11/2016
// Sprint: 1

// Under Construction
// A parking type.

#ifndef FACULTYPARKING_H
#define FACULTYPARKING_H

#include "parking.h"

class FacultyParking : public Parking
{
public:
    FacultyParking(string location, unsigned int priority, bool occupancy = false);

    string type();

private:
    static const string m_ID_type;
};

#endif // FACULTYPARKING_H
