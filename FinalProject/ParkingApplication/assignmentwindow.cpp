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
    ui->assignmentLabel->setText(parkingRecord.getLotName() + " " + parkingRecord.getAisleLetter() + " " + parkingRecord.getAisleNumber());
}

void assignmentWindow::on_pushButton_clicked()
{
    this->hide();
}
