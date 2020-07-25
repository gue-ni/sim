//
// Created by jakob on 7/24/20.
//

#ifndef ARCHITECTURE_INPUTHANDLER_H
#define ARCHITECTURE_INPUTHANDLER_H


#include <GLFW/glfw3.h>
#include "controller/Button.h"
#include "controller/Mouse.h"
#include "controller/Joystick.h"


class InputHandler {
public:
    static Button *w;
    static Button *a;
    static Button *s;
    static Button *d;

    static Mouse *mouse;
    static Joystick *joystick;




    static void init(GLFWwindow *window);


};


#endif //ARCHITECTURE_INPUTHANDLER_H
