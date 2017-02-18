#ifndef HANDICAPWINDOW_H
#define HANDICAPWINDOW_H

#include <QDialog>
#include "assignmentwindow.h"

namespace Ui {
class handicapWindow;
}

class handicapWindow : public QDialog
{
    Q_OBJECT

public:
    explicit handicapWindow(QWidget *parent = 0);
    ~handicapWindow();

private slots:
    void on_normalButton_clicked();

    void on_largeButton_clicked();

private:
    Ui::handicapWindow *ui;
    assignmentWindow *assignWindow;
};

#endif // HANDICAPWINDOW_H
