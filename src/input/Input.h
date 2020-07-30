//
// Created by jakob on 7/10/20.
//

#ifndef ARCHITECTURE_INPUT_H
#define ARCHITECTURE_INPUT_H


#include "../Component.h"
#include <cstdio>
#include <GLFW/glfw3.h>

class Input : public Component {
public:
    void update(Entity* entity) override;
};



#endif //ARCHITECTURE_INPUT_H
