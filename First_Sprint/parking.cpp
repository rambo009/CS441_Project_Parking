// Project: Parking Application
// Author: Ricky Rambo
// Last Modified: 2/19/2016
// Sprint: 1

// Under Construction

#include "parking.h"

Parking::Parking(string aisleLetter, string aisleNumber, string floorLevel, unsigned int priority, bool occupancy) {
    m_aisleLetter = aisleLetter;
    m_aisleNumber = aisleNumber;
    m_floorLevel = floorLevel;
    m_priority = priority;
    m_occupancy = occupancy;

    m_location = m_aisleLetter + m_aisleNumber + m_floorLevel;
}

Parking::~Parking() { }

Parking::Parking(const Parking &parking) {
    m_aisleLetter = parking.m_aisleLetter;
    m_aisleNumber = parking.m_aisleNumber;
    m_floorLevel = parking.m_floorLevel;
    m_priority = parking.m_priority;
    m_occupancy = parking.m_occupancy;
}

string Parking::getAisleLetter() {
    return m_aisleLetter;
}

string Parking::getAisleNumber() {
    return m_aisleNumber;
}

string Parking::getFloorLevel() {
    return m_floorLevel;
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
