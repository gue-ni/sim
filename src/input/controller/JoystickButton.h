//
// Created by jakob on 7/25/20.
//

#ifndef ARCHITECTURE_JOYSTICKBUTTON_H
#define ARCHITECTURE_JOYSTICKBUTTON_H


#include "Button.h"

class JoystickButton : public Button {
public:
    JoystickButton(int key, GLFWwindow *w, const unsigned char* b);
    bool held() override ;
    bool pressed() override ;

private:
    const unsigned char* buttons;

};


#endif //ARCHITECTURE_JOYSTICKBUTTON_H
