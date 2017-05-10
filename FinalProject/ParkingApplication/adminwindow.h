#ifndef ADMINWINDOW_H
#define ADMINWINDOW_H

#include "parkingspacewindow.h"
#include <QDialog>

namespace Ui {
class adminWindow;
}

class adminWindow : public QDialog
{
    Q_OBJECT

public:
    explicit adminWindow(QWidget *parent = 0);
    ~adminWindow();

private slots:
    void on_pushButton_clicked();

private:
    Ui::adminWindow *ui;

        parkingspacewindow *parkingSpaceWindow;
};

#endif // ADMINWINDOW_H
