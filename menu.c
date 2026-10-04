#include <stdio.h>
#include "menu.h"

int menu(void)
{
    int option;

    /* Clear the screen using ANSI escape sequences. */
    printf("\033[2J\033[H");

    printf("==============================\n");
    printf("          MAIN MENU\n");
    printf("==============================\n");
    printf("1. Write to File\n");
    printf("2. Read File\n");
    printf("3. Calculation 1\n");
    printf("4. Calculation 2\n");
    printf("5. Exit\n");
    printf("==============================\n");
    printf("Enter your selection: ");

    scanf("%d", &option);

    return option;
}
