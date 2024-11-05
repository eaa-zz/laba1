#include "submarine.h"
using namespace std;
void Submarine::save(ofstream& file) {
    file << getName() << "\n";
    file << getLen() << "\n";
    file << getWidth() << "\n";
    file << getCrew() << "\n";
    file << getTime() << "\n";
    file << getSpeed() << "\n";
    file << getArm() << "\n";
}

void Submarine::load(ifstream& file) {
    getline(file, fullName);
    getline(file, length);
    setLen(length);
    getline(file, width);
    setWidth(width);
    getline(file, crew);
    setCrew(crew);
    getline(file, time);
    setTime(time);
    getline(file, speed);
    setSpeed(speed);
    getline(file, arm);
    setArm(arm);
}

void Submarine::menu() {
    int choice;
    do {
        cout << "1. Show\n";
        cout << "2. Change name\n";
        cout << "3. Change length\n";
        cout << "4. Change wigth\n";
        cout << "5. Change crew\n";
        cout << "6. Change time\n";
        cout << "7. Change speed\n";
        cout << "8. Change arm\n";
        cout << "0. Exit\n";
        cin >> choice;

        switch (choice) {
        case 1:
            show();
            break;
        case 2: {
            string newName;
            cout << "Enter new name: ";
            cin.ignore();
            getline(cin, newName);
            setName(newName);
            break;
        }
        case 3: {
            cout << "Enter length: ";
            cin.ignore();
            getline(cin, length);
            setLen(length);
            break;
        }
        case 4: {
            cout << "Enter wigth: ";
            cin.ignore();
            getline(cin, width);
            setWidth(width);
            break;
        }
        case 5: {
            cout << "Enter crew: ";
            cin.ignore();
            getline(cin, crew);
            setCrew(crew);
            break;
        }
        case 6: {
            cout << "Enter time: ";
            cin.ignore();
            getline(cin, time);
            setTime(time);
            break;
        }
        case 7: {
            cout << "Enter speed: ";
            cin.ignore();
            getline(cin, speed);
            setSpeed(speed);
            break;
        }
        case 8: {
            cout << "Enter arm: ";
            cin.ignore();
            getline(cin, arm);
            setArm(arm);
            break;
        }
        }
    } while (choice != 0);
}

void Submarine::show() const {
    cout << "Submarine\n";
    cout << "Name: " << getName() << "\n";
    cout << "Length: " << getLen() << "\n";
    cout << "Wigth: " << getWidth() << "\n";
    cout << "Crew: " << getCrew() << "\n";
    cout << "Time: " << getTime() << "\n";
    cout << "Speed: " << getSpeed() << "\n";
    cout << "Arm: " << getArm() << "\n";
}