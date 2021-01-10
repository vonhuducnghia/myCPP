#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int n, i;
    srand((int)time(0));
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    double arr0[n];
    
    printf("Array:\t");
    for (i = 0; i < n; i++)
    {
        
        double arr = (double) rand() / RAND_MAX;
        printf("%lf\t", arr);
        arr0[i] = arr;
    }
    printf("%lf", arr0[1]);
    return 0;
}