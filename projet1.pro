TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    class/complexe.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    class/complexe.h

OTHER_FILES += \
    .gitignore

