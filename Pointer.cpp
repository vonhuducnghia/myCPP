#include <iostream>
using namespace std;

int main()
{
	int x = 10;
	cout << x << '\n';
	cout << &x << '\n';
    cout << *&x << '\n';

    *&x = 20;
    cout << x << endl;
    system("pause");
    return 0;
}