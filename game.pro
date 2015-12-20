#-------------------------------------------------
#
# Project created by QtCreator 2015-12-18T23:08:32
#
#-------------------------------------------------

QT       += core

QT       -= gui

TARGET = game
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app


SOURCES += main.cpp \
    monsters.cpp \
    player.cpp \
    items.cpp

HEADERS += \
    monsters.h \
    player.h \
    items.h

OTHER_FILES += \
    items.jor \
    save.jor \
    monsters.jor
