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
