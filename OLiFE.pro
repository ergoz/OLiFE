TEMPLATE = app
QT = gui core network
CONFIG += qt warn_on console debug
DESTDIR = bin
OBJECTS_DIR = build
MOC_DIR = build
UI_DIR = build
FORMS = ui/mainwindow.ui
HEADERS = src/mainwindowimpl.h \
 src/nvsupport.h \
 src/downloader.h \
 src/nvhash.h \
 src/defines.h \
 src/file.h \
 src/uibuttons.h
SOURCES = src/mainwindowimpl.cpp src/main.cpp
