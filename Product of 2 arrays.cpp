#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int i, j, k, sum;
    int m, n, o;
    printf("Enter size m: ");
    scanf("%d", &m);
    printf("Enter size n: ");
    scanf("%d", &n);
    printf("Enter size o: ");
    scanf("%d", &o);
    int arr1[m][n], arr2[n][o], arrX[m][o];
    printf("\nEnter the first matrix:\n");
   for (i = 0; i < m; i++)
   {
      for (j = 0; j < n; j++)
      {
         scanf("%d", &arr1[i][j]);
      }
   }
   printf("First matrix: \n");
   for (i = 0; i < m; i++)
   {
      for (j = 0; j < n; j++)
      {
         printf(" %d ", arr1[i][j]);
      }
      printf("\n");
   }
   printf("\n");
   printf("\nEnter the second matrix:\n");
   for (i = 0; i < n; i++)
   {
      for (j = 0; j < o; j++)
      {
         scanf("%d", &arr2[i][j]);
      }
   }
   printf("Second matrix: \n");
   for (i = 0; i < n; i++)
   {
      for (j = 0; j < o; j++)
      {
         printf(" %d ", arr2[i][j]);
      }
    printf("\n");
   }
   printf("\n");

   // product of 2 arrays
    for (i = 0; i < m; i++)
    {
      for (j = 0; j < o; j++)
      {
         sum = 0;
         for (k = 0; k < n; k++)
         {
            sum = sum + arr1[i][k] * arr2[k][j];
         }
         arrX[i][j] = sum;
      }
   }
    printf("Product of 2 matrices:\n");
    for (i = 0; i < m; i++)
    {
      for (j = 0; j < o; j++)
      {
         printf(" %d ", arrX[i][j]);
      }
      printf("\n");
    }
    return 0;
}