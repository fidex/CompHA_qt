/*
 * File:   main.cpp
 * Author: fide
 *
 * Created on 30. August 2015, 16:00
 */
#include <GL/glew.h>
#include <QApplication>
#include "mainWindow.h"
#include <QtOpenGL/QGLWidget>



int main(int argc, char *argv[]) {
    // initialize resources, if needed
    // Q_INIT_RESOURCE(resfile);

    QApplication app(argc, argv);
    
    
    mainWindow wd;
    wd.show();
    
    // create and show your widgets here

    return app.exec();
}
