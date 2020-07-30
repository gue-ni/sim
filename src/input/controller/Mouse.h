//
// Created by jakob on 7/24/20.
//

#ifndef ARCHITECTURE_MOUSE_H
#define ARCHITECTURE_MOUSE_H

#include <GLFW/glfw3.h>

class Mouse {
public:
    double getXOffset();
    double getYOffset();
    static void cursor_callback(GLFWwindow* window, double xpos, double ypos);
    static void scroll_callback(GLFWwindow* window, double xoffset, double yoffset);

private:
    static bool firstMouse;
    double xOffset, yOffset;
    static double lastX, lastY;
    static double xoffset, yoffset;
    static double zoom;
};


#endif //ARCHITECTURE_MOUSE_H
