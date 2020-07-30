//
// Created by jakob on 7/30/20.
//

#include "Camera.h"

glm::dmat4 Camera::getProjection() {
    return glm::dmat4();
}

glm::dmat4 Camera::getView() {
    return glm::dmat4();
}

void Camera::update(Entity *entity) {
    // TODO set position etc
}
