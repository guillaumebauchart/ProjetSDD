TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    complexe.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    complexe.h

OTHER_FILES += \
    .gitignore

