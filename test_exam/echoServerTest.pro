QT += testlib core network
QT -= gui

CONFIG += qt console warn_on depend_includepath testcase
CONFIG -= app_bundle

TEMPLATE = app

SOURCES +=  tst_functions.cpp \
    ../exam/functions.cpp \
    ../exam/mytcpserver-ex.cpp

HEADERS += \
    ../exam/functions.h \
    ../exam/mytcpserver-ex.h
