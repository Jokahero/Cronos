#-------------------------------------------------
# AlertMe
#-------------------------------------------------

QT += core gui
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = AlertMe
TEMPLATE = app

INCLUDEPATH = inc ui/include inc/model 
UI_DIR = ui/include
OBJECTS_DIR = gen 
MOC_DIR = gen 

QMAKE_CLEAN = gen/* ui/include/*

SOURCES +=

HEADERS  += 

FORMS    +=
