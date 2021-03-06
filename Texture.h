//
//  Texture.h
//  RealtimeRending
//
//  Created by Philipp Lensing on 24.10.14.
//  Copyright (c) 2014 Philipp Lensing. All rights reserved.
//

#ifndef __RealtimeRending__Texture__
#define __RealtimeRending__Texture__

#include <iostream>
#include <GL/gl.h>
#include <GL/glut.h>

class Texture
{
public:
    Texture();
    ~Texture();
    bool LoadFromBMP( const char* Filename );
    void apply() const;
    bool isValid() const;
protected:
    unsigned char* LoadBMP( const char* Filename, unsigned int& width, unsigned int& height );
    GLuint m_TextureID;

};

#endif /* defined(__RealtimeRending__Texture__) */
