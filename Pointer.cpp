#include <stdio.h>
#include <iostream>
using namespace std;

// NOTATION:
// A pointer is a variable that contains a memory location.
// type *name;
// The *pointer variable peeks into the value stored at that memory location.

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
    /*char lead;
    char *sidekick;

    lead = 'A';
    sidekick = &lead;
    cout << "About variable 'lead':\n";
    cout << "Size\t" << sizeof(lead) << endl;
    cout << "Contents\t" << lead << endl;
    cout << "Location\t" << (void*)&lead << endl;
    cout << "About variable 'sidekick': " << endl;
    cout << "Contents\t" << (void*)sidekick << endl;
    cout << "Peek value\t" << *sidekick << endl;*/

    char a, b, c;
    int d =  70;
    char *p;
    a = 'A', b = 'B', c = 'C';
    cout << "Know your " << endl;
    p = &a;
    putchar(*p);
    p = &b;
    putchar(*p);
    p = &c;
    putchar(*p);
    putchar(d);
}