//
// Created by jakob on 7/10/20.
//

#ifndef ARCHITECTURE_GRAPHICS_H
#define ARCHITECTURE_GRAPHICS_H

#include <cstdio>
#include "../Component.h"

class Graphics : public Component {
public:
    void update(Entity* entity) override;
};



#endif //ARCHITECTURE_GRAPHICS_H
