// Project: Parking Application
// Author: Ricky Rambo
// Last Modified: 2/19/2016
// Sprint: 1

// Under Construction


#ifndef PARKINGCONTAINER_H
#define PARKINGCONTAINER_H

#include <vector>
using namespace std;

template <class PARKING_TYPE>
class ParkingContainer
{
public:
    ParkingContainer();
    void add(PARKING_TYPE);
    PARKING_TYPE at(unsigned int index);

    unsigned int size();

private:
    vector<PARKING_TYPE> m_parkingContainter;
};

template <class PARKING_TYPE>
ParkingContainer<PARKING_TYPE>::ParkingContainer() {

}

template <class PARKING_TYPE>
void ParkingContainer<PARKING_TYPE>::add(PARKING_TYPE park) {
    m_parkingContainter.push_back(park);
}

template <class PARKING_TYPE>
PARKING_TYPE ParkingContainer<PARKING_TYPE>::at(unsigned int index) {
    return m_parkingContainter.at(index);
}

template <class PARKING_TYPE>
unsigned int ParkingContainer<PARKING_TYPE>::size() {
    return (unsigned int) m_parkingContainter.size();
}

#endif // PARKINGCONTAINER_H
