#include "Boat.h"
using namespace std;
void Boat::save(ofstream& file) {
    file << getName() << "\n";
    file << getTarget() << "\n";
    file << getMaterial() << "\n";
    file << getRP() << "\n";
    file << getSpeed() << "\n";
    file << getPeople() << "\n";
}

void Boat::load(ifstream& file) {
    getline(file, fullName);
    getline(file, target);
    setTarget(target);
    getline(file, material);
    setMaterial(material);
    getline(file, RP);
    setRP(RP);
    getline(file, speed);
    setSpeed(speed);
    getline(file, people);
    setPeople(people);
}

void Boat::menu() {
    int choice;
    do {
        cout << "1. Show\n";
        cout << "2. Change name\n";
        cout << "3. Change target\n";
        cout << "4. Change material\n";
        cout << "5. Change RP\n";
        cout << "6. Change speed\n";
        cout << "7. Change people\n";
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
            cout << "Enter target: ";
            cin.ignore();
            getline(cin, target);
            setTarget(target);
            break;
        }
        case 4: {
            cout << "Enter material: ";
            cin.ignore();
            getline(cin, material);
            setMaterial(material);
            break;
        }
        case 5: {
            cout << "Enter RP: ";
            cin.ignore();
            getline(cin, RP);
            setRP(RP);
            break;
        }
        case 6: {
            cout << "Enter speed: ";
            cin.ignore();
            getline(cin, speed);
            setSpeed(speed);
            break;
        }
        case 7: {
            cout << "Enter people: ";
            cin.ignore();
            getline(cin, people);
            setPeople(people);
            break;
        }
        }
    } while (choice != 0);
}

void Boat::show() const {
    cout << "Boat\n";
    cout << "Name: " << getName() << "\n";
    cout << "Target: " << getTarget() << "\n";
    cout << "Material: " << getMaterial() << "\n";
    cout << "RP: " << getRP() << "\n";
    cout << "Speed: " << getSpeed() << "\n";
    cout << "People: " << getPeople() << "\n";
}