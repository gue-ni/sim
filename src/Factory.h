//
// Created by jakob on 7/10/20.
//

#ifndef ARCHITECTURE_FACTORY_H
#define ARCHITECTURE_FACTORY_H


class Entity;
class Factory {
public:
    static Entity *entity(int id);
};


#endif //ARCHITECTURE_FACTORY_H
