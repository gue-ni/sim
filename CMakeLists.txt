cmake_minimum_required(VERSION 3.7)
project(architecture)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES src/main.cpp GLAD/src/glad.c)
set(HEADER_FILES src/entities/Entity.h src/graphics/Graphics.h src/input/Input.h src/physics/Physics.h src/Component.h src/Factory.cpp src/Factory.h src/physics/Physics.cpp src/input/Input.cpp src/graphics/Graphics.cpp src/entities/Entity.cpp src/Game.cpp src/Game.h src/Component.cpp src/airplane/Airplane.cpp src/airplane/Airplane.h src/input/AirplaneInput.cpp src/input/AirplaneInput.h src/input/InputHandler.cpp src/input/InputHandler.h src/input/Button.cpp src/input/Button.h)

set(dir ${CMAKE_CURRENT_SOURCE_DIR})
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${dir}/build)

include_directories(glm)
include_directories(GLAD/include)

add_subdirectory(dependencies)
add_executable(architecture ${SOURCE_FILES} ${HEADER_FILES})

target_link_libraries(architecture glfw)


