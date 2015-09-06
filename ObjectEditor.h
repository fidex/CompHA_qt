/* 
 * File:   ObjectEditor.h
 * Author: fide
 *
 * Created on 5. September 2015, 20:52
 */

#ifndef OBJECTEDITOR_H
#define	OBJECTEDITOR_H

#include "TeaPod.h"
#include "Vector.h"
#include <vector>

class ObjectEditor{
    
public:
    
    ObjectEditor(){};
    TeaPod *m_tp;
    
    std::vector<TeaPod> objects;  
    int activeObject;
    void draw();
    
    void setTp(TeaPod* tp);
    void move(Vector);
    void rotate();
    //void setMouse(int x, int y);
    
private:
    int m_LastMouseX;
    int m_LastMouseY;
    
};

#endif	/* OBJECTEDITOR_H */

