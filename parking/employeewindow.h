#ifndef EMPLOYEEWINDOW_H
#define EMPLOYEEWINDOW_H

#include <QDialog>
#include "assignmentwindow.h"

namespace Ui {
class employeeWindow;
}

class employeeWindow : public QDialog
{
    Q_OBJECT

public:
    explicit employeeWindow(QWidget *parent = 0);
    ~employeeWindow();

private slots:
    void on_facultyButton_clicked();

    void on_serviceButton_clicked();

    void on_maintenanceButton_clicked();

    void on_policeButton_clicked();

private:
    Ui::employeeWindow *ui;
    assignmentWindow *assignWindow;
};

#endif // EMPLOYEEWINDOW_H
