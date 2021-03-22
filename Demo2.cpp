#include <iostream>
using namespace std;
// Recursive function to return gcd of a and b
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b); 
     
}
  
// Driver program to test above function
int main()
{
    int a = 11, b = 7;
    cout<<"GCD of "<<a<<" and "<<b<<" is "<<gcd(a, b);
}