//
// Created by jakob on 7/30/20.
//

#ifndef ARCHITECTURE_THIRDPERSON_H
#define ARCHITECTURE_THIRDPERSON_H


#include "Camera.h"

class ThirdPerson : public Camera {
public:
    glm::dmat4 getProjection() override;

    void update(Entity *entity) override;

    glm::dmat4 getView() override;

private:
    double pitch, yaw;

};

#endif //ARCHITECTURE_THIRDPERSON_H
