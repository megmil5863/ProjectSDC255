#include <stdio.h>
#include "writeFile.h"

void writeFile(void)
{
    FILE *file;

    file = fopen("projectData.txt", "w");

    if (file == NULL)
    {
        printf("Error: Unable to open the file.\n");
        return;
    }

    fprintf(file, "This information was written to the file.\n");

    fclose(file);

    printf("Information successfully written to the file.\n");
}
