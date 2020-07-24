//
// Created by jakob on 7/23/20.
//

#ifndef ARCHITECTURE_AIRPLANE_H
#define ARCHITECTURE_AIRPLANE_H


#include "../entities/Entity.h"

class Airplane : public Entity {
public:
    void update(float dt) override;

    void draw() override;

    void collision() override;

};

#endif //ARCHITECTURE_AIRPLANE_H
