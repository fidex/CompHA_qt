/* 
 * File:   Object.h
 * Author: phil
 *
 * Created on 4. September 2015, 20:50
 */

#ifndef OBJECT_H
#define	OBJECT_H

#include "Model.h"


class Object {
public:
    Object(char* pathToObj);
    ~Object();

private:
    Object();
    
    Model m_model;
};

#endif	/* OBJECT_H */

