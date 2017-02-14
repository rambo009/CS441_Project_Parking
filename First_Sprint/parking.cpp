// Project: Parking Application
// Author: Ricky Rambo
// Last Modified: 2/11/2016
// Sprint: 1

// Under Construction

#include "parking.h"

Parking::Parking(string location, unsigned int priority, bool occupancy) {
    m_location = location;
    m_priority = priority;
    m_occupancy = occupancy;
}

Parking::Parking(const Parking &parking) {
    m_location = parking.m_location;
    m_priority = parking.m_priority;
    m_occupancy = parking.m_occupancy;
}

string Parking::getLocation() {
    return m_location;
}

unsigned int Parking::getPriority() {
    return m_priority;
}

bool Parking::getOccupancy() {
    return m_occupancy;
}

void Parking::setOccupancy(bool occupancy) {
    m_occupancy = occupancy;
}
