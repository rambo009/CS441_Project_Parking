#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "generalwindow.h"
#include "employeewindow.h"
#include "adminwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    genWindow = new generalWindow(this);
    empWindow = new EmployeeWindow(this);
    adWindow = new adminWindow(this);
}

MainWindow::~MainWindow()
{
    delete ui;
    delete genWindow;
    delete empWindow;
    delete adWindow;
}

void MainWindow::on_adminWindowButton_clicked()
{
    adWindow->show();
}

void MainWindow::on_employeeButton_clicked()
{
    empWindow->show();
}

void MainWindow::on_generalButton_clicked()
{
    genWindow->show();
}
