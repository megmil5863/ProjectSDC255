#include <iostream>
#include <cstdio>
#include "writeFile.h"

using namespace std;

void writeFile()
{
    FILE* file;

    file = fopen("projectData.txt", "w");

    if (file == NULL)
    {
        cout << "Error: Unable to open the file." << endl;
        return;
    }

    fprintf(file, "This information was written to the file.\n");

    fclose(file);

    cout << "Information successfully written to the file." << endl;
}
