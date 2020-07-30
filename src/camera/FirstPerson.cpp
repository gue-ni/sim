//
// Created by jakob on 7/30/20.
//

#include "FirstPerson.h"

glm::dmat4 FirstPerson::getProjection() {
    return Camera::getProjection();
}

glm::dmat4 FirstPerson::getView() {
    return Camera::getView();
}
