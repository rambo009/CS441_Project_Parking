#include "parkingtype.h"

ParkingType::ParkingType()
{

}

QString ParkingType::getQueryString(QString terminalName) {
    return "SELECT Lot.Lot_Name, Lot.Letter_Loc, Lot.Num_Loc, Lot.Floor "
           "FROM Lot, Terminals "
           "WHERE Lot.Lot_Name = Terminals.Lot_Name AND "
           "Term_Name = '" + terminalName + "' AND "
           "Type = '" + m_parkingType + "' AND "
           "Occupied = 'false' "
           "ORDER BY Terminals.Priority, Lot.Priority ASC "
           "LIMIT 1; ";
}
