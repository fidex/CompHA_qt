
#include "TeaPod.h"

TeaPod::TeaPod(){
    Color color(0.0f,0.0f,0.0f);
    Vector pos(0.0f,0.0f,0.0f);
}
void TeaPod::draw(){
    
    //std::cout << "asd: "<< pos.X << pos.Y << pos.Z <<std::endl;
    glColor3d(color.R, color.G, color.B);
    glPushMatrix();
    glTranslated(pos.X, pos.Y, pos.Z);
    glRotated(30, 0.0, -1.0, 0.0);
    glutSolidTeapot(1);
    glPopMatrix();
    
   
}
void TeaPod::move(){
    pos += Vector(0,0,0.1);
}