//
// Created by jakob on 7/10/20.
//


#include <iostream>
#include "Input.h"
#include "InputHandler.h"

void Input::update(Entity* entity) {
    if (InputHandler::w->pressed()){
        std::cout << "pressed W\n";
    }
}




