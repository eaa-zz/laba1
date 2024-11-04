//
// Created by evush on 27.10.2024.
//

#ifndef LAB1CCP_SUBMARINE_H
#define LAB1CCP_SUBMARINE_H

#include "ship.h"
#include <string>
class Submarine: public Ship
{
public:
    Submarine();
    ~Submarine() override;
    Submarine(const Submarine&);
    void Print() const override;
    void Save(ostream& os) override;
    void Load (istream& is) override ;
    void Menu() override;
    [[nodiscard]] string GetLen() const;
    string GetWidth() const;
    string GetCrew() const;
    string GetTime() const;
    string GetSpeed() const;
    string GetArm() const;
    void SetLen(const string& sLen);
    void SetWidth(const string& sWidth);
    void SetCrew(const string& sCrew);
    void SetTime(const string& sTime);
    void SetSpeed(const string& sSpeed);
    void SetArm(const string& sArm);

private:
    string g_sLen;
    string g_sWidth;
    string g_sCrew;
    string g_sTime;
    string g_sSpeed;
    string g_sArm;
};
#endif //LAB1CCP_SUBMARINE_H
