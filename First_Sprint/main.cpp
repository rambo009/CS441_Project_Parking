// Project: Parking Application
// Author: Ricky Rambo
// Last Modified: 2/11/2016
// Sprint: 1

// Under Construction

#include <QCoreApplication>
#include "generalparking.h"
#include "parking.h"
#include "lot.h"

#include "priorityqueue_ht.h"

#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    PriorityQueue_HT pq;

    for(int i = 0; i < 1000; i++)
        pq.insert(i, i);

    for(int i = 0; i < 1000; i++)
        cout << pq.remove() << endl;

    /*
    Lot *lot_A = new Lot;
    QCoreApplication a(argc, argv);
    GeneralParking park1("hello", 1, false);
    GeneralParking park2("hel", 2, false);
    GeneralParking park3("hell2", 1, false);

    lot_A->insert(park1);
    lot_A->insert(park2);
    lot_A->insert(park3);

    //cout << lot_A->getNextGeneralParking().getLocation() << endl;

    GeneralParking *parks[10];
    for(int i = 0; i < 10; i++) {
        parks[i] = new GeneralParking(std::to_string(i), i, false);
    }

    lot_A->insert(parks, 10);
    Parking *p = (lot_A->getNextGeneralParking());
    cout << p->getOccupancy() << endl;
    lot_A->freedParking(p->getLocation());
    cout << p->getOccupancy() << endl;

    delete lot_A;
    cout << "it works" << endl;
    return a.exec(); */
}
