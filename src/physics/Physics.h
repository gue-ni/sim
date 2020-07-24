//
// Created by jakob on 7/10/20.
//

#ifndef ARCHITECTURE_PHYSICS_H
#define ARCHITECTURE_PHYSICS_H

#include "../Component.h"
#include <cstdio>

class Physics : public Component {
public:
    void update(Entity *entity) override;
};



#endif //ARCHITECTURE_PHYSICS_H
