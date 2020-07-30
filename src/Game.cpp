//
// Created by jakob on 7/22/20.
//

#include <iostream>
#include "Game.h"
#include "entities/Entity.h"
#include "Factory.h"


void Game::remove(int id){
    if (entities.erase(id)  != 1){
        printf("Could not delete element");
    }
}

Entity* Game::create(){
    int id = num_entites++;
    Entity *e = factory.entity(id);
    entities.insert({id, e});
    return e;
}

void Game::update(double dt) {
    for (auto e : entities){
        auto entity = e.second;
        entity->update(dt);

        if (!entity->isActive()){
            removeables.push_back(entity->getId());
        }
    }

    for (int id : removeables){
        printf("Remove %d\n", id);
        remove(id);
        removeables.clear();
    }





}

void Game::draw() {
    // TODO draw terrain
    // TODO draw particles

    for (auto e : entities){
        e.second->draw();
    }
}

Entity *Game::getActive() {
    return nullptr;
}

Game::Game() {


}


