#-------------------------------------------------
#
# Project created by QtCreator 2019-09-02T18:26:12
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = pp_gui
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
    ../../common/sm2.c \
        main.cpp \
        mainwindow.cpp \
    ../../common/behavior.c \
    hal.c \
    threadbehavior.cpp \
    ../../common/chronometer.c \
    ../../common/sm1.c
    
HEADERS += \
    ../../common/sm2.h \
        mainwindow.h \
    ../../common/behavior.h \
    ../../common/datatypes.h \
    ../../common/hal.h \
    threadbehavior.h \
    ../../common/chronometer.h \
    ../../common/sm.h \
    ../../common/sm1.h

FORMS += \
        mainwindow.ui
