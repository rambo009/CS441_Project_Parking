#ifndef ASSIGNMENTWINDOW_H
#define ASSIGNMENTWINDOW_H

#include <QDialog>

namespace Ui {
class assignmentWindow;
}

class assignmentWindow : public QDialog
{
    Q_OBJECT

public:
    explicit assignmentWindow(QWidget *parent = 0);
    ~assignmentWindow();

private:
    Ui::assignmentWindow *ui;
};

#endif // ASSIGNMENTWINDOW_H
