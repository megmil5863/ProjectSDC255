#include <stdio.h>
#include "readFile.h"

void readFile(void)
{
    FILE *file;
    int character;

    file = fopen("projectData.txt", "r");

    if (file == NULL)
    {
        printf("Error: Unable to open the file.\n");
        return;
    }

    printf("Contents of the file:\n");
    printf("----------------------\n");

    while ((character = fgetc(file)) != EOF)
    {
        putchar(character);
    }

    fclose(file);
}
