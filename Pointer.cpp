#include <iostream>
using namespace std;

// NOTATION:
// A pointer is a variable that contains a memory location.
// type *name;
int main()
{
    /*
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
    */
    char lead;
    char *sidekick;

    lead = 'A';
    sidekick = &lead;
    cout << "About variable 'lead':\n";
    cout << "Size\t" << sizeof(lead) << endl;
    cout << "Contents\t" << lead << endl;
    cout << "Location\t" << (void*)&lead << endl;
    cout << "About variable 'sidekick': " << endl;
    cout << "Contents\t" << (void*)sidekick << endl;
}