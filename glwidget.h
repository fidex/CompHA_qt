/* 
 * File:   glWidget.h
 * Author: fide
 *
 * Created on 30. August 2015, 16:29
 */

#ifndef GLWIDGET_H
#define	GLWIDGET_H


#include <qt4/QtOpenGL/QGLWidget>
#include <iostream>
#include "Camera.h"
#include "ShaderProgram.h"


class glWidget : public QGLWidget {
    Q_OBJECT
public:
    explicit glWidget(QWidget *parent /*= 0*/);
    //virtual ~glWidget();
    
    void initializeGL();
    void paintGL();
    void resizeGL(int w, int h);
    void testIt();
    void parentMouseMoveEvent(QMouseEvent *event);
private:
    void DrawScene();
    void DrawGroundGrid();
    void mouseMoveEvent(QMouseEvent * event);
    // window x and y size
    const unsigned int g_WindowWidth=640;
    const unsigned int g_WindowHeight=480;
    int g_MouseButton = 0;
    int g_MouseState = 0;
    Camera g_Camera;
    std::string g_path;
    ShaderProgram g_Shader;
    int bs = 0;
// light position (point light)
//const Vector g_LightPos = Vector( 0,4,0);

};



#endif	/* GLWIDGET_H */

