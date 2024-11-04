#include <iostream>
#include "Keeper.h"
#include "submarine.h"
using namespace std;
int main() {
    Keeper keeper;
    int choice;
    int input;
    do {
        cout << "1. Add submarine\n";
        cout << "2. Add car\n";
        cout << "3. Add train\n";
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



                        cout << "Choose item:\n1)Furniture\n2)Worker\n3)Car\n";
                        cin >> input;
                        Ship *pNewItem;
                        switch (input) {
                            case 1:
                                pNewItem = new Submarine();
                                pNewItem->Menu();
                                break;
                            case 2:
                                cout << "> ";
                                break;
                            case 3:

                                break;
                            default:
                                std::cout << "error: unknown type\n";
                                break;

                    }
                        break;

            }
                case 2: {

                    break;
                }
                case 3: {

                    break;
                }
                case 4:
                    keeper.print();
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
                    cout << "Enter file's name to save cargo transportations: ";
                    cin >> filename;
                    keeper.save(filename);
                    break;
                }
                case 7: {
                    string filename;
                    cout << "Enter file's name to download cargo transportations: ";
                    cin >> filename;
                    keeper.load(filename);
                    break;
                }
                case 8: {
                    int index;
                    cout << "Enter index of the cargo transportation to edit: ";
                    cin >> index;
                    keeper.rename(index - 1);
                    break;
                }
            }
        }

        while (choice != 0);

        return 0;


}