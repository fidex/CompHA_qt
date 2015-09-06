/* 
 * File:   mainWindow.h
 * Author: fide
 *
 * Created on 30. August 2015, 16:11
 */

#ifndef _MAINWINDOW_H
#define	_MAINWINDOW_H


#include "ui_mainWindow.h"
#include <iostream>


class mainWindow : public QDialog {
    Q_OBJECT
public:
    mainWindow();    
    virtual ~mainWindow();
public slots:
    void slot1();
    void testIT();
    void setMouseMode_move();
    void setMouseMode_obj();
    void createPod();
        
private:
    
    void mouseMoveEvent(QMouseEvent * event);
    Ui::mainWindow widget;
};

#endif	/* _MAINWINDOW_H */
