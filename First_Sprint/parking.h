// Project: Parking Application
// Author: Ricky Rambo
// Last Modified: 2/19/2016
// Sprint: 1

// Under Construction

// This is a virtual class that will be the parent of all
// parking types.

#ifndef PARKING_H
#define PARKING_H

#include <string>
using namespace std;

class Parking
{
public:
    Parking(string aisleLetter, string aisleNumber, string floorLevel, unsigned int priority, bool occupancy = false);
    Parking(const Parking&);
    virtual ~Parking();

    virtual string getParkingType() = 0;

    string getAisleLetter();
    string getAisleNumber();
    string getFloorLevel();

    string getLocation();

    unsigned int getPriority();
    bool getOccupancy();

    void setOccupancy(bool);

protected:
    string m_aisleLetter;
    string m_aisleNumber;
    string m_floorLevel;

    string m_location;

    unsigned int m_priority;
    bool m_occupancy;
};

#endif // PARKING_H
