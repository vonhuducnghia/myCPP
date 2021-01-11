#include <string.h>
#include <iostream>
using namespace std;

int main()
{
	string strName;
	int nAge, nValue;
	char strCopy1[] = "Hello";
	char strCopy2[6];

	cout << "Enter your age: ";
	cin >> nAge;
	cout << "Enter ASCII number: ";
	cin >> nValue;
	cin.ignore(32767, '\n');
	cout << "Enter your name: ";
	getline(cin, strName);
	cout << "Your name is: " << strName << endl;
	cout << "Your age is: " << nAge << endl;
	cout << static_cast<char>(nValue) << endl;	//static_cast<type>(var) dùng để ép kiểu dữ liệu
	// cout << strName.length() << endl;
	// cout << strName.size() << endl;
	strcpy(strCopy2, strCopy1);	//strcpy (str1, str2) use to copy string/array
	cout << strName.length() << endl;
	cout << sizeof(strName) << endl;
	cout << strCopy2 << endl;
	double a = 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1;
	double b = 1.0;
	if (a == b)
	{
		cout << "a = b";
	}
	else if (a < b)
	{
		cout << "a < b";
	}
	else
	{
		cout << "a > b";
	}
	cout << "\n";
	cout << a;
	// open a file: fopen("FILE.txt", "r"); fclose()
}