#include <iostream>
#include <math.h>
#include <bits/stdc++.h>
using namespace std;

template <typename T>
    void sum_computation(T x, T &sum, int n)
    {
        T multi = x;
        int i;
        for (i = 1; i <= n; i++)
        {
            sum = sum + multi / i;
            multi = multi * x;
        }
    }

int main()
{
    double x, sum = 1.0;
    int n;
    cout << "Input base x: ";
    cin >> x;
    cout << "Input range n: ";
    cin >> n;
    sum_computation(x, sum, n);
    cout << sum;
    return 0;
}