/* 
 * File:   Object.cpp
 * Author: phil
 * 
 * Created on 4. September 2015, 20:50
 */

#include "Object.h"


Object::Object() {
}

Object::Object(char* pathToObj){
    m_model.loadOBJ(pathToObj);
}

