//
// Created by jakob on 7/25/20.
//

#ifndef ARCHITECTURE_JOYSTICK_H
#define ARCHITECTURE_JOYSTICK_H


#include <GLFW/glfw3.h>

class Joystick {
public:
    double getPitch();
    double getYaw();
    double getRoll();
    Joystick(GLFWwindow *window);
private:
    double neutralPitch, neutralYaw, neutralRoll;
    const float *axes;
    int axesCount;

};


#endif //ARCHITECTURE_JOYSTICK_H
