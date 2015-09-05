/* 
 * File:   TeaPod.h
 * Author: fide
 *
 * Created on 5. September 2015, 20:14
 */

#ifndef TEAPOD_H
#define	TEAPOD_H


#include <GL/glut.h>
#include <iostream>
#include "Color.h"
#include "Vector.h"

class TeaPod{
    
public:
    TeaPod(Color color, double x, double y, double z) :
    color(color){
        pos.X = x;
        pos.Y = y;
        pos.Z = z;
    }
    TeaPod(double x, double y, double z){
        color = Color(0.0f,0.0f,0.0f);
        pos.X = x;
        pos.Y = y;
        pos.Z = z;        
    }
    TeaPod();
    void draw();
    void move();
    Color color;
    Vector pos;
    
    ~TeaPod() {
        std::cout << "my time has come!"<<std::endl;
    }

    
private:
    
};


#endif	/* TEAPOD_H */

