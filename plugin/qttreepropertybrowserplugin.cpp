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

#include <QtTreePropertyBrowser>

#include "qttreepropertybrowserplugin.h"

QtTreePropertyBrowserPlugin::QtTreePropertyBrowserPlugin(QObject *parent)
    : QObject(parent)
{
}

QString QtTreePropertyBrowserPlugin::name() const
{
    return "QtTreePropertyBrowser";
}

QString QtTreePropertyBrowserPlugin::includeFile() const
{
    return "qttreepropertybrowser.h";
}

QString QtTreePropertyBrowserPlugin::group() const
{
    return tr("Property Browser Widgets");
}

QIcon QtTreePropertyBrowserPlugin::icon() const
{
    return QIcon();
}

QString QtTreePropertyBrowserPlugin::toolTip() const
{
    return tr("A Tree PropertyBrowser widget");
}

QString QtTreePropertyBrowserPlugin::whatsThis() const
{
    return tr("This is the QtTreePropertyBrowser implemented by Qt Solutions");
}

bool QtTreePropertyBrowserPlugin::isContainer() const
{
    return false;
}

QWidget *QtTreePropertyBrowserPlugin::createWidget(QWidget *parent)
{
    return new QtTreePropertyBrowser(parent);
}

// Q_EXPORT_PLUGIN2(qttreepropertybrowserplugin, QtTreePropertyBrowserPlugin)
