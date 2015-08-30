/* 
 * File:   glWidget.h
 * Author: fide
 *
 * Created on 30. August 2015, 16:29
 */

#ifndef GLWIDGET_H
#define	GLWIDGET_H


#include <qt4/QtOpenGL/QGLWidget>



class glWidget : public QGLWidget {
    Q_OBJECT
public:
    explicit glWidget(QWidget *parent /*= 0*/);
    //virtual ~glWidget();
    
    void initializeGL();
    void paintGL();
    void resizeGL(int w, int h);
private:
    //Ui::glwidget widget;
};



#endif	/* GLWIDGET_H */

