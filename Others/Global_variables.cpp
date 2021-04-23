#include <iostream>
using namespace std;

int g_value(21);
// highly recommend using different names for global variables and local variables
// avoid using global variables if not REALLY nessesary, they can cause more problems

int main()
{
    int value = 10;
    ::g_value++;
    value--;
    cout << "global value: " << ::g_value << endl;    // syntax   ::<variable name> to allocate global variable
    cout << "local value: " << value << endl;
}