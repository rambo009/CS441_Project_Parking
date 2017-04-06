#include "assignmentwindow.h"
#include "ui_assignmentwindow.h"

assignmentWindow::assignmentWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::assignmentWindow)
{
    ui->setupUi(this);
}

assignmentWindow::~assignmentWindow()
{
    delete ui;
}

void assignmentWindow::update(ParkingRecord parkingRecord) {
    ui->label->setText(parkingRecord.getLotName() + " " + parkingRecord.getAisleLetter() + " " + parkingRecord.getAisleNumber());
}
