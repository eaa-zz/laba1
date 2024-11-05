#ifndef LAB1CCP_SUBMARINE_H
#define LAB1CCP_SUBMARINE_H

#include "ship.h"
#include <string>
class Submarine: public Ship
{
private:
    string length;
    string width;
    string crew;
    string time;
    string speed;
    string arm;
protected:
    string fullLength;
    string fullWidth;
    string fullCrew;
    string fullTime;
    string fullSpeed;
    string fullArm;
public:
    Submarine() : length(""), width(""), crew(""), time(""),  speed(""),  arm("") {}
    Submarine(const string& name, const string& l, const string& w, const string& c, const string& t, const string& s, const string& a )
        : Ship(name), fullLength(l), fullWidth(w), fullCrew(c), fullTime(t), fullSpeed(s), fullArm(a){}

    void save(ofstream& file) override;
    void load(ifstream& file) override;
    void menu() override;
    void show() const override;

    void setLen(const string& length) {
        fullLength = length;
    }
    string getLen() const {
        return fullLength;
    }

    void setWidth(const string& width) {
        fullWidth = width;
    }
    string getWidth() const {
        return fullWidth;
    }

    void setCrew(const string& crew) {
        fullCrew = crew;
    }
    string getCrew() const {
        return fullCrew;
    }

    void setTime(const string& time) {
        fullTime = time;
    }
    string getTime() const {
        return fullTime;
    }

    void setSpeed(const string& speed) {
        fullSpeed = speed;
    }
    string getSpeed() const {
        return fullSpeed;
    }

    void setArm(const string& arm) {
        fullArm = arm;
    }
    string getArm() const {
        return fullArm;
    }
};
#endif //LAB1CCP_SUBMARINE_H
