//
// Created by jakob on 7/25/20.
//

#include "Joystick.h"

Joystick::Joystick(GLFWwindow *window) {
    axes =  glfwGetJoystickAxes(GLFW_JOYSTICK_1, &axesCount);
    neutralPitch    = axes[1];
    neutralRoll     = axes[0];
    neutralYaw      = axes[3];
}

double Joystick::getPitch() {
    return  axes[1] - neutralPitch;
}

double Joystick::getYaw() {
    return axes[3]  - neutralYaw;
}

double Joystick::getRoll() {
    return axes[0] - neutralRoll;
}
