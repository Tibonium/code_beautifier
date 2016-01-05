#-------------------------------------------------
#
# Project created by QtCreator 2015-12-29T18:21:06
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = code_beautifier
TEMPLATE = app


SOURCES += main.cpp\
        code_beautifier.cpp \
    language/javascript.cpp

HEADERS  += code_beautifier.h \
    language/javascript.h

FORMS    += code_beautifier.ui
