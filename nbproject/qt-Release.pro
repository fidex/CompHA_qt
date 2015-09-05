# This file is generated automatically. Do not edit.
# Use project properties -> Build -> Qt -> Expert -> Custom Definitions.
TEMPLATE = app
DESTDIR = dist/Release/GNU-Linux-x86
TARGET = ComputergrafikInterface
VERSION = 1.0.0
CONFIG -= debug_and_release app_bundle lib_bundle
CONFIG += release 
PKGCONFIG +=
QT = core gui widgets
SOURCES += Camera.cpp Color.cpp Material.cpp Matrix.cpp ObjectEditor.cpp ShaderProgram.cpp TeaPod.cpp Texture.cpp Vector.cpp glwidget.cpp main.cpp mainWindow.cpp
HEADERS += Camera.h Color.h Material.h Matrix.h ObjectEditor.h ShaderProgram.h TeaPod.h Texture.h Vector.h glwidget.h mainWindow.h
FORMS += mainWindow.ui
RESOURCES +=
TRANSLATIONS +=
OBJECTS_DIR = build/Release/GNU-Linux-x86
MOC_DIR = 
RCC_DIR = 
UI_DIR = 
QMAKE_CC = gcc
QMAKE_CXX = g++
DEFINES += 
INCLUDEPATH += 
LIBS += 
