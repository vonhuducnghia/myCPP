#include <stdio.h>

int main()
{
    FILE *fp;
    char str[60];

    // open a file
    fp = fopen("Demo.txt", "r");
    if (fp == NULL)
    {
        perror("Error occured when opened file");
        return -1;
    }
    if (fgets (str, 60, fp) != NULL)
    {
        // print content in terminal
        puts(str);
    }
    fclose(fp);
}