#include <stdio.h>
#include <iostream>

int fact(int n)
{
	if (n == 0) return 1;
	return n * fact(n -1);
}

int main()
{
	int n;
	printf("Enter a number to find its factorial: ");
	scanf("%d", &n);
	printf("%d", fact(n));
	return(0);
}