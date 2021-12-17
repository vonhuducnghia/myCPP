#include <iostream>
#include <cmath>

using namespace std;

unsigned int factorial(unsigned int n)
{
    if (n == 0)
        return 1;
    return n * factorial(n - 1);
}

template<typename T>
void sum_computation(T &sum,T x, int n){ 
    sum = sum + 1; 
    for(int i = 0; i < n; i++){
        sum += (pow(-1, i)*x)/factorial(i);
    }
    cout << sum; 
}

int main()
{
    double x, sum = 1.0;
    int n;
    cout << "Input base x: ";
    cin >> x;
    cout << "Input range n: ";
    cin >> n;
    sum_computation(sum, x, n); 
}