//
// Created by jakob on 7/30/20.
//

#ifndef ARCHITECTURE_CAMERA_H
#define ARCHITECTURE_CAMERA_H


#include <ext.hpp>
#include "../Component.h"

class Camera : public Component {
public:
    virtual glm::dmat4 getProjection();
    virtual glm::dmat4 getView();
    void update(Entity *entity) override;
private:
    glm::dvec3 Position;
    glm::dvec3 Front, Up, Right;
};


#endif //ARCHITECTURE_CAMERA_H
