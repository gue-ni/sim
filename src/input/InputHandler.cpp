//
// Created by jakob on 7/24/20.
//

#include "InputHandler.h"
#include "controller/Joystick.h"

Button *InputHandler::w = nullptr;
Button *InputHandler::a = nullptr;
Button *InputHandler::s = nullptr;
Button *InputHandler::d = nullptr;
Mouse  *InputHandler::mouse = nullptr;
Joystick *InputHandler::joystick = nullptr;



void InputHandler::init(GLFWwindow *window) {
    w = new Button(GLFW_KEY_W, window);
    a = new Button(GLFW_KEY_A, window);
    s = new Button(GLFW_KEY_S, window);
    d = new Button(GLFW_KEY_D, window);
    mouse = new Mouse();

    if (glfwJoystickPresent(GLFW_JOYSTICK_1)) {
        joystick = new Joystick(window);
    }
}