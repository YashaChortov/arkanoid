QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

SOURCES += \
    game.cpp \
    gamescene.cpp \
    level.cpp \
    main.cpp \
    randomlevel.cpp \
    view.cpp

HEADERS += \
    game.h \
    gamescene.h \
    level.h \
    randomlevel.h \
    view.h

RESOURCES += \
    resource.qrc
