#include <iostream>
#include <stdio.h>
#include <iomanip>
#include <math.h>
using namespace std;

// Compute fact

// Method 1:
int fact (int n)
{
    if(n == 0)
        return 1; 
    return n*fact(n-1); 
}
//compute e
float e(int n)
{
    if ( n == 0 )
        return 1;
    return (1)/static_cast<float>(fact(n)) + (e(n-1));
}

int main ()
{
    int n; 
    printf("Enter the value: "); scanf("%d", &n); 
    printf("%f", e(n));

// Method 2:
    int m;
	float g;
	double f,h;
	scanf("%d", &m);
	for (g = 0; g <= m; g++)
	{
		f = (1 / g) + 1;
		// e = (1/n + 1)^n
		h = pow(f, g);
	}
	printf("%lf", h);

    return 0;
}