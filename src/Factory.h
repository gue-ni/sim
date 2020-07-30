//
// Created by jakob on 7/10/20.
//

#ifndef ARCHITECTURE_FACTORY_H
#define ARCHITECTURE_FACTORY_H


class Shader;
class Entity;
class Factory {
public:
    Factory();
    Entity *entity(int id);

    Shader *standardShader;
};


#endif //ARCHITECTURE_FACTORY_H
