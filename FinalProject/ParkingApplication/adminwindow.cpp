#include "adminwindow.h"
#include "parkingspacewindow.h"
#include "ui_adminwindow.h"
#include <QDebug>
#include <QString>

#include "lotmanager.h"
#include "singleton.h"

adminWindow::adminWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::adminWindow)
{
    ui->setupUi(this);

     parkingSpaceWindow = new parkingspacewindow(this);
}

adminWindow::~adminWindow()
{
    delete ui;
}

void adminWindow::on_pushButton_clicked()
{
    QString lotName = ui->lineLotName->displayText();
    QString letterLocation = ui->lineLetterLocation->displayText();
    QString numberLocation = ui->lineNumberLocation->displayText();
    QString floorLevel = ui->lineFloorLocation->displayText();

    LotManager *lotManager = Singleton<LotManager>::instance();

    ParkingLocationQueryRecord parkingQueryRecord = lotManager->getParkingLocationQuery(lotName,
                                                                                        letterLocation,
                                                                                        numberLocation,
                                                                                        floorLevel);

   parkingSpaceWindow->update(parkingQueryRecord);
   this->hide();
   parkingSpaceWindow->show();
}
