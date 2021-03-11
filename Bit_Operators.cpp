#include <iostream>
using std::cout;
using std::endl;

/* NOTATION
<<, >>, >>>
*/
int f(unsigned int a, unsigned int b)
{
    int c = 0;
    while (b != 0)
    {
        if ((b && 1) != 0)
        {
            c = c + a;
            a = a << 1;
            b = b >> 1;
            //left shift a by 1;
            //right shift b by 1;
        }
    }
    return c;
}

int main()
{
    unsigned int x, y;
    unsigned int m, n;
    x = 5;
    y = 2;
    n = 1;
    cout << f(x, y);
    m = n >> 1;
    //cout << m;
}