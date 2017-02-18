#include "carpoolwindow.h"
#include "ui_carpoolwindow.h"
#include "assignmentwindow.h"

carpoolWindow::carpoolWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::carpoolWindow)
{
    ui->setupUi(this);
    assignWindow = new assignmentWindow(this);
}

carpoolWindow::~carpoolWindow()
{
    delete ui;
    delete assignWindow;
}

void carpoolWindow::on_twoButton_clicked()
{
    assignWindow->show();
}

void carpoolWindow::on_threeButton_clicked()
{
    assignWindow->show();
}

void carpoolWindow::on_fourButton_clicked()
{
    assignWindow->show();
}

void carpoolWindow::on_moreButton_clicked()
{
    assignWindow->show();
}
