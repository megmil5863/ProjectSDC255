#include <stdio.h>
#include "optionSelector.h"
#include "writeFile.h"
#include "readFile.h"
#include "calculation1.h"
#include "calculation2.h"

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
            printf("Exiting program...\n");
            break;

        default:
            printf("Invalid selection. Please enter a number from 1 to 5.\n");
            break;
    }
}
