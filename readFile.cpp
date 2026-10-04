#include <iostream>
#include <cstdio>
#include "readFile.h"

using namespace std;

void readFile()
{
    FILE* file;
    int character;

    file = fopen("projectData.txt", "r");

    if (file == NULL)
    {
        cout << "Error: Unable to open the file." << endl;
        return;
    }

    cout << "Contents of the file:" << endl;
    cout << "----------------------" << endl;

    while ((character = fgetc(file)) != EOF)
    {
        cout << static_cast<char>(character);
    }

    fclose(file);
}
