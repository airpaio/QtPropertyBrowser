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

#ifndef QTPROPERTYBROWSERCOLLECTION_H
#define QTPROPERTYBROWSERCOLLECTION_H

#include <QObject>
#include <QDesignerCustomWidgetCollectionInterface>

class QtPropertyBrowserCollection : public QObject,
                                    public QDesignerCustomWidgetCollectionInterface
{
    Q_OBJECT
    Q_INTERFACES(QDesignerCustomWidgetCollectionInterface)
    Q_PLUGIN_METADATA(IID "org.qt-project.Qt.QDesignerCustomWidgetCollectionInterface" \
                      FILE "QTPropBrowser.json")
public:
    explicit QtPropertyBrowserCollection(QObject *parent = 0);

    virtual QList<QDesignerCustomWidgetInterface*> customWidgets() const;

private:
    QList<QDesignerCustomWidgetInterface*> widgets;

};

#endif
