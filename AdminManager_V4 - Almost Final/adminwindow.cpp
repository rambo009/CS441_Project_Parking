#include "adminwindow.h"
#include "ui_adminwindow.h"

AdminWindow::AdminWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::AdminWindow)
{
    ui->setupUi(this);

    m_adminManager.insertTable(ui->tableWidget);
    m_adminManager.setTableToParking();

    QTimer *timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(update()));
    timer->start(5000);
}

AdminWindow::~AdminWindow()
{
    delete ui;
}

void AdminWindow::on_parkingLotTable_clicked()
{
    m_adminManager.setTableToParking();
}

void AdminWindow::on_transactionTable_clicked()
{
    m_adminManager.setTableToTransaction();
}

void AdminWindow::update() {
    m_adminManager.refreshTable();
}
