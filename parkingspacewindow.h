#ifndef PARKINGSPACEWINDOW_H
#define PARKINGSPACEWINDOW_H

#include <QDialog>
#include <QString>

#include "parkinglocationqueryrecord.h"

namespace Ui {
class parkingspacewindow;
}

class parkingspacewindow : public QDialog
{
    Q_OBJECT

public:
    explicit parkingspacewindow(QWidget *parent = 0);
    ~parkingspacewindow();

    void update(ParkingLocationQueryRecord parkingLocationQueryRecord);

private:
    Ui::parkingspacewindow *ui;
};

#endif // PARKINGSPACEWINDOW_H
