// Project: Parking Application
// Author: Ricky Rambo
// Last Modified: 2/19/2016
// Sprint: 1

// Under Construction

#include "facultyparking.h"

const string FacultyParking::m_ID_type = "Faculty Parking";

FacultyParking::FacultyParking(string aisleLetter, string aisleNumber, string floorLevel, unsigned int priority, bool occupancy)
    : Parking(aisleLetter, aisleNumber, floorLevel, priority, occupancy)
{

}

string FacultyParking::getParkingType() {
    return string("Faculty Parking");
}
