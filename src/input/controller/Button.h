//
// Created by jakob on 7/24/20.
//

#ifndef ARCHITECTURE_BUTTON_H
#define ARCHITECTURE_BUTTON_H

#include <GLFW/glfw3.h>

class Button {
public:
    Button(int key, GLFWwindow *w);
    bool held();
    bool pressed();

private:
    int key;
    double disabled;
    GLFWwindow *window;

};


#endif //ARCHITECTURE_BUTTON_H
