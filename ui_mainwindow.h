/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QFrame *mainFrame;
    QFrame *textFrame;
    QLabel *titleLabel;
    QLabel *label;
    QFrame *buttonFrame;
    QPushButton *adminWindowButton;
    QPushButton *employeeButton;
    QPushButton *generalButton;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(900, 600);
        MainWindow->setStyleSheet(QLatin1String("#mainFrame\n"
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
"	QGraphicsDropShadowEffect: inset 0 0 0 1px #27496d;\n"
"	border: 1px solid white;\n"
"	border-radius: 15px;\n"
"	QGraphicsDropShadowEffect: inset 0 0 0 1px #27496d;\n"
"}\n"
"\n"
"#titleLabel\n"
"{\n"
"	color: #fff;\n"
"	font: bold 75px;\n"
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
"	QGraphicsDropShadowEffect: inset 0 0 0 1px #27496d;\n"
"	border: 1px solid white;\n"
"	border-radius: 15px;\n"
"	QGraphicsDropShadowEffect: inset 0 0 0 1px #27496d;\n"
"}\n"
"\n"
"#generalButton\n"
"{\n"
"	color:"
                        " #fff;\n"
"	border: -2px 2px #346392;\n"
"	background-color: #ff9664;\n"
"	text-border: inset 0 0 0 1px #27496d;\n"
"	border: 1px solid white;\n"
"	border-radius: 15px;\n"
"	font-family: Garamond;\n"
"	font: bold 45px;\n"
"\n"
"	background: qlineargradient(spread:pad, x1:0.5, y1:0, x2:0.5, y2:1, stop:0.6875 #438496, stop:1 rgba(205, 205, 205, 155));\n"
"}\n"
"\n"
"Qpushbutton:hover\n"
"{\n"
"	font: bold 35px;\n"
"}\n"
"\n"
"#generalButton :active\n"
"{\n"
"	border: inset 0 0 0 1px #27496d,inset 0 5px 30px #193047;\n"
"}\n"
"\n"
"#employeeButton\n"
"{\n"
"	color: #fff;\n"
"	QGraphicsDropShadowEffect: -2px 2px #346392;\n"
"	background-color: #ff9664;\n"
"	QGraphicsDropShadowEffect: inset 0 0 0 1px #27496d;\n"
"	border: 1px solid white;\n"
"	border-radius: 15px;\n"
"	font-family: Garamond;\n"
"	font: bold 40px;\n"
"\n"
"	background: qlineargradient(spread:pad, x1:0.50, y1:0, x2:0.5, y2:1, stop:0.75 #6496C8, stop:1 #346392);\n"
"}\n"
"\n"
"#employeeButton :hover\n"
"{\n"
"	QGraphicsDropShadowEffect: inset 0 0 0 1p"
                        "x #27496d,0 5px 15px #193047;\n"
"}\n"
"\n"
"#employeeButton :active\n"
"{\n"
"	QGraphicsDropShadowEffect: inset 0 0 0 1px #27496d,inset 0 5px 30px #193047;\n"
"}\n"
"\n"
"#adminWindowButton\n"
"{\n"
"	color: #fff;\n"
"	QGraphicsDropShadowEffect: -2px 2px #346392;\n"
"	background-color: #ff9664;\n"
"	QGraphicsDropShadowEffect: inset 0 0 0 1px #27496d;\n"
"	border: 1px solid white;\n"
"	border-radius: 15px;\n"
"	font-family: Garamond;\n"
"	font: bold 43px;\n"
"\n"
"	background: qlineargradient(spread:pad, x1:0.50, y1:0, x2:0.5, y2:1, stop:0.75 #0B3C5D, stop:1 #346392);\n"
"}\n"
"\n"
"#adminWindowButton :hover\n"
"{\n"
"	QGraphicsDropShadowEffect: inset 0 0 0 1px #27496d,0 5px 15px #193047;\n"
"}\n"
"\n"
"#adminWindowButton :active\n"
"{\n"
"	QGraphicsDropShadowEffect: inset 0 0 0 1px #27496d,inset 0 5px 30px #193047;\n"
"}\n"
""));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        centralWidget->setStyleSheet(QStringLiteral(""));
        mainFrame = new QFrame(centralWidget);
        mainFrame->setObjectName(QStringLiteral("mainFrame"));
        mainFrame->setGeometry(QRect(-1, -11, 901, 581));
        mainFrame->setStyleSheet(QStringLiteral(""));
        mainFrame->setFrameShape(QFrame::StyledPanel);
        mainFrame->setFrameShadow(QFrame::Raised);
        textFrame = new QFrame(mainFrame);
        textFrame->setObjectName(QStringLiteral("textFrame"));
        textFrame->setGeometry(QRect(9, 19, 551, 531));
        textFrame->setFrameShape(QFrame::StyledPanel);
        textFrame->setFrameShadow(QFrame::Raised);
        titleLabel = new QLabel(textFrame);
        titleLabel->setObjectName(QStringLiteral("titleLabel"));
        titleLabel->setGeometry(QRect(10, 20, 531, 181));
        titleLabel->setAlignment(Qt::AlignCenter);
        titleLabel->setWordWrap(true);
        label = new QLabel(textFrame);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(90, 220, 381, 291));
        label->setPixmap(QPixmap(QString::fromUtf8("Cougar Style.png")));
        label->setScaledContents(true);
        buttonFrame = new QFrame(mainFrame);
        buttonFrame->setObjectName(QStringLiteral("buttonFrame"));
        buttonFrame->setGeometry(QRect(569, 19, 321, 531));
        buttonFrame->setStyleSheet(QStringLiteral(""));
        buttonFrame->setFrameShape(QFrame::StyledPanel);
        buttonFrame->setFrameShadow(QFrame::Raised);
        adminWindowButton = new QPushButton(buttonFrame);
        adminWindowButton->setObjectName(QStringLiteral("adminWindowButton"));
        adminWindowButton->setGeometry(QRect(10, 15, 300, 155));
        employeeButton = new QPushButton(buttonFrame);
        employeeButton->setObjectName(QStringLiteral("employeeButton"));
        employeeButton->setGeometry(QRect(10, 190, 300, 155));
        generalButton = new QPushButton(buttonFrame);
        generalButton->setObjectName(QStringLiteral("generalButton"));
        generalButton->setGeometry(QRect(10, 365, 300, 155));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 900, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        titleLabel->setText(QApplication::translate("MainWindow", "Welcome to PNBS Parking", Q_NULLPTR));
        label->setText(QString());
        adminWindowButton->setText(QApplication::translate("MainWindow", "ADMIN", Q_NULLPTR));
        employeeButton->setText(QApplication::translate("MainWindow", "EMPLOYEE", Q_NULLPTR));
        generalButton->setText(QApplication::translate("MainWindow", "GENERAL", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
