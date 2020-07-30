#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include <iostream>
#include <glm.hpp>
#include <map>
#include "entities/Entity.h"
#include "Game.h"
#include "input/controller/Mouse.h"
#include "input/InputHandler.h"

void framebuffer_size_callback(GLFWwindow* window, int width, int height);
void checkQuit(GLFWwindow *window);

const unsigned int SCR_WIDTH    = 640;
const unsigned int SCR_HEIGHT   = 480;
double deltaTime = 0.0, lastFrame = 0.0;

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

    glfwSetCursorPosCallback(window, Mouse::cursor_callback);
    glfwSetScrollCallback(window, Mouse::scroll_callback);

    glfwSetInputMode(window, GLFW_CURSOR, GLFW_CURSOR_NORMAL);
    //glfwSetInputMode(window, GLFW_CURSOR, GLFW_CURSOR_DISABLED);

    if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress)){
        std::cout << "Failed to initialize GLAD" << std::endl;
        return -1;
    }

    int nbFrames = 0;
    double lastTime = glfwGetTime();

    InputHandler::init(window);

    for (int i = 0; i < 5; i++) game.create();

    Entity* active = nullptr;
    Camera* activeCamera = nullptr;

   while(!glfwWindowShouldClose(window)){
       checkQuit(window);
       double currentFrame = glfwGetTime();
       deltaTime = currentFrame - lastFrame;

       nbFrames++;
       if (currentFrame - lastTime >= 1.0){
            printf("%f ms/frame (%f)\n", 1000.0/double(nbFrames), deltaTime);
            nbFrames = 0;
            lastTime += 1.0;
        }
       lastFrame = currentFrame;

        game.update(deltaTime);

        active = game.getActive();
        activeCamera = active->getCamera();

        glm::dmat4 view = activeCamera->getView();
        glm::dmat4 projection = activeCamera->getProjection();

        game.draw();

        glfwSwapBuffers(window);
        glfwPollEvents();
    }
    glfwTerminate();
    return 0;
}

void checkQuit(GLFWwindow *window){
    if (glfwGetKey(window, GLFW_KEY_ESCAPE) == GLFW_PRESS)
        glfwSetWindowShouldClose(window, true);
}

void framebuffer_size_callback(GLFWwindow* window, int width, int height){
    glViewport(0, 0, width, height);
}
