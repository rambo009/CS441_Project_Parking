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

void assignmentWindow::setParkingRecord(ParkingRecord parkingRecord) {
    m_parkingRecord = parkingRecord;
}

void assignmentWindow::updateScreen() {
    ui->aisleAssignmentLabel->setText(m_parkingRecord.getAisleLetter());
    ui->numberAssignmentLabel->setText(m_parkingRecord.getAisleNumber());
}
