//
// Created by jakob on 7/30/20.
//

#include <iostream>
#include "ThirdPerson.h"
#include "../input/InputHandler.h"

glm::dmat4 ThirdPerson::getProjection() {
    return Camera::getProjection();
}

glm::dmat4 ThirdPerson::getView() {
    return Camera::getView();
}

void ThirdPerson::update(Entity *entity) {
    Camera::update(entity);
    if (InputHandler::s->held()){
        std::cout << "held S\n";
    }
}
