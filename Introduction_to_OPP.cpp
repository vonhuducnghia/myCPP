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
//#include <tuple>
using std::cout;
using std::cin;
using std::endl;
//using std::cerr;
//using std::make_tuple;

/*

Buffered (cin, cout)
Unbuffered (cerr)
Buffered characters should be flushed
Unbuffered characters can be seen immediately

*/
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
POINTER | ARRAY

The 'new' opereator is used to allocate memory dynamically.
The 'delete' operator is used to deallocate memory space.
Ragged Array
*/

// Exercise 3

struct swapstr
{
    double x;
    double y;
};


swapstr swapsf (double x, double y)
{
    swapstr A;
    double temp = 0;
    temp = x;
    A.x = y;
    A.y = temp;
    return A;
}

void swap_2(double *x, double *y)
{
    double temp = *x;
    *x = *y; 
    *y = temp;

}

// Exercise 2

int factorial(int n)
{
    if(n == 0)
    {
        return 1;
    }
    else
    {
        return n*factorial(n-1);
    }
}

int main()
{
    double a = 10.37, b = 2.45;
    //c = f( &a, &b);
    //e = j( a, b);
    swapstr A = swapsf (a, b);
    cout << A.x << endl;
    cout << A.y << endl;
}

// Exercise 4 | Working on it
