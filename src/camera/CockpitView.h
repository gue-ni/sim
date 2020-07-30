//
// Created by jakob on 7/30/20.
//

#ifndef ARCHITECTURE_COCKPITVIEW_H
#define ARCHITECTURE_COCKPITVIEW_H


#include "Camera.h"

class CockpitView : public Camera {
public:
    glm::dmat4 getProjection() override;

    glm::dmat4 getView() override;
};


#endif //ARCHITECTURE_COCKPITVIEW_H
