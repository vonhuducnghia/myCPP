#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
   int m, n, l, i, j, p, h, k, sum;
   printf("Enter m and n and p: ");
   scanf("%d", &m);
   scanf("%d", &n);
   scanf("%d", &p);
   l = m*n;
   h = n*p;
   int arr1[l];
   int arr2[m][n];
   int arr3[n][p];
   int arr4[h];
   int arr5[m][p];
   srand(int(time(0)));
   printf("Array 1D:\t");
   for (i = 0; i < l; i++)
   {
      arr1[i] = rand() % 10;
      printf("%d\t", arr1[i]);
   }
   printf("\n");
   printf("Array 2D1:\n");
   for (i = 0; i < m; i++)
   {
      for (j = 0; j < n; j++)
      {
         //conver 1D to 2D
         arr2[i][j] = arr1[i*n + j];
         printf("%d\t", arr2[i][j]);
      }
      printf("\n");
   }
   printf("Array 1D2:\t");
      for (i = 0; i < h; i++)
   {
      arr4[i] = rand() % 10;
      printf("%d\t", arr4[i]);
   }
   printf("\n");
   printf("Array 2D2:\n");
   for (i = 0; i < n; i++)
   {
      for (j = 0; j < p; j++)
      {
         //conver 1D to 2D
         arr3[i][j] = arr4[i*p + j];
         printf("%d\t", arr3[i][j]);
      }
      printf("\n");
   }
   // Products
    for (i = 0; i < m; i++)
    {
      for (j = 0; j < p; j++)
      {
         sum = 0;
         for (k = 0; k < n; k++)
         {
            sum = sum + arr2[i][k] * arr3[k][j];
         }
         arr5[i][j] = sum;
      }
   }
    printf("Product of 2 matrices:\n");
    for (i = 0; i < m; i++)
    {
      for (j = 0; j < p; j++)
      {
         printf(" %d ", arr5[i][j]);
      }
      printf("\n");
    }
   return 0;
}