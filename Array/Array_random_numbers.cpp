#include <stdlib.h>
#include <time.h>
#include <iostream>
using namespace std;

int main()
{
    int n, i;
    srand((int)time(0));
    cout << "Enter the size of the array: ";
    cin >> n;
    cin.ignore();
    double arr0[n];
    
    cout << "Array:\t";
    for (i = 0; i < n; i++)
    {
        
        double arr = (double) rand() / RAND_MAX;
        cout << arr << '\t';
        arr0[i] = arr;
    }
    return 0;
}