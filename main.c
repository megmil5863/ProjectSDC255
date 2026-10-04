#include <stdio.h>
#include "menu.h"
#include "optionSelector.h"

int main(void)
{
    int option;

    do
    {
        option = menu();

        mainLoop(option);

        if (option != 5)
        {
            printf("\nPress Enter to continue...");

            getchar();
            getchar();
        }

    } while (option != 5);

    return 0;
}
