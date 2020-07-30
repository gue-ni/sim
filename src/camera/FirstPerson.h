//
// Created by jakob on 7/30/20.
//

#ifndef ARCHITECTURE_FIRSTPERSON_H
#define ARCHITECTURE_FIRSTPERSON_H


#include "Camera.h"
#include "ThirdPerson.h"

class FirstPerson : public ThirdPerson {
public:
    glm::dmat4 getProjection() override;

    glm::dmat4 getView() override;
};


#endif //ARCHITECTURE_FIRSTPERSON_H
