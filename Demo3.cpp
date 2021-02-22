#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    /*int arr1[3][3] = {{1, 2, 3},
                    {4, 5, 6},
                    {7, 8, 9}};
    int i, j, sum;
    for (i = 0; i < 3; i++)
    {
        sum = 0;
        for (j = 0; j < 3; j++)
            {
                sum = sum + arr1[i][j];
            }
        cout << sum << endl;
    }*/
    char alpha = 'A';
    int x;
    char *pa;
    // variable is a single char so require & prefix | pa = &<variable_name>;
    pa = &alpha; /* initialize pointer */
    for(x = 0; x < 26; x++)
    {
        putchar((*pa)++);
    }
    putchar('\n');
} 