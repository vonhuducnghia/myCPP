#include <string.h>
#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    FILE *fptr;
    char line[100];

    // open file
    fptr = fopen("a.txt", "r");

    // check if exist
    if (fptr == NULL)
    {
        cout << "ERROR, NO SUCH FILE IN DIRECTORY";
        exit(1);
    }

    // process
    while (EOF != fscanf(fptr, "%[^\n]\n", line))   // EOF: END OF FILE
    {
        cout << line;
    }
    fclose(fptr);
}