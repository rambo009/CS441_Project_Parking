#include "employeewindow.h"
#include "ui_employeewindow.h"

employeeWindow::employeeWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::employeeWindow)
{
    ui->setupUi(this);
    assignWindow = new assignmentWindow(this);
}

employeeWindow::~employeeWindow()
{
    delete ui;
    delete assignWindow;
}

void employeeWindow::on_facultyButton_clicked()
{
    assignWindow->show();
}

void employeeWindow::on_serviceButton_clicked()
{
    assignWindow->show();
}

void employeeWindow::on_maintenanceButton_clicked()
{
    assignWindow->show();
}

void employeeWindow::on_policeButton_clicked()
{
    assignWindow->show();
}
