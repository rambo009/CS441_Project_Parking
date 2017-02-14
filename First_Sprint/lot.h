// Project: Parking Application
// Author: Ricky Rambo
// Last Modified: 2/11/2016
// Sprint: 1

// Under Construction

#ifndef LOT_H
#define LOT_H

#include <string>
#include <map>
using namespace std;

#include "parkingcontainer.h"

#include "generalparking.h"
#include "facultyparking.h"
#include "handicapparking.h"
#include "chargingstationparking.h"
#include "carpoolparking.h"

class Lot
{
public:
    Lot();
    ~Lot();

    // These methods/functions are to insert parking types into
    // the lot.  This should be done in the initialization phase
    // of the program.
    void insert(GeneralParking);
    void insert(FacultyParking);
    void insert(HandicapParking);
    void insert(ChargingStationParking);
    void insert(CarpoolParking);

    // Another set of methods to insert parking types into the lot.
    // These methods might be eaiser because they allow to pass
    // an array of objects of parking type.
    void insert(GeneralParking**, unsigned int quantity);
    void insert(FacultyParking**, unsigned int quantity);
    void insert(HandicapParking**, unsigned int quantity);
    void insert(ChargingStationParking**, unsigned int quantity);
    void insert(CarpoolParking**, unsigned int quantity);


    GeneralParking* getNextGeneralParking();
    FacultyParking getNextFacultyParking();
    HandicapParking getNextHandicapParking();
    ChargingStationParking getChargingStationParking();
    CarpoolParking getCarpoolParking();

    void freedParking(string location);


private:
    ParkingContainer<GeneralParking *> m_generalParkingContainer;
    ParkingContainer<FacultyParking *> m_facultyParkingContainer;
    ParkingContainer<HandicapParking *> m_handicapParkingContainer;
    ParkingContainer<ChargingStationParking *> m_chargingStationParking;
    ParkingContainer<CarpoolParking *> m_carPoolParkingContainer;

    static const unsigned int m_baseIndexGeneralParking;
    static const unsigned int m_baseIndexFacultyParking;
    static const unsigned int m_baseIndexHandicapParking;
    static const unsigned int m_baseIndexChargingStationParking;
    static const unsigned int m_baseIndexCarPoolParking;

    unsigned int m_relativeIndexGeneralParking;
    unsigned int m_relativeIndexFacultyParking;
    unsigned int m_relativeIndexHandicapParking;
    unsigned int m_relativeIndexChargingStationParking;
    unsigned int m_relativeIndexCarPoolParking;



    map<string, int> m_mapParkTable;
};

#endif // LOT_H
