#include <stdio.h>
#include <iostream>
#include <math.h>

int main()
{
    	double x,y,z,a,xsquare,ysquare,zsquare;
	printf("Enter x: ");
    scanf("%lf", &x);
    printf("Enter y: ");
    scanf("%lf", &y);
    printf("Enter z: ");
    scanf("%lf", &z);
    a= 2;
    //printf("Enter power: ");
    //scanf("%lf", &a);
    xsquare= pow(x,a);
    ysquare= pow(y,a);
    zsquare= pow(z,a);
    //printf("%lf",xsquare);
    //printf("%lf",ysquare);
    //printf("%lf",zsquare);
    if (pow(z,a) == pow(x,a) + pow(y,a))
    {
        printf("True");
    }
    else if (pow(x,a) == pow(z,a) + pow(y,a))
    {
        printf("True");
    }
    else if (pow(y,a) == pow(x,a) + pow(z,a))
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    printf("\n");
    system("pause");
    return(0);
}