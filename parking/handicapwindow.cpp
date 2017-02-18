#include "handicapwindow.h"
#include "ui_handicapwindow.h"

handicapWindow::handicapWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::handicapWindow)
{
    ui->setupUi(this);
    assignWindow = new assignmentWindow(this);
}

handicapWindow::~handicapWindow()
{
    delete ui;
    delete assignWindow;
}

void handicapWindow::on_normalButton_clicked()
{
    assignWindow->show();
}

void handicapWindow::on_largeButton_clicked()
{
    assignWindow->show();
}
