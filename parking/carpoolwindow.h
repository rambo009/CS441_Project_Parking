#ifndef CARPOOLWINDOW_H
#define CARPOOLWINDOW_H

#include <QDialog>
#include "assignmentwindow.h"

namespace Ui {
class carpoolWindow;
}

class carpoolWindow : public QDialog
{
    Q_OBJECT

public:
    explicit carpoolWindow(QWidget *parent = 0);
    ~carpoolWindow();

private slots:
    void on_twoButton_clicked();

    void on_threeButton_clicked();

    void on_fourButton_clicked();

    void on_moreButton_clicked();

private:
    Ui::carpoolWindow *ui;
    assignmentWindow *assignWindow;
};

#endif // CARPOOLWINDOW_H
