//
// Created by jakob on 7/10/20.
//

#include "Entity.h"
#include "../camera/ThirdPerson.h"

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
    cameras.push_back(new ThirdPerson()); // default
}

void Entity::collision() { // Could take type of collision as argument
    active = false;
}

void Entity::setCameras(std::vector<Camera *>& cams) {
    this->cameras = cams;
}

Camera *Entity::getCamera() {
    // TODO implement
    return nullptr;
}

void Entity::toggleCamera() {
    // TODO implement
}

