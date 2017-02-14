// Project: Parking Application
// Author: Ricky Rambo
// Last Modified: 2/11/2016

// Under Construction
// A parking type.

#ifndef CHARGINGSTATIONPARKING_H
#define CHARGINGSTATIONPARKING_H

#include "parking.h"

class ChargingStationParking : public Parking
{
public:
    ChargingStationParking(string location, unsigned int priority, bool occupancy = false);

    string type();

private:
    static const string m_ID_type;
};

#endif // CHARGINGSTATIONPARKING_H
