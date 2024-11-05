#ifndef LAB1CCP_SHIP_H
#define LAB1CCP_SHIP_H
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Ship {
public:
    Ship() : fullName("-") {}
    Ship(const string& name) : fullName(name) {}
    virtual ~Ship() {}

    virtual void save(ofstream& file) = 0;
    virtual void load(ifstream& file) = 0;
    virtual void menu() = 0;
    virtual void show() const {
        cout << "Full Name: " << fullName << endl;
    }

    void setName(const string& name) {
        fullName = name;
    }

    string getName() const {
        return fullName;
    }
protected:
    string fullName;
};
#endif //LAB1CCP_SHIP_H

