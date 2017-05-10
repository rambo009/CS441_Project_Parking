#-------------------------------------------------
#
# Project created by QtCreator 2017-04-04T21:27:56
#
#-------------------------------------------------

QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = ParkingApp4
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += main.cpp\
        mainwindow.cpp \
    employeewindow.cpp \
    generalwindow.cpp \
    adminwindow.cpp \
    assignmentwindow.cpp \
    carpoolparking.cpp \
    chargingparking.cpp \
    database.cpp \
    facultyparking.cpp \
    handicapparking.cpp \
    lotmanager.cpp \
    maintenanceparking.cpp \
    parkingrecord.cpp \
    parkingtype.cpp \
    policeparking.cpp \
    regularparking.cpp \
    serviceparking.cpp \
    singleton.cpp \
    databaseinitializationfilereader.cpp \
    parkingspacewindow.cpp \
    parkinglocationqueryrecord.cpp \
    databaseerror.cpp

HEADERS  += mainwindow.h \
    employeewindow.h \
    generalwindow.h \
    adminwindow.h \
    assignmentwindow.h \
    carpoolparking.h \
    chargingparking.h \
    database.h \
    facultyparking.h \
    handicapparking.h \
    lotmanager.h \
    macros.h \
    maintenanceparking.h \
    parkingrecord.h \
    parkingtype.h \
    policeparking.h \
    regularparking.h \
    serviceparking.h \
    singleton.h \
    databaseinitializationfilereader.h \
    parkingspacewindow.h \
    parkinglocationqueryrecord.h \
    databaseerror.h

FORMS    += mainwindow.ui \
    employeewindow.ui \
    generalwindow.ui \
    adminwindow.ui \
    assignmentwindow.ui \
    parkingspacewindow.ui

DISTFILES += \
    ParkingApp4.pro.user \
    ParkingApp4.pro.user.e0bc731 \
    Cougar Style.png \
    PBS_Logo_Transparent.png \
    peanut butter.png \
    initialization.txt \
    Cougar Style.png \
    peanut butter.png \
    LotManager.pro.user \
    Cougar Style.png \
    peanut butter.png

PRO_PATH=$$PWD
