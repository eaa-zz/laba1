#ifndef LAB1CCP_SAILER_H
#define LAB1CCP_SAILER_H

#include "ship.h"
#include <string>
class Sailer: public Ship
{
private:
    string type;
    string title;
    string target;
    string length;
    string speed;
    string crew;
protected:
    string fullType;
    string fullTitle;
    string fullTarget;
    string fullLength;
    string fullSpeed;
    string fullCrew;
public:
    Sailer() : type(""), title(""), target(""), length(""),  speed(""),  crew("") {}
    Sailer(const string& name, const string& t, const string& t2, const string& t3, const string& l, const string& s, const string& c)
        : Ship(name), fullType(t), fullTitle(t2), fullTarget(t3), fullLength(l), fullSpeed(s), fullCrew(c){}

    void save(ofstream& file) override;
    void load(ifstream& file) override;
    void menu() override;
    void show() const override;

    void setType(const string& type) {
        fullType = type;
    }
    string getType() const {
        return fullType;
    }

    void setTitle(const string& title) {
        fullTitle = title;
    }
    string getTitle() const {
        return fullTitle;
    }
    void setTarget(const string& target) {
        fullTarget = target;
    }
    string getTarget() const {
        return fullTarget;
    }

    void setLen(const string& length) {
        fullLength = length;
    }
    string getLen() const {
        return fullLength;
    }

    void setSpeed(const string& speed) {
        fullSpeed = speed;
    }
    string getSpeed() const {
        return fullSpeed;
    }

    void setCrew(const string& crew) {
        fullCrew = crew;
    }
    string getCrew() const {
        return fullCrew;
    }
};
#endif //LAB1CCP_SUBMARINE_H
