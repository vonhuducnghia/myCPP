#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int random(int minN, int maxN)
{
    return minN + rand() % (maxN + 1 - minN);
}
int main()
{
    srand((int)time(0));
    int random_0;
    int n, i, minv, maxv;
    printf("Array size: ");
    scanf("%d", &n);
    int arr0[n];
    printf("Enter min value: ");
    scanf("%d", &minv);
    printf("Enter max value: ");
    scanf("%d", &maxv);
    for (int i = 0; i < n; ++i)
    {
        random_0 = random(minv,maxv);
        printf("%d\t", random_0);
        arr0[i] = random_0;
    }
    printf("\n%d", arr0[1]);
    return 0;
}