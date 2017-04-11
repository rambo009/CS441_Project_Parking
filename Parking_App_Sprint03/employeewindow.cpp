#include "employeewindow.h"
#include "ui_employeewindow.h"
#include "assignmentwindow.h"
#include "singleton.h"

EmployeeWindow::EmployeeWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::EmployeeWindow)
{
    ui->setupUi(this);

    assignWindow = new assignmentWindow(this);

    m_lotManager = Singleton<LotManager>::instance();
}

EmployeeWindow::~EmployeeWindow()
{
    delete ui;
    delete assignWindow;
}

void EmployeeWindow::on_facultyButton_clicked()
{
    assignWindow->update(m_lotManager->getNextFacultyParking());
    assignWindow->show();
}

void EmployeeWindow::on_serviceButton_clicked()
{
    assignWindow->update(m_lotManager->getNextServiceParking());
    assignWindow->show();
}

void EmployeeWindow::on_policeButton_clicked()
{
    assignWindow->update(m_lotManager->getNextPoliceParking());
    assignWindow->show();
}

void EmployeeWindow::on_maintenanceButton_clicked()
{
   assignWindow->update(m_lotManager->getNextMaintenanceParking());
   assignWindow->show();
}
