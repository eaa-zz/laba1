//
// Created by evush on 27.10.2024.
//

#ifndef LAB1CCP_KEEPER_H
#define LAB1CCP_KEEPER_H

#include "ship.h"
#include <fstream>

class Keeper {
private:
    Ship** ships;
    int counter;

public:
    Keeper();
    ~Keeper();

    void add(Ship* ship);
    void remove(int index);
    void print() const;
    void save(const string& filename);
    void load(const string& filename);
    void rename(int index);
    void clear();
};


#endif //LAB1CCP_KEEPER_H
