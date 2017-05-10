#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "generalwindow.h"
#include "employeewindow.h"
#include "adminwindow.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_adminWindowButton_clicked();

    void on_employeeButton_clicked();

    void on_generalButton_clicked();

private:
    Ui::MainWindow *ui;
    generalWindow *genWindow;
    EmployeeWindow *empWindow;
    adminWindow *adWindow;
};

#endif // MAINWINDOW_H
