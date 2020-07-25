//
// Created by jakob on 7/24/20.
//

#ifndef ARCHITECTURE_MOUSE_H
#define ARCHITECTURE_MOUSE_H

#include <GLFW/glfw3.h>

class Mouse {
public:
    float getXOffset();
    float getYOffset();
    static void mouse_callback(GLFWwindow* window, double xpos, double ypos);
    static void scroll_callback(GLFWwindow* window, double xoffset, double yoffset);

private:
    float xOffset, yOffset;
};


#endif //ARCHITECTURE_MOUSE_H
