//
//  MathRenderer.cpp
//  Rectilinear Polygon Partitioning
//
//  Created by Gabe Montague on 11/3/16.
//  Copyright © 2016 Student. All rights reserved.
//

#include "MathRenderer.hpp"
#include <SDL/SDL.h>
#include <SDL/SDL_opengl.h>

void MathRenderer::drawTest() {
    
    glBegin(GL_TRIANGLES);
    {
        glColor3f(1,0,0);
        glVertex2f(0,0);
        glVertex2f(.5,0);
        glVertex2f(.5,.5);
    }
    glEnd();
}
