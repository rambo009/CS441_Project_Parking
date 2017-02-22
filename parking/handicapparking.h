// Project: Parking Application
// Author: Ricky Rambo
// Last Modified: 2/19/2016
// Sprint: 1

// Under Construction
// A parking type.

#ifndef HANDICAPPARKING_H
#define HANDICAPPARKING_H

//add normal and large

#include "parking.h"

class HandicapParking : public Parking
{
public:
    enum HandicapType { NORMAL, LARGE };

public:
    HandicapParking(string aisleLetter, string aisleNumber, string floorLevel, unsigned int priority, HandicapType type, bool occupancy = false);

    string getParkingType();
    string getHandicapType();

private:
    static const string m_ID_type;

    HandicapType m_handicapType;
};

#endif // HANDICAPPARKING_H
