// Project: Parking Application
// Author: Ricky Rambo
// Last Modified: 2/11/2016
// Sprint: 1

// Under Construction

#include "lot.h"
#include <iostream>
using namespace std;

// To index under one mapped array so that it can map
// location string names to indexes of parking type containers.
const unsigned int Lot::m_baseIndexGeneralParking = 0;
const unsigned int Lot::m_baseIndexFacultyParking = 10000;
const unsigned int Lot::m_baseIndexHandicapParking = 20000;
const unsigned int Lot::m_baseIndexChargingStationParking = 25000;
const unsigned int Lot::m_baseIndexCarPoolParking = 30000;

Lot::Lot() {
    m_relativeIndexCarPoolParking = 0;
    m_relativeIndexChargingStationParking = 0;
    m_relativeIndexFacultyParking = 0;
    m_relativeIndexGeneralParking = 0;
    m_relativeIndexHandicapParking = 0;

}

Lot::~Lot() {
    for(unsigned int i = 0; i < m_generalParkingContainer.size(); i++) {
        delete m_generalParkingContainer.at(i);
    }

    for(unsigned int i = 0; i < m_facultyParkingContainer.size(); i++) {
        delete m_facultyParkingContainer.at(i);
    }

    for(unsigned int i = 0; i < m_handicapParkingContainer.size(); i++) {
        delete m_handicapParkingContainer.at(i);
    }

    for(unsigned int i = 0; i < m_chargingStationParking.size(); i++) {
        delete m_chargingStationParking.at(i);
    }

    for(unsigned int i = 0; i < m_carPoolParkingContainer.size(); i++) {
        delete m_carPoolParkingContainer.at(i);
    }
}

// Inserts general rule:
// 1.) Insert parking type into the correct parking type container.
// 2.) Map the parking type location string name to the index of the container.
// 3.) Increment the next relative index parking type pointer.
void Lot::insert(GeneralParking parking) {
    m_generalParkingContainer.add(new GeneralParking(parking));
    m_mapParkTable.insert(pair<string,unsigned int>(parking.getLocation(), m_baseIndexGeneralParking + m_relativeIndexGeneralParking));
    m_relativeIndexGeneralParking++;
}

void Lot::insert(FacultyParking parking) {
    m_facultyParkingContainer.add(new FacultyParking(parking));
    m_mapParkTable.insert(pair<string,unsigned int>(parking.getLocation(), m_baseIndexFacultyParking + m_relativeIndexFacultyParking));
    m_relativeIndexFacultyParking++;
}

void Lot::insert(HandicapParking parking) {
    m_handicapParkingContainer.add(new HandicapParking(parking));
    m_mapParkTable.insert(pair<string,unsigned int>(parking.getLocation(), m_baseIndexHandicapParking + m_relativeIndexHandicapParking));
    m_relativeIndexHandicapParking++;
}

void Lot::insert(ChargingStationParking parking) {
    m_chargingStationParking.add(new ChargingStationParking(parking));
    m_mapParkTable.insert(pair<string,unsigned int>(parking.getLocation(), m_baseIndexChargingStationParking + m_relativeIndexChargingStationParking));
    m_relativeIndexChargingStationParking++;
}

void Lot::insert(CarpoolParking parking) {
    m_carPoolParkingContainer.add(new CarpoolParking(parking));
    m_mapParkTable.insert(pair<string,unsigned int>(parking.getLocation(), m_baseIndexCarPoolParking + m_relativeIndexCarPoolParking));
    m_relativeIndexCarPoolParking++;
}

// Insert parking type arrays' elements into the correct parking type insert method.
void Lot::insert(GeneralParking** parking, unsigned int quantity) {
    for(unsigned int i = 0; i < quantity; i++) {
        insert(*parking[i]);
    }
}

void Lot::insert(FacultyParking** parking, unsigned int quantity) {
    for(unsigned int i = 0; i < quantity; i++) {
        insert(*parking[i]);
    }
}

void Lot::insert(HandicapParking** parking, unsigned int quantity) {
    for(unsigned int i = 0; i < quantity; i++) {
        insert(*parking[i]);
    }
}

void Lot::insert(ChargingStationParking** parking, unsigned int quantity) {
    for(unsigned int i = 0; i < quantity; i++) {
        insert(*parking[i]);
    }
}

void Lot::insert(CarpoolParking** parking, unsigned int quantity) {
    for(unsigned int i = 0; i < quantity; i++) {
        insert(*parking[i]);
    }
}

// Get the next available parking in priority queue.
GeneralParking *Lot::getNextGeneralParking()  {
    GeneralParking *parking = m_generalParkingContainer.at(10);
    parking->setOccupancy(true);
    return parking;
}

// Put parking back into queue and set occupance to false.
void Lot::freedParking(string location) {
    unsigned int index = m_mapParkTable.at(location);

    Parking *parking;

    if (index >= 0 && index < m_baseIndexFacultyParking) {
        parking = m_generalParkingContainer.at(index - m_baseIndexGeneralParking);
    }

    else if (index >= m_baseIndexFacultyParking && index < m_baseIndexHandicapParking) {
        parking = m_facultyParkingContainer.at(index - m_baseIndexFacultyParking);
    }

    else if (index >= m_baseIndexHandicapParking && index < m_baseIndexChargingStationParking) {
        parking = m_handicapParkingContainer.at(index - m_baseIndexHandicapParking);
    }

    else if (index >= m_baseIndexChargingStationParking && index < m_baseIndexCarPoolParking) {
        parking = m_chargingStationParking.at(index - m_baseIndexChargingStationParking);
    }

    else {
        parking = m_carPoolParkingContainer.at(index - m_baseIndexCarPoolParking);
    }

    parking->setOccupancy(false);
}

