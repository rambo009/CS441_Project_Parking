// Project: Parking Application
// Author: Ricky Rambo
// Last Modified: 2/11/2016
// Sprint: 1

// Under Construction
// A parking type.

#ifndef CARPOOLPARKING_H
#define CARPOOLPARKING_H

#include "parking.h"

class CarpoolParking : public Parking
{
public:
    CarpoolParking(string location, unsigned int priority, bool occupancy = false);

    string type();

private:
    static const string m_ID_type;
};

#endif // CARPOOLPARKING_H
