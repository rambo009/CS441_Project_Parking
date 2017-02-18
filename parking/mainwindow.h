#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "generalwindow.h"
#include "employeewindow.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_generalButton_clicked();

    void on_employeeButton_clicked();

private:
    Ui::MainWindow *ui;
    generalWindow *genWindow;
    employeeWindow *empWindow;
};

#endif // MAINWINDOW_H
