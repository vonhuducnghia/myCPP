#include <string>
#include <iostream>
using namespace std;

int main()
{
    string sTr;
    int lenstr, indx;
    cout << "Enter your string: ";
    cin >> sTr;
    cout << sTr << endl;
    lenstr = sTr.length();
    cout << lenstr;
}