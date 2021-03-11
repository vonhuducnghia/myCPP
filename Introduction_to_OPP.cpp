/*
OUTCOME OF THE COURSE

Describe the important concepts in OPP
Write simple programs in C++ using the variables, operators, control structures, functions,...
Write simple programs in C++ using objects and classes.
Utilize the features of OPP.
Develop the applicatuins using object oriented programming with C++

YOU WILL NOT

Be formally educated on C++
Master C++ as a programming language

YOU WILL

Data abstraction
Encapsulation: the proximity of data defs and operation defs.
Information hiding: ability to selectively hide implementation details of a given ADT.
Polymorphism: manipulate  different kinds of objects with only one operations.
Inheritance: the ability of objects of one data type, to inherit operation and data from another data type.

Using C++ to describe ideas
*/

#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::cerr;

/*

Buffered (cin, cout)
Unbuffered (cerr)
Buffered characters should be flushed
Unbuffered characters can be seen immediately

*/
int f(int *x, int *y);
int j(int x, int y);

int main()
{
    int a = 10, b = 2, c, e;
    c = f( &a, &b);
    e = j( a, b);
    cout << a << '\t' << b << '\t' << c << endl;
}

int f(int *x, int *y)
{
    *x += 5;
    *y += 3;
    return *x + *y;
}

int j(int x, int y)
{
    x += 5;
    y += 3;
    return x + y;
}

/*
POINTER

*/