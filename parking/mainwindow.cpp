#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "generalwindow.h"
#include "employeewindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    genWindow = new generalWindow(this); // delete called in deconstructor
    empWindow = new employeeWindow(this); // delete called in deconstructor
}

MainWindow::~MainWindow()
{
    delete ui;
    delete genWindow;
    delete empWindow;
}

void MainWindow::on_generalButton_clicked()
{
    //modal - can not manipulate background window if open
    //generalWindow genWindow;
    //genWindow.setModal(true);
    //genWindow.exec();

    //heap version using pointers
    genWindow->show();
}

void MainWindow::on_employeeButton_clicked()
{
    //modal - can not manipulate background window if open
    //employeeWindow empWindow;
    //empWindow.setModal(true);
    //empWindow.exec();

    //heap version using pointers
    empWindow->show();
}
