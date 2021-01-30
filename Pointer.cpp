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

    int i1 = 30;
    int &i_ref = i1;        //reference to i1, not means address of i1

    cout << &i1 << endl;    //get address of i1
    cout << &i_ref << endl; //get address of i_ref
}