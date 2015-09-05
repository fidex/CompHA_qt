/*
 * File:   mainWindow.cpp
 * Author: fide
 *
 * Created on 30. August 2015, 16:11
 */

#include "mainWindow.h"
#include <QMouseEvent>


mainWindow::mainWindow() {
    setMouseTracking(true);
    widget.setupUi(this);
    
}

mainWindow::~mainWindow() {
}
void mainWindow::mouseMoveEvent(QMouseEvent* event){
   widget.widget->parentMouseMoveEvent(event);    

}
