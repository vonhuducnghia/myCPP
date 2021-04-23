#include <stdio.h>
#include <math.h>

int main()
{
	int a = 0;
	double b, y;
	printf("Enter b: ");
	scanf("%lf", &b);
	switch (a)
	{
		case 0:
		y = pow(b,2);
		printf("y = %lf", y);
		break;

		case 1:
		y = sqrt(b);
		printf("y = %lf", y);
		break;

		case 2:
		y = b;
		printf("y = %lf", y);
		break;
	}
	//printf("%lf", y);
	return(0);
}