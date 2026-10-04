#include <stdio.h>
#include "optionSelector.h"
#include "writeFile.h"
#include "readFile.h"
#include "calculation1.h"
#include "calculation2.h"

void mainLoop(int option)
{
    int number1;
    int number2;

    switch (option)
    {
        case 1:
            writeFile();
            break;

        case 2:
            readFile();
            break;

        case 3:
            printf("\nEnter the first integer: ");
            scanf("%d", &number1);

            printf("Enter the second integer: ");
            scanf("%d", &number2);

            calculation1(number1, number2);
            break;

        case 4:
            printf("\nEnter the first integer: ");
            scanf("%d", &number1);

            printf("Enter the second integer: ");
            scanf("%d", &number2);

            calculation2(number1, number2);
            break;

        case 5:
            printf("Exiting program...\n");
            break;

        default:
            printf("Invalid selection. Please enter a number from 1 to 5.\n");
            break;
    }
}
