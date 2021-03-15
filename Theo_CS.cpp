#include <string>
#include <iostream>
using namespace std;

int main()
{
    string sTr;
    int lenstr, sublen, indxsub, indx1, indx;
    cout << "Enter your string: ";
    cin >> sTr;
    cout << sTr << endl;
    lenstr = sTr.length();
    cout << lenstr << endl;
    cout << "Enter index: ";
    cin >> indx;
    indx1 = indx - 1;
    cout << "Enter substring length: ";
    cin >> sublen;

// Output substring at index has length
    indxsub = indx1 + sublen;
    for (indx1; indx1 < indxsub; indx1++)
    {
        cout << sTr[indx1];
    }

// Output all prefixes and suffixes
    for (int j = 0; j < )
    for (int i = 0; i + 1 < lenstr; i++)
    {
        cout << sTr[i];
    }
}