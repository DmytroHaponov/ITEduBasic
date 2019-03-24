TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        main.cpp \
    rectangle.cpp \
    triangle.cpp \
    square.cpp \
    figure.cpp

HEADERS += \
    figure.h \
    rectangle.h \
    square.h \
    triangle.h
