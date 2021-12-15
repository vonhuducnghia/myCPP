#include <stdlib.h>
#include <math.h>
int main()
{
    long int x;

    for (double i = 1.0; i <= 3.0; i++)
    {
        long double y = 0;
        long double z = 0;
        for (double j = 1.0; j <= 3.0; j++)
        {
            z += j * exp(j);
        }
        y = exp(i) / z;
        printf("%lu", y);
        printf("\n");
    }
    return 0;
}