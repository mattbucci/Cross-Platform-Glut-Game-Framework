//
//  GraphicsCore.h
//  OOP_Game
//
//  Created by Deathstar on 5/7/14.
//  Copyright (c) 2014 ___UCMerced___. All rights reserved.
//

#ifndef __OOP_Game__GraphicsCore__
#define __OOP_Game__GraphicsCore__

#include <iostream>
#include <vector>
#include "stdafx.h"
#include "GraphicsObject.h"
class Graphics {
    
public:
    Graphics();
    
    void resize(int w, int h);
    void draw();
    void Register(GraphicsObject* newObject);
    void UnRegister(GraphicsObject* newObject);
};
#endif /* defined(__OOP_Game__GraphicsCore__) */
