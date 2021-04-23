#include<iostream>
#include<string.h>
using namespace std;

void convertToASCII(string letter)
{
    for (int i = 0; i < letter.length(); i++)
    {
        char x = letter.at(i) - 'a';
        cout << int(x) << endl;
    }
}

int main()
{
    string plaintxt;
    cout << "Enter the message: ";
    getline(cin, plaintxt);  // input plaintext
    convertToASCII(plaintxt);
}