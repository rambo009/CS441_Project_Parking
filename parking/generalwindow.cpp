#include "generalwindow.h"
#include "ui_generalwindow.h"
#include "carpoolwindow.h"
#include "handicapwindow.h"
#include "assignmentwindow.h"

generalWindow::generalWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::generalWindow)
{
    ui->setupUi(this);
    assignWindow = new assignmentWindow(this);
    carWindow = new carpoolWindow(this);
    handWindow = new handicapWindow(this);
}

generalWindow::~generalWindow()
{
    delete ui;
    delete assignWindow;
    delete carWindow;
    delete handWindow;
}

void generalWindow::on_handicapButton_clicked()
{
    //modal
    //handicapWindow handWindow;
    //handWindow.setModal(true);
    //handWindow.exec();

    handWindow->show();
}

void generalWindow::on_chargingButton_clicked()
{
    ParkingRecord parkingRecord = m_lotManager.getNextChargingStationParking();
    assignWindow->setParkingRecord(parkingRecord);
    assignWindow->updateScreen();
    assignWindow->show();
}

void generalWindow::on_regularButton_clicked()
{
    ParkingRecord parkingRecord = m_lotManager.getNextGeneralParking();
    assignWindow->setParkingRecord(parkingRecord);
    assignWindow->updateScreen();
    assignWindow->show();
}

void generalWindow::on_carpoolButton_clicked()
{
    //modal
    //carpoolWindow carWindow;
    //carWindow.setModal(true);
    //carWindow.exec();

    carWindow->show();
}
