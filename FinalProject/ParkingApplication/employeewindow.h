#ifndef EMPLOYEEWINDOW_H
#define EMPLOYEEWINDOW_H

#include "assignmentwindow.h"
#include "lotmanager.h"

#include <QDialog>

namespace Ui {
class EmployeeWindow;
}

class EmployeeWindow : public QDialog
{
    Q_OBJECT

public:
    explicit EmployeeWindow(QWidget *parent = 0);
    ~EmployeeWindow();

private slots:
    void on_facultyButton_clicked();

    void on_serviceButton_clicked();

    void on_policeButton_clicked();

    void on_maintenanceButton_clicked();

private:
    Ui::EmployeeWindow *ui;

    assignmentWindow *assignWindow;

    LotManager *m_lotManager;
};

#endif // EMPLOYEEWINDOW_H
