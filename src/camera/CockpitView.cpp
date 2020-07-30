//
// Created by jakob on 7/30/20.
//

#include "CockpitView.h"

glm::dmat4 CockpitView::getProjection() {
    return Camera::getProjection();
}

glm::dmat4 CockpitView::getView() {
    return Camera::getView();
}
