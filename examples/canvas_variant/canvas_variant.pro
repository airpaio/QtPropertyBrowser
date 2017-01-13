TEMPLATE = app
QT += widgets
DEPENDPATH += .
INCLUDEPATH += .

include(../../src/qtpropertybrowser.pri)
# Input
HEADERS += qtcanvas.h mainwindow.h
SOURCES += qtcanvas.cpp mainwindow.cpp main.cpp

