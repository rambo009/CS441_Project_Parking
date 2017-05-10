#include "adminwindow.h"
#include "ui_adminwindow.h"
#include <singleton.h>

AdminWindow::AdminWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::AdminWindow)
{
    ui->setupUi(this);

    m_adminManager = Singleton<AdminManager>::instance();
    m_adminManager->insertTable(ui->tableWidget);
    m_adminManager->setTableToParking();

    QTimer *updateTimer = new QTimer(this);
    connect(updateTimer, SIGNAL(timeout()), this, SLOT(update()));
    updateTimer->start(5000);


    QTimer *freeParkingTimer = new QTimer(this);
    connect(freeParkingTimer, SIGNAL(timeout()), this, SLOT(freeParking()));
    freeParkingTimer->start(60000);
}

AdminWindow::~AdminWindow()
{
    delete ui;
}

void AdminWindow::on_parkingLotTable_clicked()
{
    m_adminManager->setTableToParking();
}

void AdminWindow::on_transactionTable_clicked()
{
    m_adminManager->setTableToTransaction();
}

void AdminWindow::update() {
    m_adminManager->refreshTable();
}

void AdminWindow::freeParking() {
    QString queryCommand =  "UPDATE Lot SET Occupied = 'false';";

    QSqlQuery query;
    query.exec(queryCommand);

    queryCommand = "UPDATE Transaction SET End_Time = Now() "
                   "WHERE End_Time IS NULL;";

    query.exec(queryCommand);

}
