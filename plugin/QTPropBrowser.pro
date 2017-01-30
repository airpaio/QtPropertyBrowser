TEMPLATE    = lib
QT          += designer
CONFIG      += plugin release
INCLUDEPATH += ../src
unix:LIBS   += -L../lib/libQtSolutions_PropertyBrowser-head.so
DEFINES     += QTPROPBROWSER_LIBRARY
HEADERS     = ../src/qtpropertybrowser.h \
              ../src/qtbuttonpropertybrowser.h \
              ../src/qtgroupboxpropertybrowser.h \
              ../src/qttreepropertybrowser.h \
              ../src/objectcontroller.h \
              ../src/qteditorfactory.h \
              ../src/qtpropertybrowserutils_p.h \
              ../src/qtpropertymanager.h \
              ../src/qtvariantproperty.h \
              qtbuttonpropertybrowserplugin.h \
              qtgroupboxpropertybrowserplugin.h \
              qttreepropertybrowserplugin.h \
              qtpropertybrowsercollection.h \
              QTPropBrowser_global.h
SOURCES     = ../src/qtpropertybrowser.cpp \
              ../src/qtbuttonpropertybrowser.cpp \
              ../src/qtgroupboxpropertybrowser.cpp \
              ../src/qttreepropertybrowser.cpp \
              ../src/objectcontroller.cpp \
              ../src/qteditorfactory.cpp \
              ../src/qtpropertybrowserutils.cpp \
              ../src/qtpropertymanager.cpp \
              ../src/qtvariantproperty.cpp \
              qtbuttonpropertybrowserplugin.cpp \
              qtgroupboxpropertybrowserplugin.cpp \
              qttreepropertybrowserplugin.cpp \
              qtpropertybrowsercollection.cpp
OTHER_FILES += QTPropBrowser.json
DESTDIR     = $$[QT_INSTALL_PLUGINS]/designer
QMAKE_POST_LINK += cp /home/cory/Qt/5.7/gcc_64/plugins/designer/libQTPropBrowser.so /home/cory/Qt/Tools/QtCreator/lib/Qt/plugins/designer
