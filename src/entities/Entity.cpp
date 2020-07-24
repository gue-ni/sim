//
// Created by jakob on 7/10/20.
//

#include "Entity.h"

void Entity::update(float dt) {
    input->update(this);
    physics->update(this);
}

void Entity::draw() {
    graphics->update(this);
}

int Entity::getId() const {
    return id;
}

bool Entity::isActive() const {
    return active;
}

Entity::Entity(Input *i, Graphics *g, Physics *p, int id)
    : physics(p), input(i), graphics(g), id(id){
    active = true;
}

void Entity::collision() { // Could take type of collision as argument
    active = false;
}

