#include <iostream>
using namespace std;

int main()
{
    for (int count = 0; count < 10; ++count)
    {
        cout << count << "\t";
    }
    cout << "\n";

    int count = 0;
    while (count < 10)
    {
        cout << count << "\t";
        count++;
    }
}