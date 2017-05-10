#ifndef ADMINWINDOW_H
#define ADMINWINDOW_H

#include <QMainWindow>
#include "adminmanager.h"

namespace Ui {
class AdminWindow;
}

class AdminWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit AdminWindow(QWidget *parent = 0);
    ~AdminWindow();

private slots:
    void on_parkingLotTable_clicked();
    void on_transactionTable_clicked();

    void update();
    void freeParking();

private:
    Ui::AdminWindow *ui;

    AdminManager *m_adminManager;
};

#endif // ADMINWINDOW_H
