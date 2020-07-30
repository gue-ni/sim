//
// Created by jakob on 7/24/20.
//

#include "InputHandler.h"

Button *InputHandler::w = nullptr;
Button *InputHandler::a = nullptr;
Button *InputHandler::s = nullptr;
Button *InputHandler::d = nullptr;
Mouse  *InputHandler::mouse = nullptr;
Joystick *InputHandler::joystick = nullptr;
JoystickButton *InputHandler::button1 = nullptr;

void InputHandler::init(GLFWwindow *window) {
    w = new Button(GLFW_KEY_W, window);
    a = new Button(GLFW_KEY_A, window);
    s = new Button(GLFW_KEY_S, window);
    d = new Button(GLFW_KEY_D, window);

    mouse = new Mouse();

    if (glfwJoystickPresent(GLFW_JOYSTICK_1)) {
        joystick = new Joystick(window);
        int count;
        const unsigned char *buttons = glfwGetJoystickButtons(GLFW_JOYSTICK_1, &count);
        button1 = new JoystickButton(0, window, buttons);
    }
}