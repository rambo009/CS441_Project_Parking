/********************************************************************************
** Form generated from reading UI file 'adminwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINWINDOW_H
#define UI_ADMINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AdminWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QTableWidget *tableWidget;
    QRadioButton *parkingLotTable;
    QRadioButton *transactionTable;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *AdminWindow)
    {
        if (AdminWindow->objectName().isEmpty())
            AdminWindow->setObjectName(QStringLiteral("AdminWindow"));
        AdminWindow->resize(1148, 621);
        centralWidget = new QWidget(AdminWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        tableWidget = new QTableWidget(centralWidget);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));

        verticalLayout->addWidget(tableWidget);

        parkingLotTable = new QRadioButton(centralWidget);
        parkingLotTable->setObjectName(QStringLiteral("parkingLotTable"));
        parkingLotTable->setChecked(true);

        verticalLayout->addWidget(parkingLotTable);

        transactionTable = new QRadioButton(centralWidget);
        transactionTable->setObjectName(QStringLiteral("transactionTable"));

        verticalLayout->addWidget(transactionTable);

        AdminWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(AdminWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1148, 26));
        AdminWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(AdminWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        AdminWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(AdminWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        AdminWindow->setStatusBar(statusBar);

        retranslateUi(AdminWindow);

        QMetaObject::connectSlotsByName(AdminWindow);
    } // setupUi

    void retranslateUi(QMainWindow *AdminWindow)
    {
        AdminWindow->setWindowTitle(QApplication::translate("AdminWindow", "AdminWindow", Q_NULLPTR));
        parkingLotTable->setText(QApplication::translate("AdminWindow", "Parking Lot Table", Q_NULLPTR));
        transactionTable->setText(QApplication::translate("AdminWindow", "Transaction Table", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class AdminWindow: public Ui_AdminWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINWINDOW_H
