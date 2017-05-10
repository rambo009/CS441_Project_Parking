/********************************************************************************
** Form generated from reading UI file 'assignmentwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ASSIGNMENTWINDOW_H
#define UI_ASSIGNMENTWINDOW_H

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

class Ui_assignmentWindow
{
public:
    QFrame *mainFrame;
    QFrame *textFrame;
    QLabel *titleLabel;
    QLabel *assignmentLabel;
    QFrame *buttonFrame;
    QPushButton *pushButton;

    void setupUi(QDialog *assignmentWindow)
    {
        if (assignmentWindow->objectName().isEmpty())
            assignmentWindow->setObjectName(QStringLiteral("assignmentWindow"));
        assignmentWindow->resize(900, 600);
        assignmentWindow->setStyleSheet(QLatin1String("#mainFrame\n"
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
"#assignmentLabel\n"
"{\n"
"	color: #fff;\n"
"	font: bold 50px;\n"
"	font-family: Garamond;\n"
"}\n"
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
"	back"
                        "ground: qlineargradient(spread:pad, x1:0.5, y1:0, x2:0.5, y2:1, stop:0.6875 #438496, stop:1 rgba(205, 205, 205, 155));\n"
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
"	color: #fff;\n"
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
"	border: inset 0 0 0 1px #27496d,inset 0 5px 30px #193047;"
                        "\n"
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
"	QGraphicsDropShadowEffect: inset 0 0 0 1px #27496d,0 5px 15px #193047;\n"
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
"	background: qlineargradient(spread:pad, x1:0.50, "
                        "y1:0, x2:0.5, y2:1, stop:0.75 #0B3C5D, stop:1 #346392);\n"
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
"\n"
""));
        mainFrame = new QFrame(assignmentWindow);
        mainFrame->setObjectName(QStringLiteral("mainFrame"));
        mainFrame->setGeometry(QRect(-1, -1, 901, 601));
        mainFrame->setFrameShape(QFrame::StyledPanel);
        mainFrame->setFrameShadow(QFrame::Raised);
        textFrame = new QFrame(mainFrame);
        textFrame->setObjectName(QStringLiteral("textFrame"));
        textFrame->setGeometry(QRect(9, 9, 881, 421));
        textFrame->setFrameShape(QFrame::StyledPanel);
        textFrame->setFrameShadow(QFrame::Raised);
        titleLabel = new QLabel(textFrame);
        titleLabel->setObjectName(QStringLiteral("titleLabel"));
        titleLabel->setGeometry(QRect(16, 10, 851, 81));
        titleLabel->setAlignment(Qt::AlignCenter);
        assignmentLabel = new QLabel(textFrame);
        assignmentLabel->setObjectName(QStringLiteral("assignmentLabel"));
        assignmentLabel->setGeometry(QRect(210, 160, 361, 81));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(assignmentLabel->sizePolicy().hasHeightForWidth());
        assignmentLabel->setSizePolicy(sizePolicy);
        assignmentLabel->setAlignment(Qt::AlignCenter);
        buttonFrame = new QFrame(mainFrame);
        buttonFrame->setObjectName(QStringLiteral("buttonFrame"));
        buttonFrame->setGeometry(QRect(9, 439, 881, 151));
        buttonFrame->setFrameShape(QFrame::StyledPanel);
        buttonFrame->setFrameShadow(QFrame::Raised);
        pushButton = new QPushButton(buttonFrame);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(14, 12, 231, 121));
        QFont font;
        font.setFamily(QStringLiteral("Garamond"));
        font.setBold(true);
        font.setItalic(false);
        font.setWeight(75);
        pushButton->setFont(font);

        retranslateUi(assignmentWindow);

        QMetaObject::connectSlotsByName(assignmentWindow);
    } // setupUi

    void retranslateUi(QDialog *assignmentWindow)
    {
        assignmentWindow->setWindowTitle(QApplication::translate("assignmentWindow", "Dialog", Q_NULLPTR));
        titleLabel->setText(QApplication::translate("assignmentWindow", "PLEASE PARK IN:", Q_NULLPTR));
        assignmentLabel->setText(QApplication::translate("assignmentWindow", "TextLabel", Q_NULLPTR));
        pushButton->setText(QApplication::translate("assignmentWindow", "Main Menu", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class assignmentWindow: public Ui_assignmentWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ASSIGNMENTWINDOW_H
