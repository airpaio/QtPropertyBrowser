This is a Qt Designer plugin for the Qt Solutions QtPropertyBrowser.
This version of the plugin is compatible with Qt 5.7.  

The QtPropertyBrowser and this plugin were built on a Linux Mint 17 machine
with Qt 5.7.

To build this plugin on your 'Linux machine':  

    * make sure that QtPropertyBrowser has been built
    * `cd` into the `plugin` directory
    * run `qmake` to build the Makefile, then
    * run `make` to build the plugin

The .pro file is set to stash the .so in the plugins directories for both the
Qt Creator integrated Designer and the stand alone Qt Designer.

Once the plugin is built, open your Qt Designer, and your plugin should appear
at the bottom of your Widget Box.

Drag and drop your chose propertybrowser style onto your workspace window.
For the qtbuttonpropertybrowser and the qtgroupboxproperty browser, you might
want to check the 'autoFillBackground' in Designer's Property Editor.
From here on I think we just have to add items to your propertybrowser widget
with code.

On your Linux machine, you may need to add the library to the `ldconfig` cache
so as to avoid the  

`error while loading shared libraries: cannot open shared object file: No such file or directory`  

To do so, you can either

    1) `export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:/path/to/your/plugin/directory`  
    or
    2) `sudo` open your `/etc/ld.so.conf` file in your favorite text Editor
        - add a new line with `/path/to/your/plugin/directory`
        - `$ sudo ldconfig`
        - `$ ldconfig -p | grep QT` to check that the library was added.

where `/path/to/your/plugin/directory` is in your `$$[QT_INSTALL_PREFIX]/plugins/designer` for the stand alone Qt Designer, and
`$$[QT_TOOLS]/QtCreator/lib/Qt/plugins/designer` directory for the Qt Creator
integrated Designer.  Then you should be able to run your application with a QtPropertyBrowser object.

NOTE:
    I thought that using the QtPropertyBrowser's .so library would be all we
    needed to get the plugin working correctly, but I actually had to include
    all of the .h and .cpp files from the QtPropertyBrowser/src in order for the
    plugin to build and work in the Designer.  Feel free to share if anyone has
    thoughts or comments on this.
