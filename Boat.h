#ifndef LAB1CCP_BOAT_H
#define LAB1CCP_BOAT_H

#include "ship.h"
#include <string>
class Boat: public Ship
{
private:
    string target;
    string material;
    string RP;
    string speed;
    string people;
protected:
    string fullTarget;
    string fullMaterial;
    string fullRP;
    string fullSpeed;
    string fullPeople;
public:
    Boat() : target(""), material(""), RP(""), speed(""),  people("") {}
    Boat(const string& name, const string& t, const string& m, const string& r, const string& s, const string& p )
        : Ship(name), fullTarget(t), fullMaterial(m), fullRP(r), fullSpeed(s), fullPeople(s) {}

    void save(ofstream& file) override;
    void load(ifstream& file) override;
    void menu() override;
    void show() const override;

    void setTarget(const string& target) {
        fullTarget = target;
    }
    string getTarget() const {
        return fullTarget;
    }

    void setMaterial(const string& material) {
        fullMaterial = material;
    }
    string getMaterial() const {
        return fullMaterial;
    }

    void setRP(const string& RP) {
        fullRP = RP;
    }
    string getRP() const {
        return fullRP;
    }

    void setSpeed(const string& speed) {
        fullSpeed = speed;
    }
    string getSpeed() const {
        return fullSpeed;
    }

    void setPeople(const string& people) {
        fullPeople = people;
    }
    string getPeople() const {
        return fullPeople;
    }
};
#endif //LAB1CCP_SUBMARINE_H
