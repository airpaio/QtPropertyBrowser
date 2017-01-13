/* QtPropertyBrowserPlugin - A plugin for Qt Designer to provide
   QtPropertyBrowser widgets in the form designer
   Copyright (C) 1999, 2000, 2001, 2005, 2007 Free Software Foundation, Inc.
   
   Update to work with Qt 5.7
   Copyright (C) 2017 Cory Robinson - robinson.cory.r@gmail.com

   This library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 3 of the License, or (at your option) any later version.

   This library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General
   Public License along with this library; if not, write to the
   Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301 USA
   */

#ifndef QTTREEPROPERTYBROWSERPLUGIN_H
#define QTTREEPROPERTYBROWSERPLUGIN_H

#include <QDesignerCustomWidgetInterface>

class QtTreePropertyBrowserPlugin : public QObject,
                                    public QDesignerCustomWidgetInterface
{
    Q_OBJECT
    Q_INTERFACES(QDesignerCustomWidgetInterface)

public:
    QtTreePropertyBrowserPlugin(QObject *parent = 0);

    QString name() const;
    QString includeFile() const;
    QString group() const;
    QIcon icon() const;
    QString toolTip() const;
    QString whatsThis() const;
    bool isContainer() const;
    QWidget *createWidget(QWidget *parent);
};

#endif
