/********************************************************************************
** Form generated from reading UI file 'generalwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GENERALWINDOW_H
#define UI_GENERALWINDOW_H

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

class Ui_generalWindow
{
public:
    QFrame *mainFrame;
    QFrame *textFrame;
    QLabel *titleLabel;
    QFrame *buttonFrame;
    QPushButton *carpoolButton;
    QPushButton *handicapButton;
    QPushButton *chargingButton;
    QPushButton *regularButton;

    void setupUi(QDialog *generalWindow)
    {
        if (generalWindow->objectName().isEmpty())
            generalWindow->setObjectName(QStringLiteral("generalWindow"));
        generalWindow->resize(900, 600);
        generalWindow->setStyleSheet(QLatin1String("#mainFrame\n"
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
"	QGraphicsDropShadowEffect: inset 0 0 0 1px #27496d;\n"
"	border: 1px solid white;\n"
"	border-radius: 15px;\n"
"	QGraphicsDropShadowEffect: inset 0 0 0 1px #27496d;\n"
"}\n"
"\n"
"#regularButton\n"
"{\n"
"	color:"
                        " #fff;\n"
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
"	font: bold 45px;\n"
"\n"
"	background: qlineargradient(spread:pad, x1:0.5, y1:0, x2:0.5, y2:1, stop:0.6875 #43849"
                        "6, stop:1 rgba(205, 205, 205, 155));\n"
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
"	QGraphicsDropShadowEffect: inset 0 0 0 1px #27496d,inset 0 5px 30px #193047;\n"
"}\n"
"\n"
"\n"
"#chargingButton\n"
"{\n"
"	color: #fff;\n"
""
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
        mainFrame = new QFrame(generalWindow);
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
        titleLabel->setGeometry(QRect(20, 10, 281, 551));
        titleLabel->setAlignment(Qt::AlignCenter);
        titleLabel->setWordWrap(true);
        buttonFrame = new QFrame(mainFrame);
        buttonFrame->setObjectName(QStringLiteral("buttonFrame"));
        buttonFrame->setGeometry(QRect(340, 10, 551, 581));
        buttonFrame->setFrameShape(QFrame::StyledPanel);
        buttonFrame->setFrameShadow(QFrame::Raised);
        carpoolButton = new QPushButton(buttonFrame);
        carpoolButton->setObjectName(QStringLiteral("carpoolButton"));
        carpoolButton->setGeometry(QRect(284, 10, 261, 171));
        handicapButton = new QPushButton(buttonFrame);
        handicapButton->setObjectName(QStringLiteral("handicapButton"));
        handicapButton->setGeometry(QRect(10, 205, 261, 171));
        chargingButton = new QPushButton(buttonFrame);
        chargingButton->setObjectName(QStringLiteral("chargingButton"));
        chargingButton->setGeometry(QRect(10, 400, 261, 171));
        regularButton = new QPushButton(buttonFrame);
        regularButton->setObjectName(QStringLiteral("regularButton"));
        regularButton->setGeometry(QRect(10, 10, 261, 171));

        retranslateUi(generalWindow);

        QMetaObject::connectSlotsByName(generalWindow);
    } // setupUi

    void retranslateUi(QDialog *generalWindow)
    {
        generalWindow->setWindowTitle(QApplication::translate("generalWindow", "Dialog", Q_NULLPTR));
        titleLabel->setText(QApplication::translate("generalWindow", "SELECT THE PARKING SPACE", Q_NULLPTR));
        carpoolButton->setText(QApplication::translate("generalWindow", "CARPOOL", Q_NULLPTR));
        handicapButton->setText(QApplication::translate("generalWindow", "HANDICAP", Q_NULLPTR));
        chargingButton->setText(QApplication::translate("generalWindow", "CHARGING\n"
"STATION", Q_NULLPTR));
        regularButton->setText(QApplication::translate("generalWindow", "REGULAR", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class generalWindow: public Ui_generalWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GENERALWINDOW_H
