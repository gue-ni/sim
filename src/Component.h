//
// Created by jakob on 7/10/20.
//

#ifndef ARCHITECTURE_COMPONENT_H
#define ARCHITECTURE_COMPONENT_H


class Entity;
class Component {
public:
    virtual void update(Entity* entity);
};




#endif //ARCHITECTURE_COMPONENT_H
