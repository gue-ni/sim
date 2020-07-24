#include <glad/glad.h>
#include <GLFW/glfw3.h>

#include <iostream>
#include <glm.hpp>
#include <map>
#include "entities/Entity.h"
#include "Factory.h"
#include "Game.h"
#include "input/InputHandler.h"


void error_exit(std::string msg){
    std::cout << msg << std::endl;
    exit(EXIT_FAILURE);
}
void framebuffer_size_callback(GLFWwindow* window, int width, int height);
void processInput(GLFWwindow *window);

const unsigned int SCR_WIDTH    = 640;
const unsigned int SCR_HEIGHT   = 480;
float deltaTime = 0.0f, lastFrame = 0.0f;

Game game;

int main() {
    glfwInit();
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

    GLFWwindow* window = glfwCreateWindow(SCR_WIDTH, SCR_HEIGHT, "Flight Sim", NULL, NULL);
    if (window == NULL){
        std::cout << "Failed to create GLFW window" << std::endl;
        glfwTerminate();
        return -1;
    }
    glfwMakeContextCurrent(window);
    glfwSetFramebufferSizeCallback(window, framebuffer_size_callback);

    glfwSetInputMode(window, GLFW_CURSOR, GLFW_CURSOR_NORMAL);
    //glfwSetInputMode(window, GLFW_CURSOR, GLFW_CURSOR_DISABLED);

    if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress)){
        std::cout << "Failed to initialize GLAD" << std::endl;
        return -1;
    }

    int nbFrames = 0;
    double lastTime = glfwGetTime();

    InputHandler::window = window;

    for (int i = 0; i < 5; i++) game.create();

    while(!glfwWindowShouldClose(window)){
        float currentFrame = glfwGetTime();
        deltaTime = currentFrame - lastFrame;

        nbFrames++;
        if ( currentFrame - lastTime >= 1.0 ){
            printf("%f ms/frame (%f)\n", 1000.0/double(nbFrames), deltaTime);
            nbFrames = 0;
            lastTime += 1.0;
        }
        lastFrame = currentFrame;

        processInput(window);

        game.update(deltaTime);

        glfwSwapBuffers(window);
        glfwPollEvents();
    }
    glfwTerminate();
    return 0;
}

void processInput(GLFWwindow *window){
    if (glfwGetKey(window, GLFW_KEY_ESCAPE) == GLFW_PRESS)
        glfwSetWindowShouldClose(window, true);
}

void framebuffer_size_callback(GLFWwindow* window, int width, int height){
    glViewport(0, 0, width, height);
}


