#include <stdio.h>

void square_root(int number, int num_loop)
{
    double x_n = number/2;
    for (int i = 0; i < num_loop; i++)
    {
        double x_n1 = (x_n + (number / x_n)) / 2.0;
        x_n = x_n1;
    }
    printf("Compute square root of: %d = %f\n", number, x_n);
}
int main()
{
    int a, b, c;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    int num_loop = a;
    square_root(b, num_loop);
    square_root(c, num_loop);
}