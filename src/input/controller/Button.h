//
// Created by jakob on 7/24/20.
//

#ifndef ARCHITECTURE_BUTTON_H
#define ARCHITECTURE_BUTTON_H

#include <GLFW/glfw3.h>

class Button {
public:
    Button(int key, GLFWwindow *w);

    virtual bool held();

    virtual bool pressed();

protected:
    int key;
    double disabled;
    double spacing = 0.2;
    GLFWwindow *window;

};


#endif //ARCHITECTURE_BUTTON_H
