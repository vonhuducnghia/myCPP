#include <stdio.h>
#include <math.h>

int number[5] = {1, 8, 2, 7, 2};
int main()
{
	int i, average = 0;
	for (i = 0 ; i <= 4 ; i++)
	{
		average = average + number[i];
	}
	printf("%d", average / 5);
	printf("\n");


	int max;
	max = number[0];
	for (i = 1 ; i <= 4 ; i++)
	{
		if (max < number[i])
		{
			max = number[i];
		}
	}
	printf("%d", max);
	printf("\n");
	

	int min;
	min = number[0];
	for (i = 1 ; i <= 4 ; i++)
	{
		if (min > number[i])
		{
			min = number[i];
		}
	}
	printf("%d", min);
	printf("\n");
	

	int x;
	scanf("%d", &x);
	for (i = 1 ; i <= 4 ; i++)
	{
		if (x == number[i])
		{
			x = 1;
		}
	}
	if (x == 1)
	{
		printf("True");
	}
	else
	{
		printf("False");
	}
	printf("\n");
	

	int a;
	double b, y;
	printf("Enter a: ");
	scanf("%d", &a);
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
	return(0);
}