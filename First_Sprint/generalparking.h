// Project: Parking Application
// Author: Ricky Rambo
// Last Modified: 2/11/2016
// Sprint: 1

// Under Construction
// A parking type.

#ifndef GENERALPARKING_H
#define GENERALPARKING_H

#include "parking.h"

class GeneralParking : public Parking
{
public:
    GeneralParking(string location, unsigned int priority, bool aisle, bool occupancy = false);
    GeneralParking(const GeneralParking&);

    bool isAisle();

    string type();

protected:
    bool m_aisle;

private:
    static const string m_ID_type;
};

#endif // GENERALPARKING_H
