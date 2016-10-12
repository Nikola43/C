TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    SerialClass.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    SerialClass.h

