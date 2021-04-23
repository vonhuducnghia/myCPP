#include <stdio.h>
#include <stdlib.h>


// create and print an array
int main()
{
    // n rows and m columns
    const int n = 10;
    const int m = 10;
    int data[n][m];

    // set random values from [0,9]
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<m; j++)
        {
            data[i][j] = rand()%10;
        }
    }

    // print arr
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<m; j++)
        {
            printf("%d ", data[i][j]);
        }
        printf("\n");
    }

    printf("\n");
    printf("\n");

    // extract a template
    const int k = 3;
    int templ[k][k];

    // copy
    for (int u=0; u<k; u++)
    {
        for (int v=0; v<k; v++)
        {
            templ[u][v] = data[5+u][5+v];
        }
    }

    // print arr
    for (int i=0; i<k; i++)
    {
        for (int j=0; j<k; j++)
        {
            printf("%d ", templ[i][j]);
        }
        printf("\n");
    }


    int result_i = 0;
    int result_j = 0;
    int SAD_min = RAND_MAX;
 // cost
    for (int i=1; i<n-1; i++)
    {
        for (int j=1; j<m-1; j++)
        {
            // compute cost
            int SAD = 0;
            for (int u=0; u<k; u++)
            {
                for (int v=0; v<k; v++)
                {
                    SAD = SAD + abs(data[i+u][j+v] - templ[u][v]);
                }
            }

            // check min
            if (SAD_min > SAD)
            {
                SAD_min = SAD;

                // update (i,j)
                result_i = i;
                result_j = j;
            }
        }
    }

    printf("result_i: %d \n", result_i);
    printf("result_j: %d \n", result_j);

    return 0;

}