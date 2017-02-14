// Project: Parking Application
// Author: Ricky Rambo
// Last Modified: 2/11/2016
// Sprint: 1

// Under Construction
// A parking type.

#ifndef HANDICAPPARKING_H
#define HANDICAPPARKING_H

#include "parking.h"

class HandicapParking : public Parking
{
public:
    HandicapParking(string location, unsigned int priority, bool occupancy = false);

    string type();

private:
    static const string m_ID_type;
};

#endif // HANDICAPPARKING_H
