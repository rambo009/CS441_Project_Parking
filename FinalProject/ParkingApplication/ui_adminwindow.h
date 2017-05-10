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
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_adminWindow
{
public:
    QFrame *mainFrame;
    QFrame *textFrame;
    QLabel *titleLabel;
    QFrame *buttonFrame;
    QPushButton *pushButton;
    QLineEdit *lineLetterLocation;
    QLabel *labelLetterLocation;
    QLineEdit *lineLotName;
    QLabel *labelLotName;
    QLabel *labelNumberLocation;
    QLineEdit *lineNumberLocation;
    QLabel *labelFloorLocation;
    QLineEdit *lineFloorLocation;

    void setupUi(QDialog *adminWindow)
    {
        if (adminWindow->objectName().isEmpty())
            adminWindow->setObjectName(QStringLiteral("adminWindow"));
        adminWindow->resize(900, 600);
        adminWindow->setStyleSheet(QLatin1String("#mainFrame\n"
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
"	border"
                        ": 1px solid white;\n"
"	border-radius: 15px;\n"
"	box-shadow: inset 0 0 0 1px #27496d;\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"#pushButton\n"
"{\n"
"	color: #fff;\n"
"	text-shadow: -2px 2px #346392;\n"
"	background-color: #ff9664;\n"
"	box-shadow: inset 0 0 0 1px #27496d;\n"
"	border: 1px solid white;\n"
"	border-radius: 15px;\n"
"	font-family: Garamond;\n"
"	font: bold 45px;\n"
"\n"
"	background: qlineargradient(spread:pad, x1:0.5, y1:0, x2:0.5, y2:1, stop:0.6875 #438496, stop:1 rgba(205, 205, 205, 155));\n"
"}\n"
"\n"
"#Button :hover\n"
"{\n"
"	box-shadow: inset 0 0 0 1px #27496d,0 5px 15px #193047;\n"
"}\n"
"\n"
"#Button :active\n"
"{\n"
"	box-shadow: inset 0 0 0 1px #27496d,inset 0 5px 30px #193047;\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"#Button_2\n"
"{\n"
"	color: #fff;\n"
"	text-shadow: -2px 2px #346392;\n"
"	background-color: #ff9664;\n"
"	box-shadow: inset 0 0 0 1px #27496d;\n"
"	border: 1px solid white;\n"
"	border-radius: 15px;\n"
"	font-family: Garamond;\n"
"	font: bold 45px;\n"
"\n"
"	background: qlineargradient(spre"
                        "ad:pad, x1:0.5, y1:0, x2:0.5, y2:1, stop:0.6875 #438496, stop:1 rgba(205, 205, 205, 155));\n"
"}\n"
"\n"
"#Button_2 :hover\n"
"{\n"
"	box-shadow: inset 0 0 0 1px #27496d,0 5px 15px #193047;\n"
"}\n"
"\n"
"#Button_2 :active\n"
"{\n"
"	box-shadow: inset 0 0 0 1px #27496d,inset 0 5px 30px #193047;\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"#Button_3\n"
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
"	background: qlineargradient(spread:pad, x1:0.5, y1:0, x2:0.5, y2:1, stop:0.6875 #438496, stop:1 rgba(205, 205, 205, 155));\n"
"}\n"
"\n"
"#Button_3 :hover\n"
"{\n"
"	box-shadow: inset 0 0 0 1px #27496d,0 5px 15px #193047;\n"
"}\n"
"\n"
"#Button_3 :active\n"
"{\n"
"	box-shadow: inset 0 0 0 1px #27496d,inset 0 5px 30px #193047;\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"#Button_4\n"
"{\n"
"	color: #fff;\n"
"	text-shadow: -2px 2px #346392;\n"
"	backgr"
                        "ound-color: #ff9664;\n"
"	box-shadow: inset 0 0 0 1px #27496d;\n"
"	border: 1px solid white;\n"
"	border-radius: 15px;\n"
"	font-family: Garamond;\n"
"	font: bold 45px;\n"
"\n"
"	background: qlineargradient(spread:pad, x1:0.5, y1:0, x2:0.5, y2:1, stop:0.6875 #438496, stop:1 rgba(205, 205, 205, 155));\n"
"}\n"
"\n"
"#Button_4 :hover\n"
"{\n"
"	box-shadow: inset 0 0 0 1px #27496d,0 5px 15px #193047;\n"
"}\n"
"\n"
"#Button_4 :active\n"
"{\n"
"	box-shadow: inset 0 0 0 1px #27496d,inset 0 5px 30px #193047;\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"#Button_5\n"
"{\n"
"	color: #fff;\n"
"	text-shadow: -2px 2px #346392;\n"
"	background-color: #ff9664;\n"
"	box-shadow: inset 0 0 0 1px #27496d;\n"
"	border: 1px solid white;\n"
"	border-radius: 15px;\n"
"	font-family: Garamond;\n"
"	font: bold 45px;\n"
"\n"
"	background: qlineargradient(spread:pad, x1:0.5, y1:0, x2:0.5, y2:1, stop:0.6875 #438496, stop:1 rgba(205, 205, 205, 155));\n"
"}\n"
"\n"
"#Button_5 :hover\n"
"{\n"
"	box-shadow: inset 0 0 0 1px #27496d,0 5px 15px #193047;\n"
"}\n"
""
                        "\n"
"#Button_5:active\n"
"{\n"
"	box-shadow: inset 0 0 0 1px #27496d,inset 0 5px 30px #193047;\n"
"}\n"
""));
        mainFrame = new QFrame(adminWindow);
        mainFrame->setObjectName(QStringLiteral("mainFrame"));
        mainFrame->setGeometry(QRect(0, 0, 901, 601));
        mainFrame->setFrameShape(QFrame::StyledPanel);
        mainFrame->setFrameShadow(QFrame::Raised);
        textFrame = new QFrame(mainFrame);
        textFrame->setObjectName(QStringLiteral("textFrame"));
        textFrame->setGeometry(QRect(9, 9, 321, 581));
        textFrame->setFrameShape(QFrame::StyledPanel);
        textFrame->setFrameShadow(QFrame::Raised);
        titleLabel = new QLabel(textFrame);
        titleLabel->setObjectName(QStringLiteral("titleLabel"));
        titleLabel->setGeometry(QRect(6, 12, 311, 561));
        titleLabel->setScaledContents(false);
        titleLabel->setAlignment(Qt::AlignCenter);
        titleLabel->setWordWrap(true);
        buttonFrame = new QFrame(mainFrame);
        buttonFrame->setObjectName(QStringLiteral("buttonFrame"));
        buttonFrame->setGeometry(QRect(339, 9, 551, 581));
        buttonFrame->setFrameShape(QFrame::StyledPanel);
        buttonFrame->setFrameShadow(QFrame::Raised);
        pushButton = new QPushButton(buttonFrame);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(150, 360, 221, 61));
        lineLetterLocation = new QLineEdit(buttonFrame);
        lineLetterLocation->setObjectName(QStringLiteral("lineLetterLocation"));
        lineLetterLocation->setGeometry(QRect(210, 160, 113, 20));
        labelLetterLocation = new QLabel(buttonFrame);
        labelLetterLocation->setObjectName(QStringLiteral("labelLetterLocation"));
        labelLetterLocation->setGeometry(QRect(210, 120, 221, 31));
        QFont font;
        font.setFamily(QStringLiteral("Garamond"));
        font.setBold(true);
        font.setItalic(false);
        font.setWeight(75);
        labelLetterLocation->setFont(font);
        lineLotName = new QLineEdit(buttonFrame);
        lineLotName->setObjectName(QStringLiteral("lineLotName"));
        lineLotName->setGeometry(QRect(210, 90, 113, 20));
        labelLotName = new QLabel(buttonFrame);
        labelLotName->setObjectName(QStringLiteral("labelLotName"));
        labelLotName->setGeometry(QRect(210, 60, 161, 31));
        labelLotName->setFont(font);
        labelLotName->setAutoFillBackground(false);
        labelNumberLocation = new QLabel(buttonFrame);
        labelNumberLocation->setObjectName(QStringLiteral("labelNumberLocation"));
        labelNumberLocation->setGeometry(QRect(210, 190, 251, 31));
        QFont font1;
        font1.setFamily(QStringLiteral("Garamond"));
        font1.setPointSize(18);
        font1.setBold(true);
        font1.setItalic(false);
        font1.setWeight(75);
        labelNumberLocation->setFont(font1);
        lineNumberLocation = new QLineEdit(buttonFrame);
        lineNumberLocation->setObjectName(QStringLiteral("lineNumberLocation"));
        lineNumberLocation->setGeometry(QRect(210, 230, 113, 20));
        labelFloorLocation = new QLabel(buttonFrame);
        labelFloorLocation->setObjectName(QStringLiteral("labelFloorLocation"));
        labelFloorLocation->setGeometry(QRect(210, 270, 251, 31));
        QFont font2;
        font2.setFamily(QStringLiteral("Garamond"));
        font2.setPointSize(20);
        font2.setBold(true);
        font2.setItalic(false);
        font2.setWeight(75);
        labelFloorLocation->setFont(font2);
        lineFloorLocation = new QLineEdit(buttonFrame);
        lineFloorLocation->setObjectName(QStringLiteral("lineFloorLocation"));
        lineFloorLocation->setGeometry(QRect(210, 310, 113, 20));
        QWidget::setTabOrder(lineLotName, lineLetterLocation);
        QWidget::setTabOrder(lineLetterLocation, lineNumberLocation);
        QWidget::setTabOrder(lineNumberLocation, lineFloorLocation);
        QWidget::setTabOrder(lineFloorLocation, pushButton);

        retranslateUi(adminWindow);

        QMetaObject::connectSlotsByName(adminWindow);
    } // setupUi

    void retranslateUi(QDialog *adminWindow)
    {
        adminWindow->setWindowTitle(QApplication::translate("adminWindow", "Dialog", Q_NULLPTR));
        titleLabel->setText(QApplication::translate("adminWindow", "ADMIN CONTROL", Q_NULLPTR));
        pushButton->setText(QApplication::translate("adminWindow", "Go", Q_NULLPTR));
        labelLetterLocation->setText(QApplication::translate("adminWindow", "<html><head/><body><p><span style=\" font-size:18pt; color:#ffffff;\">Letter Location</span></p></body></html>", Q_NULLPTR));
        labelLotName->setText(QApplication::translate("adminWindow", "<html><head/><body><p><span style=\" font-size:18pt; color:#ffffff;\">Enter Lot:</span></p></body></html>", Q_NULLPTR));
        labelNumberLocation->setText(QApplication::translate("adminWindow", "<html><head/><body><p><span style=\" color:#ffffff;\">Number Location</span></p></body></html>", Q_NULLPTR));
        labelFloorLocation->setText(QApplication::translate("adminWindow", "<html><head/><body><p><span style=\" color:#ffffff;\">Floor Location</span></p></body></html>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class adminWindow: public Ui_adminWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINWINDOW_H
