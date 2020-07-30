//
// Created by jakob on 7/10/20.
//

#ifndef ARCHITECTURE_GRAPHICS_H
#define ARCHITECTURE_GRAPHICS_H

#include <cstdio>
#include "../Component.h"

class Shader;

class Graphics : public Component {
public:
    explicit Graphics(Shader *shader);
    void update(Entity* entity) override;
private:
    Shader *shader;
};

#endif //ARCHITECTURE_GRAPHICS_H
