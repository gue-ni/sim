//
// Created by jakob on 7/10/20.
//

#include "Factory.h"
#include "input/AirplaneInput.h"
#include "graphics/Graphics.h"
#include "physics/Physics.h"
#include "entities/Entity.h"

Entity *Factory::entity(int id) {
    return new Entity(new AirplaneInput, new Graphics, new Physics, id);
}
