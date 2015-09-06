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
    QObject::connect(widget.objectbutton, SIGNAL(clicked()), this, SLOT(setMouseMode_obj()));
    QObject::connect(widget.cambutton, SIGNAL(clicked()), this, SLOT(setMouseMode_move()));
    QObject::connect(widget.createbutton, SIGNAL(clicked()), this, SLOT(createPod()));
}

mainWindow::~mainWindow() {
}
void mainWindow::mouseMoveEvent(QMouseEvent* event){
   widget.widget->parentMouseMoveEvent(event);    

}
void mainWindow::testIT(){
    std::cout <<"test slot succeeeeeeded"<<std::endl;
}
void mainWindow::slot1(){
    std::cout <<"test slot succeeeeeeded"<<std::endl;
}
void mainWindow::setMouseMode_move(){
    widget.widget->setMouseMode(0);
}
void mainWindow::setMouseMode_obj(){
    widget.widget->setMouseMode(1);
}
void mainWindow::createPod(){
    widget.widget->addPod();
}