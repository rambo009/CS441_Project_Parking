#include <QCoreApplication>
#include <QDebug>
#include "regularparking.h"
#include "parkingtype.h"
#include "lotmanager.h"
#include "singleton.h"

int main(int argc, char *argv[])
{
    LotManager *lm = Singleton<LotManager>::instance();

    ParkingRecord pr = lm->getNextRegularParking();

    qDebug() << pr.getLotName() << " " << pr.getAisleLetter() << " " << pr.getAisleNumber() << " " << pr.getFloorLevel() << '\n';

    if(pr.getLotName() == "")
        qDebug() << "There are no more parking spots\n";

    return 0;
}


