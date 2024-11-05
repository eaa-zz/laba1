#include "Keeper.h"
#include "submarine.h"
#include "Sailer.h"
#include "Boat.h"
using namespace std;
Keeper::Keeper() : ships(nullptr), counter(0) {}

Keeper::~Keeper() {
    clear();
}

void Keeper::clear() {
    for (int i = 0; i < counter; ++i) {
        delete ships[i];
    }
    delete[] ships;
    counter = 0;
     ships = nullptr;
}

void Keeper::add(Ship* ship) {
    Ship** temp = new Ship*[counter + 1];
    for (int i = 0; i < counter; ++i) {
        temp[i] = ships[i];
    }
    temp[counter] = ship;
    delete[] ships;
    ships = temp;
    ++counter;
}

void Keeper::remove(int index) {
    if (index < 0 || index >= counter) {
        cerr << "Invalid index.\n";
        return;
    }
    delete ships[index];
    for (int i = index; i < counter - 1; ++i) {
        ships[i] = ships[i + 1];
    }
    --counter;
}

void Keeper::show() const {
    for (int i = 0; i < counter; ++i) {
        ships[i]->show();
        cout << "-----------------------\n";
    }
}

void Keeper::save(const string& filename) {
    ofstream file(filename, ios::trunc);
    if (!file) {
        cerr << "Error opening a file for writing.\n";
        return;
    }

    for (int i = 0; i < counter; ++i) {
        if (dynamic_cast<Submarine*>(ships[i])) {
            file << "[submarine]\n";
        }else if (dynamic_cast<Sailer*>(ships[i])) {
            file << "[sailer]\n";
        }else if (dynamic_cast<Boat*>(ships[i])) {
            file << "[boat]\n";
        }
        ships[i]->save(file);
    }
    file.close();
    cout << "Saved.\n";
}

void Keeper::load(const string& filename) {
    ifstream file(filename);
    if (!file) {
        cerr << "Error opening the file for reading.\n";
        return;
    }

    clear();
    string line;
    while (getline(file, line)) {
        Ship* ship = nullptr;
        if (line == "[submarine]"){
            ship = new Submarine();
        }else if (line == "[saler]") {
            ship = new Sailer();
        } else if (line == "[boat]") {
            ship = new Boat();
        }
        if (ship) {
            ship->load(file);
            add(ship);
        }
    }
    file.close();
    cout << "The data is downloaded from a file.\n";

}

void Keeper::rename(int index){
    if (index < 0 || index >= counter) {
        cerr << "Invalid index.\n";
        return;
    }
    ships[index]->menu();
    ships[index]->show();
    cout << "-----------------------\n";
}