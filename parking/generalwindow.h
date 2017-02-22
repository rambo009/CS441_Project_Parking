#ifndef GENERALWINDOW_H
#define GENERALWINDOW_H

#include <QDialog>
#include "assignmentwindow.h"
#include "carpoolwindow.h"
#include "handicapwindow.h"

#include "lotmanager.h"

namespace Ui {
class generalWindow;
}

class generalWindow : public QDialog
{
    Q_OBJECT

public:
    explicit generalWindow(QWidget *parent = 0);
    ~generalWindow();

private slots:
    void on_handicapButton_clicked();

    void on_chargingButton_clicked();

    void on_regularButton_clicked();

    void on_carpoolButton_clicked();

private:
    Ui::generalWindow *ui;
    assignmentWindow *assignWindow;
    carpoolWindow *carWindow;
    handicapWindow *handWindow;

    LotManager m_lotManager;
};

#endif // GENERALWINDOW_H
