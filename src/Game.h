//
// Created by jakob on 7/22/20.
//

#ifndef ARCHITECTURE_GAME_H
#define ARCHITECTURE_GAME_H


#include <map>
#include <GLFW/glfw3.h>
#include "entities/Entity.h"
#include "Factory.h"

class Game {
public:
    Game();
    Entity *getActive();

    Entity *create();
    void remove(int id);
    void update(double dt);
    void draw();

private:
    Factory *factory;
    std::vector<int> removeables;
    std::map<int, Entity*> entities;
    int num_entites = 0;
};

#endif //ARCHITECTURE_GAME_H
