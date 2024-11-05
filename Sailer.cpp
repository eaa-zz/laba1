#include "Sailer.h"
using namespace std;
void Sailer::save(ofstream& file) {
    file << getName() << "\n";
    file << getType() << "\n";
    file << getTitle() << "\n";
    file << getTarget() << "\n";
    file << getLen() << "\n";
    file << getSpeed() << "\n";
    file << getCrew() << "\n";
}

void Sailer::load(ifstream& file) {
    getline(file, fullName);
    getline(file, type);
    setType(type);
    getline(file, title);
    setTitle(title);
    getline(file, target);
    setTarget(target);
    getline(file, length);
    setLen(length);
    getline(file, speed);
    setSpeed(speed);
    getline(file, crew);
    setCrew(crew);
}

void Sailer::menu() {
    int choice;
    do {
        cout << "1. Show\n";
        cout << "2. Change name\n";
        cout << "3. Change type\n";
        cout << "4. Change title\n";
        cout << "5. Change target\n";
        cout << "6. Change length\n";
        cout << "7. Change speed\n";
        cout << "8. Change crew\n";
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
            cout << "Enter type: ";
            cin.ignore();
            getline(cin, type);
            setType(type);
            break;
        }
        case 4: {
            cout << "Enter title: ";
            cin.ignore();
            getline(cin, title);
            setTitle(title);
            break;
        }
        case 5: {
            cout << "Enter target: ";
            cin.ignore();
            getline(cin, target);
            setTarget(target);
            break;
        }
        case 6: {
            cout << "Enter length: ";
            cin.ignore();
            getline(cin, length);
            setLen(length);
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
            cout << "Enter crew: ";
            cin.ignore();
            getline(cin, crew);
            setCrew(crew);
            break;
        }
        }
    } while (choice != 0);
}

void Sailer::show() const {
    cout << "Sailer\n";
    cout << "Name: " << getName() << "\n";
    cout << "Type: " << getType() << "\n";
    cout << "Title: " << getTitle() << "\n";
    cout << "Target: " << getTarget() << "\n";
    cout << "Length: " << getLen() << "\n";
    cout << "Speed: " << getSpeed() << "\n";
    cout << "Crew: " << getCrew() << "\n";
}