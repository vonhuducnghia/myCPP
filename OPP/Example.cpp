#include <iostream>

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
        sum += (((-1)^i)*x)/factorial(i);
    }
    cout << sum; 
}

int main(){
    double sum = 100.0;
    sum_computation(sum, 3.0, 10); 
}