//
// Created by evush on 27.10.2024.
//
#include "submarine.h"
Submarine::Submarine() = default;
Submarine::~Submarine() = default;

void Submarine::Print() const {
    std::cout << "Submarine: \n" << g_sLen << " " << g_sWidth  << std::endl;
}

void Submarine::Save(ostream& os) {
    os << "Car:\n";
    os << "model: " << g_sLen << "\n";
    os << "number_plate: " << g_sWidth << "\n";
    os << "end\n\n";
    std::cout << "Car saved successfully.\n";
}

void Submarine::Load(istream& is) {
    while (!is.eof()) {
        std::string key, value;
        is >> key;
        if(key == "end")
            break;
        is >> value;
        if (key == "model:") {
            g_sLen = value;
        }
        else if (key == "number_plate:") {
            g_sWidth = value;
        }
    }
    std::cout << "Car loaded successfully.\n";
}



void Submarine::SetLen(const string &sLen) {
    g_sLen = sLen;
}
string Submarine::GetLen() const {
    return g_sLen;
}

void Submarine::SetWidth(const string &sWidth) {
    g_sWidth = sWidth;
}
string Submarine::GetWidth() const {
    return g_sWidth;
}

void Submarine::SetCrew(const string &sCrew) {
    g_sCrew = sCrew;
}
string Submarine::GetCrew() const {
    return g_sCrew;
}

void Submarine::SetTime(const string &sTime) {
    g_sTime = sTime;
}
string Submarine::GetTime() const {
    return g_sTime;
}

void Submarine::SetSpeed(const string &sSpeed) {
    g_sSpeed = sSpeed;
}
string Submarine::GetSpeed() const {
    return g_sSpeed;
}

void Submarine::SetArm(const string &sArm) {
    g_sArm = sArm;
}
string Submarine::GetArm() const {
    return g_sArm;
}

void Submarine::Menu() {
    int choice;
    int a = 1;
    while (a) {
        std::cout << "Menu:\n";
        std::cout << "1. Print car information\n";
        std::cout << "2. Set car model\n";
        std::cout << "3. Set car number plate\n";
        std::cout << "4. Exit\n";
        std::cin >> choice;
        switch (choice) {
            case 1:
                this->Print();
                break;
            case 2: {
                string len;
                cout << "Enter car model: ";
                cin >> len;
                this->SetLen( len);
            }
                break;
            case 3: {
                std::string width;
                std::cout << "Enter car number plate: ";
                std::cin >> width;
                this->SetWidth(width);
            }
                break;
            case 4:
                a = 0;
                break;
            default:
                cerr << "Invalid choice.\n";
                a = 0;
                break;

        }

    }
}