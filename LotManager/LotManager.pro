QT += core sql widgets
//QT -= gui

CONFIG += c++11

TARGET = LotManager
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    lotmanager.cpp \
    parkingrecord.cpp \
    singleton.cpp \
    regularparking.cpp \
    handicapparking.cpp \
    chargingparking.cpp \
    carpoolparking.cpp \
    facultyparking.cpp \
    serviceparking.cpp \
    maintenanceparking.cpp \
    policeparking.cpp \
    parkingtype.cpp \
    database.cpp

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

HEADERS += \
    lotmanager.h \
    parkingrecord.h \
    singleton.h \
    regularparking.h \
    handicapparking.h \
    chargingparking.h \
    carpoolparking.h \
    facultyparking.h \
    serviceparking.h \
    maintenanceparking.h \
    policeparking.h \
    parkingtype.h \
    database.h \
    macros.h
