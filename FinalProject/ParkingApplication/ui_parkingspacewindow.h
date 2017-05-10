/********************************************************************************
** Form generated from reading UI file 'parkingspacewindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PARKINGSPACEWINDOW_H
#define UI_PARKINGSPACEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_parkingspacewindow
{
public:
    QFrame *mainFrame;
    QFrame *textFrame;
    QLabel *titleLabel;
    QLabel *titleLabel2;
    QFrame *infoFrame;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *startingTime;
    QLabel *parkingType;
    QLabel *licenseLabel;

    void setupUi(QDialog *parkingspacewindow)
    {
        if (parkingspacewindow->objectName().isEmpty())
            parkingspacewindow->setObjectName(QStringLiteral("parkingspacewindow"));
        parkingspacewindow->resize(900, 600);
        parkingspacewindow->setStyleSheet(QLatin1String("#mainFrame\n"
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
"#infoFrame\n"
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
"	font: bold 60px;\n"
"	font-family: Garamond;\n"
"}\n"
"\n"
"#titleLabel2\n"
"{\n"
"	color: #fff;\n"
"	font: bold 60px;\n"
"	font-family: Garamond;\n"
"}\n"
""
                        "\n"
"#titleLabel3\n"
"{\n"
"	color: #fff;\n"
"	font: bold 60px;\n"
"	font-family: Garamond;\n"
"}\n"
"\n"
"#label\n"
"{\n"
"	color: #fff;\n"
"	font: bold 25px;\n"
"	font-family: Garamond;\n"
"}\n"
"\n"
"#label_2\n"
"{\n"
"	color: #fff;\n"
"	font: bold 25px;\n"
"	font-family: Garamond;\n"
"}\n"
"\n"
"#label_3\n"
"{\n"
"	color: #fff;\n"
"	font: bold 25px;\n"
"	font-family: Garamond;\n"
"}\n"
"\n"
"#startingTime\n"
"{\n"
"	color: #fff;\n"
"	font: bold 25px;\n"
"	font-family: Garamond;\n"
"}\n"
"\n"
"#parkingType\n"
"{\n"
"	color: #fff;\n"
"	font: bold 25px;\n"
"	font-family: Garamond;;\n"
"}\n"
"\n"
"#licenseLabel\n"
"{\n"
"	color: #fff;\n"
"	font: bold 25px;\n"
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
"	border-ra"
                        "dius: 15px;\n"
"	QGraphicsDropShadowEffect: inset 0 0 0 1px #27496d;\n"
"}\n"
"\n"
"#regularButton\n"
"{\n"
"	color: #fff;\n"
"	QGraphicsDropShadowEffect: -2px 2px #346392;\n"
"	background-color: #ff9664;\n"
"	QGraphicsDropShadowEffect: inset 0 0 0 1px #27496d;\n"
"	border: 1px solid white;\n"
"	border-radius: 15px;\n"
"	font-family: Garamond;\n"
"	font: bold 45px;\n"
"\n"
"	background: qlineargradient(spread:pad, x1:0.5, y1:0, x2:0.5, y2:1, stop:0.6875 #438496, stop:1 rgba(205, 205, 205, 155));\n"
"}\n"
"\n"
"#regularButton :hover\n"
"{\n"
"	QGraphicsDropShadowEffect: inset 0 0 0 1px #27496d,0 5px 15px #193047;\n"
"}\n"
"\n"
"#regularButton :active\n"
"{\n"
"	QGraphicsDropShadowEffect: inset 0 0 0 1px #27496d,inset 0 5px 30px #193047;\n"
"}\n"
"\n"
"#carpoolButton\n"
"{\n"
"	color: #fff;\n"
"	QGraphicsDropShadowEffect: -2px 2px #346392;\n"
"	background-color: #ff9664;\n"
"	QGraphicsDropShadowEffect: inset 0 0 0 1px #27496d;\n"
"	border: 1px solid white;\n"
"	border-radius: 15px;\n"
"	font-family: Garamond;\n"
""
                        "	font: bold 45px;\n"
"\n"
"	background: qlineargradient(spread:pad, x1:0.5, y1:0, x2:0.5, y2:1, stop:0.6875 #438496, stop:1 rgba(205, 205, 205, 155));\n"
"}\n"
"\n"
"#carpoolButton :hover\n"
"{\n"
"	QGraphicsDropShadowEffect: inset 0 0 0 1px #27496d,0 5px 15px #193047;\n"
"}\n"
"\n"
"#carpoolButton :active\n"
"{\n"
"	QGraphicsDropShadowEffect: inset 0 0 0 1px #27496d,inset 0 5px 30px #193047;\n"
"}\n"
"\n"
"#handicapButton\n"
"{\n"
"	color: #fff;\n"
"	QGraphicsDropShadowEffect: -2px 2px #346392;\n"
"	background-color: #ff9664;\n"
"	QGraphicsDropShadowEffect: inset 0 0 0 1px #27496d;\n"
"	border: 1px solid white;\n"
"	border-radius: 15px;\n"
"	font-family: Garamond;\n"
"	font: bold 45px;\n"
"\n"
"	background: qlineargradient(spread:pad, x1:0.5, y1:0, x2:0.5, y2:1, stop:0.6875 #438496, stop:1 rgba(205, 205, 205, 155));\n"
"}\n"
"\n"
"#handicapButton :hover\n"
"{\n"
"	QGraphicsDropShadowEffect: inset 0 0 0 1px #27496d,0 5px 15px #193047;\n"
"}\n"
"\n"
"#handicapButton :active\n"
"{\n"
"	QGraphicsDropShadowEffect:"
                        " inset 0 0 0 1px #27496d,inset 0 5px 30px #193047;\n"
"}\n"
"\n"
"\n"
"#chargingButton\n"
"{\n"
"	color: #fff;\n"
"	QGraphicsDropShadowEffect: -2px 2px #346392;\n"
"	background-color: #ff9664;\n"
"	QGraphicsDropShadowEffect: inset 0 0 0 1px #27496d;\n"
"	border: 1px solid white;\n"
"	border-radius: 15px;\n"
"	font-family: Garamond;\n"
"	font: bold 45px;\n"
"\n"
"	background: qlineargradient(spread:pad, x1:0.5, y1:0, x2:0.5, y2:1, stop:0.6875 #438496, stop:1 rgba(205, 205, 205, 155));\n"
"}\n"
"\n"
"#chargingButton :hover\n"
"{\n"
"	QGraphicsDropShadowEffect: inset 0 0 0 1px #27496d,0 5px 15px #193047;\n"
"}\n"
"\n"
"#chargingButton :active\n"
"{\n"
"	QGraphicsDropShadowEffect: inset 0 0 0 1px #27496d,inset 0 5px 30px #193047;\n"
"}"));
        mainFrame = new QFrame(parkingspacewindow);
        mainFrame->setObjectName(QStringLiteral("mainFrame"));
        mainFrame->setGeometry(QRect(0, 0, 900, 600));
        mainFrame->setFrameShape(QFrame::StyledPanel);
        mainFrame->setFrameShadow(QFrame::Raised);
        textFrame = new QFrame(mainFrame);
        textFrame->setObjectName(QStringLiteral("textFrame"));
        textFrame->setGeometry(QRect(10, 10, 311, 581));
        textFrame->setFrameShape(QFrame::StyledPanel);
        textFrame->setFrameShadow(QFrame::Raised);
        titleLabel = new QLabel(textFrame);
        titleLabel->setObjectName(QStringLiteral("titleLabel"));
        titleLabel->setGeometry(QRect(50, 120, 321, 81));
        titleLabel2 = new QLabel(textFrame);
        titleLabel2->setObjectName(QStringLiteral("titleLabel2"));
        titleLabel2->setGeometry(QRect(20, 190, 281, 91));
        infoFrame = new QFrame(mainFrame);
        infoFrame->setObjectName(QStringLiteral("infoFrame"));
        infoFrame->setGeometry(QRect(330, 10, 561, 581));
        infoFrame->setFrameShape(QFrame::StyledPanel);
        infoFrame->setFrameShadow(QFrame::Raised);
        label = new QLabel(infoFrame);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(80, 160, 201, 41));
        label_2 = new QLabel(infoFrame);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(80, 200, 191, 61));
        label_3 = new QLabel(infoFrame);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(80, 250, 161, 61));
        startingTime = new QLabel(infoFrame);
        startingTime->setObjectName(QStringLiteral("startingTime"));
        startingTime->setGeometry(QRect(280, 170, 241, 21));
        QFont font;
        font.setFamily(QStringLiteral("Garamond"));
        font.setBold(true);
        font.setItalic(false);
        font.setWeight(75);
        startingTime->setFont(font);
        parkingType = new QLabel(infoFrame);
        parkingType->setObjectName(QStringLiteral("parkingType"));
        parkingType->setGeometry(QRect(280, 220, 241, 21));
        licenseLabel = new QLabel(infoFrame);
        licenseLabel->setObjectName(QStringLiteral("licenseLabel"));
        licenseLabel->setGeometry(QRect(280, 270, 241, 21));

        retranslateUi(parkingspacewindow);

        QMetaObject::connectSlotsByName(parkingspacewindow);
    } // setupUi

    void retranslateUi(QDialog *parkingspacewindow)
    {
        parkingspacewindow->setWindowTitle(QApplication::translate("parkingspacewindow", "Dialog", Q_NULLPTR));
        titleLabel->setText(QApplication::translate("parkingspacewindow", "Parking", Q_NULLPTR));
        titleLabel2->setText(QApplication::translate("parkingspacewindow", "Space Info", Q_NULLPTR));
        label->setText(QApplication::translate("parkingspacewindow", "Starting Time:", Q_NULLPTR));
        label_2->setText(QApplication::translate("parkingspacewindow", "Parking Type:", Q_NULLPTR));
        label_3->setText(QApplication::translate("parkingspacewindow", "License Plate:", Q_NULLPTR));
        startingTime->setText(QApplication::translate("parkingspacewindow", "TextLabel", Q_NULLPTR));
        parkingType->setText(QApplication::translate("parkingspacewindow", "TextLabel", Q_NULLPTR));
        licenseLabel->setText(QApplication::translate("parkingspacewindow", "TextLabel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class parkingspacewindow: public Ui_parkingspacewindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PARKINGSPACEWINDOW_H
