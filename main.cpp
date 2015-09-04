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

    void MouseCallback(int Button, int State, int x, int y);
    void MouseMoveCallback( int x, int y);
    void DrawScene();
    const Vector g_LightPos = Vector( 0,4,0);
    Camera g_Camera;
    //Model g_Model;
    int g_MouseButton = 0;
    int g_MouseState = 0;
    const unsigned int g_WindowWidth=640;
    const unsigned int g_WindowHeight=480;

int main(int argc, char *argv[]) {
    // initialize resources, if needed
    // Q_INIT_RESOURCE(resfile);
    //glutInitWindowSize(g_WindowWidth, g_WindowHeight);
    glutInit(&argc, argv);
    
    //glutInitDisplayMode(GLUT_RGB | GLUT_DEPTH | GLUT_DOUBLE);
    //glutCreateWindow("CG Praktikum");
    
    
    QApplication app(argc, argv);
    
    //glutDisplayFunc(DrawScene);
    //glutMouseFunc(MouseCallback);
    //glutKeyboardFunc(KeyboardCallback);
    //glutMotionFunc(MouseMoveCallback);
    
    //ShaderProgram g_Shader;
    //g_Shader.load((g_path+"toon.vert").c_str(), (g_path+"toon.frag").c_str());
    //g_Shader.activate();

    //g_Model.loadOBJ(g_ModelToLoad);
    
    //glutMainLoop();
    
    mainWindow wd;
    wd.show();
    
    // create and show your widgets here

    return app.exec();
}
void DrawScene()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    glLoadIdentity();
    g_Camera.apply();
    
   // DrawGroundGrid();
   
    
    GLfloat lpos[4];
    lpos[0]=g_LightPos.X; lpos[1]=g_LightPos.Y; lpos[2]=g_LightPos.Z; lpos[3]=1;
    glLightfv(GL_LIGHT0, GL_POSITION, lpos);

    
    glutSwapBuffers();
    glutPostRedisplay();
    
}
void MouseCallback(int Button, int State, int x, int y)
{
    g_MouseButton = Button;
    g_MouseState = State;
    g_Camera.mouseInput(x,y,Button,State);
}

void MouseMoveCallback( int x, int y)
{
    g_Camera.mouseInput(x,y,g_MouseButton,g_MouseState);
}