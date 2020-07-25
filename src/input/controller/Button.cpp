//
// Created by jakob on 7/24/20.
//

#include "Button.h"

Button::Button(int key, GLFWwindow *w) : key(key), window(w) {}

bool Button::pressed() {
    double now = glfwGetTime();
    bool result = glfwGetKey(window, key) == GLFW_PRESS && now > disabled;
    if (result)
        disabled = now + 0.2;
    return result;
}

bool Button::held() {
    return glfwGetKey(window, key) == GLFW_PRESS;
}


