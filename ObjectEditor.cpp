#include <fstream>

#include "ObjectEditor.h"
#include "Vector.h"
#include "glwidget.h"

void ObjectEditor::move(Vector move){
    /*
    float dx,dy;
    
    dx =(float)(m_LastMouseX-x)*0.01f;
    dy =(float)(m_LastMouseY-y)*0.01f
    
    Vector aDir = m_Target-m_Position;
    aDir.normalize();
    Vector aRight = aDir.cross(Vector(0.0f,1.0f,0.0f));
    aRight.normalize();
    Vector aUp = aDir.cross(aRight);
    m_Panning = aRight * dx + aUp * dy;
    */
    if(objects.size() == 0){
        std::cout <<" no objects created"<<std::endl;
        return;
    }
    objects.at(activeObject).move(move);
    //m_tp->pos = m_tp->pos + Vector(0,0,0.1);
    //std::cout <<objects.at(0).pos.Z <<std::endl;
    
}
/*
void ObjectEditor::setMouse(int x,int y){
    
    m_LastMouseX = x;
    m_LastMouseY = y;
}*/
void ObjectEditor::setActive(int x){
    activeObject = x;
    std::cout << "asdasdasdsad" <<std::endl;
    objects[x].color = Color(1.0f,0.0f,0.0f);
}
void ObjectEditor::rotate(){
    
    //m_tp->move();
}
void ObjectEditor::draw(){
    
    for(TeaPod t: objects){
        t.draw();
    }
}
