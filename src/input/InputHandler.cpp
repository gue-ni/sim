//
// Created by jakob on 7/24/20.
//

#include "InputHandler.h"

bool InputHandler::buttonPressed(int key) {
    return false;
}

bool InputHandler::buttonHeld(int key) {
    return glfwGetKey(window, key) == GLFW_PRESS;
}

GLFWwindow *InputHandler::window = nullptr;
