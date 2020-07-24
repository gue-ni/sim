//
// Created by jakob on 7/24/20.
//

#include <iostream>
#include "AirplaneInput.h"
#include "InputHandler.h"

void AirplaneInput::update(Entity *entity) {
    if (InputHandler::buttonHeld(GLFW_KEY_W)){
        std::cout << "pressed W\n";
    }
}