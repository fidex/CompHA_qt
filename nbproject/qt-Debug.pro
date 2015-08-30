# This file is generated automatically. Do not edit.
# Use project properties -> Build -> Qt -> Expert -> Custom Definitions.
TEMPLATE = app
DESTDIR = dist/Debug/GNU-Linux-x86
TARGET = ComputergrafikInterface
VERSION = 1.0.0
CONFIG -= debug_and_release app_bundle lib_bundle
CONFIG += debug 
PKGCONFIG +=
QT = core gui widgets opengl
SOURCES += glwidget.cpp main.cpp mainWindow.cpp
HEADERS += glwidget.h mainWindow.h
FORMS += mainWindow.ui
RESOURCES +=
TRANSLATIONS +=
OBJECTS_DIR = build/Debug/GNU-Linux-x86
MOC_DIR = 
RCC_DIR = 
UI_DIR = 
QMAKE_CC = gcc
QMAKE_CXX = g++
DEFINES += 
INCLUDEPATH += 
LIBS += -lGL -lpthread -lGLU -glut -lGLEW -pthread  
equals(QT_MAJOR_VERSION, 4) {
QMAKE_CXXFLAGS += -std=c++11
}
equals(QT_MAJOR_VERSION, 5) {
CONFIG += c++11
}
