TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    soda.cpp \
    vendingmachine.cpp \
    owner.cpp

HEADERS += \
    soda.h \
    vendingmachine.h \
    owner.h
