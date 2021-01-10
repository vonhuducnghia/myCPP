#include <iostream>
#include <algorithm>
#include <numeric>
#include <cmath>
#include <limits>
using namespace std;

void clearInput();
int gcd(int a, int b);
bool withinLower(char i); // lower case
bool withinUpper(char i); // upper case
int modInverse(int a, int b); // from https://rosettacode.org/wiki/Modular_inverse#C.2B.2B

int main()
{
	string choice;
	do
    {
		cout << "Encrypt or Decrypt? [e/d] = ";
		getline(cin, choice);
		transform(choice.begin(), choice.end(), choice.begin(), ::tolower);
	}
    while(choice != "e" && choice != "d");

	cout << "\nInput string: ";
	string input;
	getline(cin, input);
    // My work is from here to line 82
	int a, b;
	do
    {
		a = 0, b = 0;
		cout << "\na and b must be coprime\na = ";
		cin >> a;
		clearInput();
		cout << "b = ";
		cin >> b;
		clearInput();
	}
    while(cin.fail() && gcd(a,b) != 1); // if a and b are not coprime then print nothing

	cout << '\n';

	if(choice == "e")
    {
		for(unsigned int i = 0; i < input.length(); ++i)
        {
			if(withinLower(input[i]))
            {
				cout << (char)((a * (input[i] - 'a') + b) % 26 + 'a');
			}
            else if(withinUpper(input[i]))
            {
				cout << (char)((a * (input[i] - 'A') + b) % 26 + 'A');
			}
            else
            {
				cout << input[i];
			}
		}
	} else
    {
		for(unsigned int i = 0; i < input.length(); ++i)
        {
			if(withinLower(input[i]))
            {
				cout << (char)(modInverse(a, 26) * (26 + input[i] - 'a' - b) % 26 + 'a');
			}
            else if(withinUpper(input[i]))
            {
				cout << (char)(modInverse(a, 26) * (26 + input[i] - 'A' - b) % 26 + 'A');
			}
            else
            {
				cout << input[i];
			}
		}
	}

	cout << '\n';
	return 0;
}

// reference from internet
void clearInput()
{
	cin.ignore(numeric_limits<streamsize>::max(),'\n');
}

int gcd(int a, int b)
{
	return b == 0 ? a : gcd(b, a % b);
}

bool withinLower(char i)
{
	return i >= 'a' && i <= 'z' ? true : false;
}

bool withinUpper(char i)
{
	return i >= 'A' && i <= 'Z' ? true : false;
}

// from https://rosettacode.org/wiki/Modular_inverse#C.2B.2B
// inverse function
int modInverse(int a, int b)
{
	int b0 = b, t, q;
	int x0 = 0, x1 = 1;
	if (b == 1) return 1;
	while (a > 1)
    {
		q = a / b;
		t = b, b = a % b, a = t;
		t = x0, x0 = x1 - q * x0, x1 = t;
	}
	if (x1 < 0) x1 += b0;
	return x1;
}