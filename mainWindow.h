/* 
 * File:   mainWindow.h
 * Author: fide
 *
 * Created on 30. August 2015, 16:11
 */

#ifndef _MAINWINDOW_H
#define	_MAINWINDOW_H

#include "ui_mainWindow.h"

class mainWindow : public QDialog {
    Q_OBJECT
public:
    mainWindow();
    virtual ~mainWindow();
private:
    Ui::mainWindow widget;
};

#endif	/* _MAINWINDOW_H */
