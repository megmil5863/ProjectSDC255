#include <iostream>
#include "optionSelector.h"
#include "writeFile.h"
#include "readFile.h"
#include "calculation1.h"
#include "calculation2.h"

using namespace std;

void mainLoop(int option)
{
    switch (option)
    {
        case 1:
            writeFile();
            break;

        case 2:
            readFile();
            break;

        case 3:
            calculation1(10, 5);
            break;

        case 4:
            calculation2(10, 5);
            break;

        case 5:
            cout << "Exiting program..." << endl;
            break;

        default:
            cout << "Invalid selection. Please enter a number from 1 to 5." << endl;
            break;
    }
}
