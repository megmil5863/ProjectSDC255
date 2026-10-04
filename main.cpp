#include <iostream>
#include "menu.h"
#include "optionSelector.h"

using namespace std;

int main()
{
    int option;

    do
    {
        option = menu();

        mainLoop(option);

        if (option != 5)
        {
            cout << endl;
            cout << "Press Enter to continue...";

            cin.ignore();
            cin.get();
        }

    } while (option != 5);

    return 0;
}
