//
// Created by jakob on 7/10/20.
//


#include <iostream>
#include "Input.h"

void Input::update(Entity* entity) {
    //printf("Input %p\n", entity);
    if (InputHandler2::buttonHeld(GLFW_KEY_W)){
        std::cout << "pressed W\n";
    }
}




