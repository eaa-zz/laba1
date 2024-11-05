#include <iostream>
#include "Keeper.h"
#include "submarine.h"
#include "Sailer.h"
#include "Boat.h"
using namespace std;
int main() 
{
    Keeper keeper;
    int choice;
    do {
        cout << "1. Add submarine\n";
        cout << "2. Add sailer\n";
        cout << "3. Add boat\n";
        cout << "4. Show all cargo ships\n";
        cout << "5. Delete cargo ship\n";
        cout << "6. Save to file\n";
        cout << "7. Download from file\n";
        cout << "8. Edit an entry\n";
        cout << "0. Exit\n";
        cin >> choice;

        switch (choice)
        {
                case 1: {
                   string name, length, width, crew, time, speed, arm;
                    cout << "Enter name: ";
                    cin.ignore();
                    getline(cin, name);
                    cout << "Enter length: ";
                    getline(cin, length);
                    cout << "Enter width: ";
                    getline(cin, width);
                    cout << "Enter crew: ";
                    getline(cin, crew);
                    cout << "Enter time: ";
                    getline(cin, time);
                    cout << "Enter speed: ";
                    getline(cin, speed);
                    cout << "Enter arm: ";
                    getline(cin, arm);
                    keeper.add(new Submarine(name, length, width, crew, time, speed, arm));
                    break;  
                }
                case 2: {
                    string name, type, title, target, length, speed, crew;
                    cout << "Enter name: ";
                    cin.ignore();
                    getline(cin, name);
                    cout << "Enter type: ";
                    getline(cin, type);
                    cout << "Enter title: ";
                    getline(cin, title);
                    cout << "Enter target: ";
                    getline(cin, target);
                    cout << "Enter length: ";
                    getline(cin, length);
                    cout << "Enter speed: ";
                    getline(cin, speed);
                    cout << "Enter crew: ";
                    getline(cin, crew);
                    keeper.add(new Sailer(name, type, title, target, length, speed, crew));
                    break;
                }
                case 3: {
                    string name, target, material, RP, speed, people;
                    cout << "Enter name: ";
                    cin.ignore();
                    getline(cin, name);
                    cout << "Enter target: ";
                    getline(cin, target);
                    cout << "Enter material: ";
                    getline(cin, material);
                    cout << "Enter RP: ";
                    getline(cin, RP);
                    cout << "Enter speed: ";
                    getline(cin, speed);
                    cout << "Enter people: ";
                    getline(cin, people);
                    keeper.add(new Boat(name, target, material, RP, speed, people));
                    break;
                }
                case 4:
                    keeper.show();
                break;
                case 5: {
                    int index;
                    cout << "Enter index of the cargo ship to delete: ";
                    cin >> index;
                    keeper.remove(index - 1);
                    break;
                }
                case 6: {
                    string filename;
                    cout << "Enter file's name to save: ";
                    cin >> filename;
                    keeper.save(filename);
                    break;
                }
                case 7: {
                    string filename;
                    cout << "Enter file's name to download: ";
                    cin >> filename;
                    keeper.load(filename);
                    break;
                }
                case 8: {
                    int index;
                    cout << "Enter index of the cargo to edit: ";
                    cin >> index;
                    keeper.rename(index - 1);
                    break;
                }
            }
        }
    while (choice != 0);

return 0;
}