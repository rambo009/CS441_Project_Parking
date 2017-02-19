// Project: Parking Application
// Author: Ricky Rambo
// Last Modified: 2/19/2016
// Sprint: 1

// Under Construction
// A parking type.

#ifndef CARPOOLPARKING_H
#define CARPOOLPARKING_H

#include "parking.h"

// 2, 3, 4, +

class CarpoolParking : public Parking
{
public:
    enum CarpoolType { POOL_2, POOL_3, POOL_4, POOL_PLUS };

public:
    CarpoolParking(string aisleLetter, string aisleNumber, string floorLevel, unsigned int priority, CarpoolType type, bool occupancy = false);

    string getParkingType();
    string getCarpoolType();

private:
    static const string m_ID_type;

    CarpoolType m_carpoolType;
};

#endif // CARPOOLPARKING_H
