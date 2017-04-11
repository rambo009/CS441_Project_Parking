#ifndef GENERALWINDOW_H
#define GENERALWINDOW_H

#include "assignmentwindow.h"
#include "lotmanager.h"

#include <QDialog>

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
    void on_regularButton_clicked();

    void on_carpoolButton_clicked();

    void on_handicapButton_clicked();

    void on_chargingButton_clicked();

private:
    Ui::generalWindow *ui;

    assignmentWindow *assignWindow;

    LotManager *m_lotManager;
};

#endif // GENERALWINDOW_H
