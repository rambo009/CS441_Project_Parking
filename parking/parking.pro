#-------------------------------------------------
#
# Project created by QtCreator 2017-02-17T16:29:42
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = parking
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
    generalwindow.cpp \
    employeewindow.cpp \
    assignmentwindow.cpp \
    handicapwindow.cpp \
    carpoolwindow.cpp \
    carpoolparking.cpp \
    chargingstationparking.cpp \
    facultyparking.cpp \
    generalparking.cpp \
    handicapparking.cpp \
    lot.cpp \
    lotmanager.cpp \
    parking.cpp \
    parkingrecord.cpp \
    priorityqueue_ht.cpp

HEADERS  += mainwindow.h \
    generalwindow.h \
    employeewindow.h \
    assignmentwindow.h \
    handicapwindow.h \
    carpoolwindow.h \
    carpoolparking.h \
    chargingstationparking.h \
    facultyparking.h \
    generalparking.h \
    handicapparking.h \
    lot.h \
    lotmanager.h \
    parking.h \
    parkingcontainer.h \
    parkingrecord.h \
    priorityqueue_ht.h

FORMS    += mainwindow.ui \
    generalwindow.ui \
    employeewindow.ui \
    assignmentwindow.ui \
    handicapwindow.ui \
    carpoolwindow.ui
