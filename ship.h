//
// Created by evush on 27.10.2024.
//

#ifndef LAB1CCP_SHIP_H
#define LAB1CCP_SHIP_H
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Ship {
public:
    Ship()= default;
    virtual ~Ship() = default;

    virtual void Print()  const = 0;
    virtual void Save(ostream& os)   = 0;
    virtual void Load(istream& is)  = 0;
    virtual void Menu() = 0;

protected:

};
#endif //LAB1CCP_SHIP_H

