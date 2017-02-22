#ifndef ASSIGNMENTWINDOW_H
#define ASSIGNMENTWINDOW_H

#include <QDialog>
#include "parkingrecord.h"

namespace Ui {
class assignmentWindow;
}

class assignmentWindow : public QDialog
{
    Q_OBJECT

public:
    explicit assignmentWindow(QWidget *parent = 0);
    ~assignmentWindow();

    void updateScreen();
    void setParkingRecord(ParkingRecord parkingRecord);

private:
    Ui::assignmentWindow *ui;
    ParkingRecord m_parkingRecord;
};

#endif // ASSIGNMENTWINDOW_H
