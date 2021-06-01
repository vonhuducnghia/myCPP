#include <iostream>
#include <string>
using namespace std;

class file1
{
    public:
    string object;
    object = "file1";
};

class Alice : public file1
{
    public:
    string subject;
    string action[4];
    subject = "alice";
    action = {"own", "read", "write", "execute"};
};

int main()
{
}