// Project: Parking Application
// Author: Ricky Rambo
// Last Modified: 2/19/2016
// Sprint: 1

// Under Construction

#include <QCoreApplication>

#include "generalparking.h"
#include "parking.h"
#include "lot.h"
#include "lotmanager.h"

#include "priorityqueue_ht.h"

#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char *argv[])
{

    LotManager lm;
    vector<ParkingRecord> records;

    for(int k = 0; k < 10; k++) {

        for(int i = 0; i < 60; i++) {
            ParkingRecord record = lm.getNextGeneralParking();
            cout << record.getAllInfo() << endl;
            records.push_back(record);
        }

        for(int i = 0; i < 30; i++) {
            ParkingRecord record = lm.getNextFacultyParking();
            cout << record.getAllInfo() << endl;
            records.push_back(record);
        }

        for(int i = 0; i < 15; i++) {
            ParkingRecord record = lm.getNextHandicapParking();
            cout << record.getAllInfo() << endl;
            records.push_back(record);
        }

        for(int i = 0; i < 20; i++) {
            ParkingRecord record = lm.getNextCarpoolParking();
            cout << record.getAllInfo() << endl;
            records.push_back(record);
        }

        for(int i = 0; i < 5; i++) {
            ParkingRecord record = lm.getNextChargingStationParking();
            cout << record.getAllInfo() << endl;
            records.push_back(record);
        }

        while(!records.empty()) {
            ParkingRecord record = records.back();
            lm.freedParking(record);
            records.pop_back();
        }
    }
}
