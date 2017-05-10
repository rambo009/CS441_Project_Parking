#include "parkingspacewindow.h"
#include "ui_parkingspacewindow.h"

#include <singleton.h>
#include <lotmanager.h>

parkingspacewindow::parkingspacewindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::parkingspacewindow)
{
    ui->setupUi(this);
}

parkingspacewindow::~parkingspacewindow()
{
    delete ui;
}


void parkingspacewindow::update(ParkingLocationQueryRecord parkingLocationQueryRecord) {

    ui->startingTime->setText(parkingLocationQueryRecord.getStartingTime());
    ui->parkingType->setText(parkingLocationQueryRecord.getParkingType());
    ui->licenseLabel->setText(parkingLocationQueryRecord.getLicencePlate());
}
