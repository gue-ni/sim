//
// Created by jakob on 7/25/20.
//

#include "JoystickButton.h"

JoystickButton::JoystickButton(int key, GLFWwindow *w, const unsigned char *buttons)
: Button(key, w), buttons(buttons) {}

bool JoystickButton::held() {
    return buttons[key] == GLFW_PRESS;
}

bool JoystickButton::pressed() {
    double now = glfwGetTime();
    bool result = buttons[key] == GLFW_PRESS && now > disabled;
    if (result)
        disabled = now + spacing;
    return result;;
}
