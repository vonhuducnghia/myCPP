#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    int a;
    string b;
    cin >> str;
    a = str.length();
    b = str.substr(1, 4);
    cout << a << endl;
    cout << b << endl;
}