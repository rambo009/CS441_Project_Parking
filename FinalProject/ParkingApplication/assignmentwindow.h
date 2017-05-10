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

    void update(ParkingRecord parkingRecord);

private slots:
    void on_pushButton_clicked();

private:
    Ui::assignmentWindow *ui;
};

#endif // ASSIGNMENTWINDOW_H
