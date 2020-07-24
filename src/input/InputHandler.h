//
// Created by jakob on 7/24/20.
//

#ifndef ARCHITECTURE_INPUTHANDLER_H
#define ARCHITECTURE_INPUTHANDLER_H


#include <GLFW/glfw3.h>

class InputHandler {
public:
    static bool buttonPressed(int key);
    static bool buttonHeld(int key);
    static GLFWwindow* window;
};


#endif //ARCHITECTURE_INPUTHANDLER_H
