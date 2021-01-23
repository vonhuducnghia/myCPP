#include <stdio.h>

int main()
{
int n;
int i, sum = 0;
printf("Enter the size of the array: ");
scanf("%d", &n);
int arr[n];
printf("Enter the elements of the array: ");
for (i = 0; i < n; i++)
{
    scanf("%d", &arr[i]);
}
for (i = 0; i < n; i++)
{
    sum += arr[i];
}
printf("Sum of element in array: %d", sum);
return 0;
}