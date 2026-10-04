#include <iostream>
#include <cstdlib>
#include "menu.h"

using namespace std;

int menu()
{
    int option;

    system("cls");

    cout << "==============================" << endl;
    cout << "          MAIN MENU" << endl;
    cout << "==============================" << endl;
    cout << "1. Write to File" << endl;
    cout << "2. Read File" << endl;
    cout << "3. Calculation 1" << endl;
    cout << "4. Calculation 2" << endl;
    cout << "5. Exit" << endl;
    cout << "==============================" << endl;
    cout << "Enter your selection: ";

    cin >> option;

    return option;
}
