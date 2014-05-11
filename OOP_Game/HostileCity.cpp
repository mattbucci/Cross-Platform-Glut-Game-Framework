//
//  HostileCity.cpp
//  OOP_Game
//
//  Created by Matthew Bucci on 5/7/14.
//  Copyright (c) 2014 ___UCMerced___. All rights reserved.
//

#include "HostileCity.h"
#include "Game.h"


HostileCity::HostileCity(float x, float y, float z, int type): Actor(x,y,z,1,100){
    this->type = type;
}


void HostileCity::draw() {
    
    if(type == 0 ) {
        glPushMatrix();
        glTranslatef(0, 0, .2);
        glTranslatef(x, y, z);
        
        glColor3f(1, 0, 0);
        glScaled(.2,.2,.2);
        
        //glColor3f(1,1,1);
        glBegin(GL_QUADS);
        glVertex3f( SIZE, 0.0, -SIZE*2);    // Top Right Of The Quad (Top)
        glVertex3f(-SIZE, 0.0, -SIZE*2);    // Top Left Of The Quad (Top)
        glVertex3f(-SIZE, 0.0, -SIZE);    // Bottom Left Of The Quad (Top)
        glVertex3f( SIZE, 0.0, -SIZE);    // Bottom Right Of The Quad (Top)
        glEnd();
        
        
        //
        glBegin(GL_QUADS);
        glVertex3f( SIZE,-SIZE, -SIZE);    // Top Right Of The Quad (Bottom)
        glVertex3f(-SIZE,-SIZE, -SIZE);    // Top Left Of The Quad (Bottom)
        glVertex3f(-SIZE,-SIZE,-SIZE*2);    // Bottom Left Of The Quad (Bottom)
        glVertex3f( SIZE,-SIZE,-SIZE*2);    // Bottom Right Of The Quad (Bottom)
        glEnd();
        
        glBegin(GL_QUADS);
        glVertex3f( SIZE, SIZE, -SIZE);    // Top Right Of The Quad (Front)
        glVertex3f(-SIZE, SIZE, -SIZE);    // Top Left Of The Quad (Front)
        glVertex3f(-SIZE,-SIZE, -SIZE);    // Bottom Left Of The Quad (Front)
        glVertex3f( SIZE,-SIZE, -SIZE);    // Bottom Right Of The Quad (Front)
        glEnd();
        
        glBegin(GL_QUADS);
        glVertex3f( SIZE,-SIZE,-SIZE*2);    // Top Right Of The Quad (Back)
        glVertex3f(-SIZE,-SIZE,-SIZE*2);    // Top Left Of The Quad (Back)
        glVertex3f(-SIZE, SIZE,-SIZE*2);    // Bottom Left Of The Quad (Back)
        glVertex3f( SIZE, SIZE,-SIZE*2);    // Bottom Right Of The Quad (Back)
        glEnd();
        
        glBegin(GL_QUADS);
        glVertex3f(-SIZE, SIZE, -SIZE);    // Top Right Of The Quad (Left)
        glVertex3f(-SIZE, SIZE,-SIZE*2);    // Top Left Of The Quad (Left)
        glVertex3f(-SIZE,-SIZE,-SIZE*2);    // Bottom Left Of The Quad (Left)
        glVertex3f(-SIZE,-SIZE, -SIZE);    // Bottom Right Of The Quad (Left)
        glEnd();
        
        glBegin(GL_QUADS);
        glVertex3f( SIZE, SIZE,-SIZE*2);    // Top Right Of The Quad (Right)
        glVertex3f( SIZE, SIZE, -SIZE);    // Top Left Of The Quad (Right)
        glVertex3f( SIZE,-SIZE, -SIZE);    // Bottom Left Of The Quad (Right)
        glVertex3f( SIZE,-SIZE,-SIZE*2);    // Bottom Right Of The Quad (Right)
        glEnd();
        
        
        glPopMatrix();
    }
}


void HostileCity::Update() {
    y+=.02;
    if (y>0.7) {
        theGame->UnRegister(this);
    }
    
}