//
// Created by jakob on 7/24/20.
//

#include "Mouse.h"

bool  Mouse::firstMouse = true;
double Mouse::lastY = 100.0;
double Mouse::lastX = 100.0f;
double Mouse::xoffset;
double Mouse::yoffset;


void Mouse::cursor_callback(GLFWwindow *window, double xpos, double ypos) {
    if (firstMouse){
        lastX = xpos;
        lastY = ypos;
        firstMouse = false;
    }

    xoffset = xpos - lastX;
    yoffset = lastY - ypos;

    lastX = xpos;
    lastY = ypos;

}

void Mouse::scroll_callback(GLFWwindow *window, double xoffset, double yoffset) {

}

double Mouse::getXOffset() {
    return xoffset;
}

double Mouse::getYOffset() {
    return yoffset;
}
