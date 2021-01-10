#include <iostream>
using namespace std;

int main()
{
	string strName;
	int nAge, nValue;
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
	cout << "Nothing changes" << endl;
}