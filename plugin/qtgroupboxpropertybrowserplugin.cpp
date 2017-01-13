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

#include <QtGroupBoxPropertyBrowser>

#include "qtgroupboxpropertybrowserplugin.h"

QtGroupBoxPropertyBrowserPlugin::QtGroupBoxPropertyBrowserPlugin(QObject *parent)
    : QObject(parent)
{
}

QString QtGroupBoxPropertyBrowserPlugin::name() const
{
    return "QtGroupBoxPropertyBrowser";
}

QString QtGroupBoxPropertyBrowserPlugin::includeFile() const
{
    return "qtgroupboxpropertybrowser.h";
}

QString QtGroupBoxPropertyBrowserPlugin::group() const
{
    return tr("Property Browser Widgets");
}

QIcon QtGroupBoxPropertyBrowserPlugin::icon() const
{
    return QIcon();
}

QString QtGroupBoxPropertyBrowserPlugin::toolTip() const
{
    return tr("A GroupBox PropertyBrowser widget");
}

QString QtGroupBoxPropertyBrowserPlugin::whatsThis() const
{
    return tr("This is the QtGroupBoxPropertyBrowser implemented by Qt Solutions");
}

bool QtGroupBoxPropertyBrowserPlugin::isContainer() const
{
    return false;
}

QWidget *QtGroupBoxPropertyBrowserPlugin::createWidget(QWidget *parent)
{
    return new QtGroupBoxPropertyBrowser(parent);
}

// Q_EXPORT_PLUGIN2(qtgroupboxpropertybrowserplugin, QtGroupBoxPropertyBrowserPlugin)
