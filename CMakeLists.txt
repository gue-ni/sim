cmake_minimum_required(VERSION 3.7)
project(architecture)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES src/main.cpp GLAD/src/glad.c)
set(HEADER_FILES src/entities/Entity.h src/graphics/Graphics.h src/input/Input.h src/physics/Physics.h src/Component.h src/Factory.cpp src/Factory.h src/physics/Physics.cpp src/input/Input.cpp src/graphics/Graphics.cpp src/entities/Entity.cpp src/Game.cpp src/Game.h src/Component.cpp src/airplane/Airplane.cpp src/airplane/Airplane.h src/input/AirplaneInput.cpp src/input/AirplaneInput.h src/input/InputHandler.cpp src/input/InputHandler.h src/input/controller/Button.cpp src/input/controller/Button.h src/input/controller/Mouse.cpp src/input/controller/Mouse.h src/input/controller/Joystick.cpp src/input/controller/Joystick.h src/input/controller/JoystickButton.cpp src/input/controller/JoystickButton.h src/camera/Camera.cpp src/camera/Camera.h src/camera/ThirdPerson.cpp src/camera/ThirdPerson.h src/camera/FirstPerson.cpp src/camera/FirstPerson.h src/camera/CockpitView.cpp src/camera/CockpitView.h src/graphics/shader.h)

set(dir ${CMAKE_CURRENT_SOURCE_DIR})
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${dir}/build)

include_directories(glm)
include_directories(GLAD/include)

add_subdirectory(dependencies)
add_executable(architecture ${SOURCE_FILES} ${HEADER_FILES})

target_link_libraries(architecture glfw)


