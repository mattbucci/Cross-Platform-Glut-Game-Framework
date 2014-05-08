//
//  GameControl.h
//  OOP_Game
//
//  Created by Matthew Bucci on 5/7/14.
//  Copyright (c) 2014 Matthew Bucci. All rights reserved.
//

#ifndef __OOP_Game__GameControl__
#define __OOP_Game__GameControl__

#include <iostream>
#include "stdafx.h"
#include "Actor.h"
#include "Player.h"

class GameControl {
    
    
public:
    GameControl();
    void Register(Actor* newActor);
    void UnRegister(Actor* newActor);
};
static vector<Actor*> Actors;
#endif /* defined(__OOP_Game__GameControl__) */
