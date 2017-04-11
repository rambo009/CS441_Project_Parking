#include "generalwindow.h"
#include "ui_generalwindow.h"
#include "assignmentwindow.h"
#include "singleton.h"

generalWindow::generalWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::generalWindow)
{
    ui->setupUi(this);

    assignWindow = new assignmentWindow(this);

    m_lotManager = new LotManager;
}

generalWindow::~generalWindow()
{
    delete ui;
    delete assignWindow;
}

void generalWindow::on_regularButton_clicked()
{
    assignWindow->update(m_lotManager->getNextRegularParking());
    assignWindow->show();
}

void generalWindow::on_carpoolButton_clicked()
{
    assignWindow->update(m_lotManager->getNextCarpoolParking());
    assignWindow->show();
}

void generalWindow::on_handicapButton_clicked()
{
    assignWindow->update(m_lotManager->getNextHandicapParking());
    assignWindow->show();
}

void generalWindow::on_chargingButton_clicked()
{
    assignWindow->update(m_lotManager->getNextChargingStationParking());
    assignWindow->show();
}
