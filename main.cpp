/*
 * File:   main.cpp
 * Author: fide
 *
 * Created on 30. August 2015, 16:00
 */
#include <GL/glew.h>
#include <GL/freeglut.h>
#include <QApplication>
#include "mainWindow.h"
#include <QtOpenGL/QGLWidget>

    const Vector g_LightPos = Vector( 0,4,0);
    Camera g_Camera;
    //Model g_Model;
    int g_MouseButton = 0;
    int g_MouseState = 0;
    const unsigned int g_WindowWidth=640;
    const unsigned int g_WindowHeight=480;

int main(int argc, char *argv[]) {
    
    glutInit(&argc, argv);    
    QApplication app(argc, argv);    
    
    mainWindow wd;
    wd.show();
    
    return app.exec();
}
