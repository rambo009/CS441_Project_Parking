// Project: Parking Application
// Author: Ricky Rambo
// Last Modified: 2/11/2016
// Sprint: 1

// Under Construction

#include "facultyparking.h"

const string FacultyParking::m_ID_type = "Faculty Parking";

FacultyParking::FacultyParking(string location, unsigned int priority, bool occupancy)
    : Parking(location, priority, occupancy)
{

}

string FacultyParking::type() {
    return string("Faculty Parking");
}
