#include "parkingtype.h"

ParkingType::ParkingType()
{

}

void ParkingType::setLotName(QString lotName) {
    m_lotName = lotName;
}

QString ParkingType::getQueryString() {
    return "SELECT * FROM Lot "
           "WHERE Type = '" + m_parkingType + "' "
           "AND Lot_Name = '" + m_lotName + "' "
           "AND Occupied = 'false' "
           "ORDER BY Priority ASC "
           "LIMIT 1; ";
}


QString ParkingType::getQueryStringNew() {
    return "SELECT Lot.Lot_Name, Lot.Letter_Loc, Lot.Num_Loc, Lot.Floor "
           "FROM Lot, Terminals "
           "WHERE Lot.Lot_Name = Terminals.Lot_Name AND "
           "Term_Name = 'Term001' AND "
           "Type = '" + m_parkingType + "' AND "
           "Occupied = 'false' "
           "ORDER BY Terminals.Priority, Lot.Priority ASC "
           "LIMIT 1; ";
}
