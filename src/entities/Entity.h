//
// Created by jakob on 7/10/20.
//

#ifndef ARCHITECTURE_ENTITY_H
#define ARCHITECTURE_ENTITY_H


#include <vector>
#include <ext/quaternion_double.hpp>
#include "../Component.h"
#include "../input/Input.h"
#include "../graphics/Graphics.h"
#include "../physics/Physics.h"



class Entity {
public:
    Entity(Input* i, Graphics* g, Physics* p, int id);
    virtual void update(float dt);
    virtual void draw();
    virtual void collision();

    int getId() const ;
    bool isActive() const;

private:
    int id;
    bool active;
    Input *input;
    Physics *physics;
    Graphics *graphics;
};


#endif //ARCHITECTURE_ENTITY_H
