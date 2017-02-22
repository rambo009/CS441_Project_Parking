// Project: Parking Application
// Author: Ricky Rambo
// Last Modified: 2/19/2016
// Sprint: 1

// Under Construction
// A parking type.

#ifndef GENERALPARKING_H
#define GENERALPARKING_H

#include "parking.h"

class GeneralParking : public Parking
{
public:
    GeneralParking(string aisleLetter, string aisleNumber, string floorLevel, unsigned int priority, bool aisle, bool occupancy = false);
    GeneralParking(const GeneralParking&);

    bool isAisle();

    string getParkingType();

protected:
    bool m_aisle;

private:
    static const string m_ID_type;
};

#endif // GENERALPARKING_H
