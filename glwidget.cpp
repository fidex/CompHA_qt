#include <GL/glew.h>
#include <GL/glut.h>
#include "glwidget.h"
#include <string>
#include <QMouseEvent>

glWidget::glWidget(QWidget *parent = 0) : QGLWidget(parent){
    setMouseTracking(true);    
    TeaPod *tp = new TeaPod(1,1,1);
    ObjectEditor *Ob =  new ObjectEditor();
    
    
}   
        
        
void glWidget::initializeGL(){
    
    glClearColor(0, 0, 0, 1);
    GLenum err = glewInit();
    if(GLEW_OK != err){
        std::cout << "Glew Failed"<< glewGetErrorString(err)<< std::endl;
    }
    
    //gluLookAt(0,0,0, 0, 2, 1, 0, 1.0f, 0);
    //TeaPod tp();
    //TeaPod *asd = new TeaPod();
    //tp = asd;
    //Ob.m_tp = asd;
    
    
    // preset
    glClearDepth(1.0f);
    glEnable(GL_DEPTH_TEST);
    glEnable(GL_CULL_FACE);
    glCullFace(GL_BACK);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(65, (double)g_WindowWidth/(double)g_WindowHeight, 0.045f, 1000.0f);
    
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    
    // Setup Light Color
    GLfloat ambientLight[] = { 0.5f, 0.5f, 0.5f, 0.0f };
    GLfloat diffuseLight[] = { 1.0f, 1.0f, 1.0f, 1.0f };
    GLfloat specularLight[] = { 1.0f, 1.0f, 1.0f, 0.0f };
    glLightfv(GL_LIGHT0, GL_AMBIENT, ambientLight);
    glLightfv(GL_LIGHT0, GL_DIFFUSE, diffuseLight);
    glLightfv(GL_LIGHT0, GL_SPECULAR, specularLight);
    
    // Setup default material
    
    float diff[4] = {1,1,1,1};
    float amb[4]  = {0.2f,0.2f,0.2f,1};
    float spec[4] = {0.5f,0.5f,0.5f,1};
    glMaterialfv(GL_FRONT, GL_DIFFUSE, diff);
    glMaterialfv(GL_FRONT, GL_SPECULAR, spec);
    glMateriali(GL_FRONT, GL_SHININESS, 30);
    glMaterialfv(GL_FRONT, GL_AMBIENT, amb);
    
    
    glShadeModel(GL_SMOOTH);
    glEnable(GL_LIGHTING);
    glEnable(GL_LIGHT0);
    
    /* shader stuff*/
    ShaderProgram g_Shader;
    g_path = "/home/fide/NetBeansProjects/Computergrafik/computergrafik_Hausarbeit/Computergrafik_Hausarbeit/texture/";
    
    g_Shader.load((g_path+"test.vert").c_str(), (g_path+"test.frag").c_str());
    //g_Shader.activate();
    

}
void glWidget::paintGL(){
    
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    
    //glutWireTeapot(1);
    DrawGroundGrid();
    tp.draw();
    
    
   
    //std::cout << "i dont belong here! "<< bs <<std::endl;
    
    glLoadIdentity();
    g_Camera.apply();
    
    //SetupDefaultGLSettings();
    
    //glutDisplayFunc(DrawScene());
    //glutMouseFunc(MouseCallback);
    //glutKeyboardFunc(KeyboardCallback);
    //glutMotionFunc(MouseMoveCallback);
    
    //ShaderProgram g_Shader;
    //g_Shader.load((g_path+"toon.vert").c_str(), (g_path+"toon.frag").c_str());
    //g_Shader.activate();

    //g_Model.loadOBJ(g_ModelToLoad);
    
    
    
    
}
void glWidget::resizeGL(int w, int h){}

void glWidget::DrawGroundGrid()
{
    const float GridSize=10.0f;
    const unsigned int GridSegments=20;
    const float GridStep=GridSize/(float)GridSegments;
    const float GridOrigin=-GridSize*0.5f;
    
    glDisable( GL_LIGHTING);
    glBegin(GL_LINES);
        glColor3f(1.0f, 1.0f, 1.0f);
        for( unsigned int i=0; i<GridSegments+1; i++)
        {
            float itpos=GridOrigin + GridStep*(float)i;
            glVertex3f(itpos, 0, GridOrigin);
            glVertex3f(itpos, 0, GridOrigin+GridSize);
        
            glVertex3f(GridOrigin, 0, itpos);
            glVertex3f(GridOrigin+GridSize, 0, itpos);

        }
    glEnd();
    glEnable( GL_LIGHTING);

}
void glWidget::mouseMoveEvent(QMouseEvent* event){
   
    if(mouseMode == 0){
        if((event->buttons() & Qt::LeftButton )&&(event->buttons() & Qt::RightButton )){
            g_Camera.mouseInput(event->x(),event->y(),GLUT_UP,GLUT_LEFT_BUTTON);   
            updateGL();
            return;
        }
        if(event->buttons() & Qt::LeftButton ){
            g_MouseButton = GLUT_LEFT_BUTTON;
            g_MouseState = GLUT_DOWN;        
            g_Camera.mouseInput(event->x(),event->y(),GLUT_DOWN,GLUT_LEFT_BUTTON);

            updateGL();
            return;
        }
        if(event->buttons() & Qt::RightButton ){ //@todo
            g_MouseButton = GLUT_RIGHT_BUTTON;
            g_MouseState = GLUT_DOWN;
            g_Camera.mouseInput(event->x(),event->y(),GLUT_DOWN,GLUT_RIGHT_BUTTON);
            updateGL();
            return;
        }
    }
    else if(mouseMode == 1){
        if(event->buttons() & Qt::LeftButton ){
            
            //Ob.rotate();
            //Ob.setTp(tp);
            //tp.move();
            //tp.pos.Z += 0.1;
            //tp.pos += Vector(0,0,0.1);
            
            updateGL();
            return;
        }
        
        
    }
   g_Camera.mouseInput(event->x(),event->y(),GLUT_UP,GLUT_RIGHT_BUTTON);   
   
}
void glWidget::DrawScene()
{
       
}
void glWidget::parentMouseMoveEvent(QMouseEvent* event){
    //std::cout << event->x()<< " "<<event->y()<<std::endl; WORKS
    
}
void glWidget::setMouseMode(int x){
    mouseMode = x;
    std::cout <<"mouse mode changed"<<std::endl;
}
