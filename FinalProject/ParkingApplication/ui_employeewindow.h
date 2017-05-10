/********************************************************************************
** Form generated from reading UI file 'employeewindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EMPLOYEEWINDOW_H
#define UI_EMPLOYEEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_EmployeeWindow
{
public:
    QFrame *mainFrame;
    QFrame *textFrame;
    QLabel *titleLabel;
    QFrame *buttonFrame;
    QPushButton *facultyButton;
    QPushButton *maintenanceButton;
    QPushButton *policeButton;
    QPushButton *serviceButton;

    void setupUi(QDialog *EmployeeWindow)
    {
        if (EmployeeWindow->objectName().isEmpty())
            EmployeeWindow->setObjectName(QStringLiteral("EmployeeWindow"));
        EmployeeWindow->resize(900, 600);
        EmployeeWindow->setStyleSheet(QLatin1String("#mainFrame\n"
"{\n"
"	alternate-background-color: blue;\n"
"	background: darkblue;\n"
"	border-radius: 10px;\n"
"	border: 2px solid gray;\n"
"}\n"
"\n"
"#textFrame\n"
"{\n"
"	background: qlineargradient(spread:pad, x1:0.38, y1:0, x2:0.722, y2:1, stop:0.6875 #30415D, stop:1 rgba(205, 205, 205, 255));\n"
"\n"
"	box-shadow: inset 0 0 0 1px #27496d;\n"
"	border: 1px solid white;\n"
"	border-radius: 15px;\n"
"	box-shadow: inset 0 0 0 1px #27496d;\n"
"}\n"
"\n"
"#titleLabel\n"
"{\n"
"	color: #fff;\n"
"	font: bold 60px;\n"
"	font-family: Garamond;\n"
"}\n"
"\n"
"#iconLabel\n"
"{\n"
"	color: rgba(0,0,0,30%);\n"
"}\n"
"\n"
"#buttonFrame\n"
"{\n"
"	background: qlineargradient(spread:pad, x1:0.38, y1:0, x2:0.722, y2:1, stop:0.6875 #30415D, stop:1 rgba(205, 205, 205, 255));\n"
"\n"
"	box-shadow: inset 0 0 0 1px #27496d;\n"
"	border: 1px solid white;\n"
"	border-radius: 15px;\n"
"	box-shadow: inset 0 0 0 1px #27496d;\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"#facultyButton\n"
"{\n"
"	color: #fff;\n"
"	text-shadow: -2px 2px #346392;\n"
""
                        "	background-color: #ff9664;\n"
"	box-shadow: inset 0 0 0 1px #27496d;\n"
"	border: 1px solid white;\n"
"	border-radius: 15px;\n"
"	font-family: Garamond;\n"
"	font: bold 40px;\n"
"\n"
"	background: qlineargradient(spread:pad, x1:0.50, y1:0, x2:0.5, y2:1, stop:0.75 #6496C8, stop:1 #346392);\n"
"}\n"
"\n"
"#facultyButton :hover\n"
"{\n"
"	box-shadow: inset 0 0 0 1px #27496d,0 5px 15px #193047;\n"
"}\n"
"\n"
"#facultyButton :active\n"
"{\n"
"	box-shadow: inset 0 0 0 1px #27496d,inset 0 5px 30px #193047;\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"#maintenanceButton\n"
"{\n"
"	color: #fff;\n"
"	text-shadow: -2px 2px #346392;\n"
"	background-color: #ff9664;\n"
"	box-shadow: inset 0 0 0 1px #27496d;\n"
"	border: 1px solid white;\n"
"	border-radius: 15px;\n"
"	font-family: Garamond;\n"
"	font: bold 30px;\n"
"\n"
"	background: qlineargradient(spread:pad, x1:0.50, y1:0, x2:0.5, y2:1, stop:0.75 #6496C8, stop:1 #346392);\n"
"}\n"
"\n"
"#maintenanceButton :hover\n"
"{\n"
"	box-shadow: inset 0 0 0 1px #27496d,0 5px 15px #193047;\n"
"}\n"
""
                        "\n"
"#maintenanceButton :active\n"
"{\n"
"	box-shadow: inset 0 0 0 1px #27496d,inset 0 5px 30px #193047;\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"#policeButton\n"
"{\n"
"	color: #fff;\n"
"	text-shadow: -2px 2px #346392;\n"
"	background-color: #ff9664;\n"
"	box-shadow: inset 0 0 0 1px #27496d;\n"
"	border: 1px solid white;\n"
"	border-radius: 15px;\n"
"	font-family: Garamond;\n"
"	font: bold 40px;\n"
"\n"
"	background: qlineargradient(spread:pad, x1:0.50, y1:0, x2:0.5, y2:1, stop:0.75 #6496C8, stop:1 #346392);\n"
"}\n"
"\n"
"#policeButton :hover\n"
"{\n"
"	box-shadow: inset 0 0 0 1px #27496d,0 5px 15px #193047;\n"
"}\n"
"\n"
"#policeButton:active\n"
"{\n"
"	box-shadow: inset 0 0 0 1px #27496d,inset 0 5px 30px #193047;\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"#serviceButton\n"
"{\n"
"	color: #fff;\n"
"	text-shadow: -2px 2px #346392;\n"
"	background-color: #ff9664;\n"
"	box-shadow: inset 0 0 0 1px #27496d;\n"
"	border: 1px solid white;\n"
"	border-radius: 15px;\n"
"	font-family: Garamond;\n"
"	font: bold 40px;\n"
"\n"
"	background: ql"
                        "ineargradient(spread:pad, x1:0.50, y1:0, x2:0.5, y2:1, stop:0.75 #6496C8, stop:1 #346392);\n"
"}\n"
"\n"
"#serviceButton :hover\n"
"{\n"
"	box-shadow: inset 0 0 0 1px #27496d,0 5px 15px #193047;\n"
"}\n"
"\n"
"#serviceButton :active\n"
"{\n"
"	box-shadow: inset 0 0 0 1px #27496d,inset 0 5px 30px #193047;\n"
"}\n"
""));
        mainFrame = new QFrame(EmployeeWindow);
        mainFrame->setObjectName(QStringLiteral("mainFrame"));
        mainFrame->setGeometry(QRect(-1, -1, 901, 601));
        mainFrame->setFrameShape(QFrame::StyledPanel);
        mainFrame->setFrameShadow(QFrame::Raised);
        textFrame = new QFrame(mainFrame);
        textFrame->setObjectName(QStringLiteral("textFrame"));
        textFrame->setGeometry(QRect(9, 9, 321, 581));
        textFrame->setFrameShape(QFrame::StyledPanel);
        textFrame->setFrameShadow(QFrame::Raised);
        titleLabel = new QLabel(textFrame);
        titleLabel->setObjectName(QStringLiteral("titleLabel"));
        titleLabel->setGeometry(QRect(16, 12, 291, 561));
        titleLabel->setAlignment(Qt::AlignCenter);
        titleLabel->setWordWrap(true);
        buttonFrame = new QFrame(mainFrame);
        buttonFrame->setObjectName(QStringLiteral("buttonFrame"));
        buttonFrame->setGeometry(QRect(339, 9, 551, 581));
        buttonFrame->setFrameShape(QFrame::StyledPanel);
        buttonFrame->setFrameShadow(QFrame::Raised);
        facultyButton = new QPushButton(buttonFrame);
        facultyButton->setObjectName(QStringLiteral("facultyButton"));
        facultyButton->setGeometry(QRect(10, 10, 261, 171));
        maintenanceButton = new QPushButton(buttonFrame);
        maintenanceButton->setObjectName(QStringLiteral("maintenanceButton"));
        maintenanceButton->setGeometry(QRect(10, 400, 261, 171));
        policeButton = new QPushButton(buttonFrame);
        policeButton->setObjectName(QStringLiteral("policeButton"));
        policeButton->setGeometry(QRect(10, 205, 261, 171));
        serviceButton = new QPushButton(buttonFrame);
        serviceButton->setObjectName(QStringLiteral("serviceButton"));
        serviceButton->setGeometry(QRect(284, 10, 261, 171));

        retranslateUi(EmployeeWindow);

        QMetaObject::connectSlotsByName(EmployeeWindow);
    } // setupUi

    void retranslateUi(QDialog *EmployeeWindow)
    {
        EmployeeWindow->setWindowTitle(QApplication::translate("EmployeeWindow", "Dialog", Q_NULLPTR));
        titleLabel->setText(QApplication::translate("EmployeeWindow", "SELECT THE  PARKING SPACE", Q_NULLPTR));
        facultyButton->setText(QApplication::translate("EmployeeWindow", "FACULTY", Q_NULLPTR));
        maintenanceButton->setText(QApplication::translate("EmployeeWindow", "MAINTENANCE", Q_NULLPTR));
        policeButton->setText(QApplication::translate("EmployeeWindow", "POLICE", Q_NULLPTR));
        serviceButton->setText(QApplication::translate("EmployeeWindow", "SERVICE", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class EmployeeWindow: public Ui_EmployeeWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EMPLOYEEWINDOW_H
