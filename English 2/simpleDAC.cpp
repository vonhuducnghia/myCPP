#include <iostream>
#include <string>
using namespace std;

// Class for file 1
class file1
{
    public:
    string object;
    construct()
    {
    object = "file1";
    }
};

class Alice : public file1
{
    public:
    string subject;
    string action[4];
    construct()
    {
    subject = "alice";
    action = {"own", "read", "write", "execute"};
    }
};

class Bob : public file1
{
    public:
    string subject;
    string action[1];
    construct()
    {
    subject = "bob";
    action = {"execute"};
    }
}

class Macro : public file1
{
    public:
    string subject;
    string action[1];
    construct()
    {
    subject = "macro";
    action = {"read"};
    }
}
// Class for file 2
class file2
{
    public:
    string object;
    construct()
    {
    object = "file2";
    }
};

class Alice : public file2
{
    public:
    string subject;
    string action[2];
    construct()
    {
    subject = "alice";
    action = {"read", "write"};
    }
};

class Bob : public file2
{
    public:
    string subject;
    string action[1];
    construct()
    {
    subject = "bob";
    action = {"read"};
    }
};

class Oscar : public file2
{
    public:
    string subject;
    string action[4];
    construct()
    {
    subject = "oscar";
    action = {"own", "read", "write", "execute"};
    }
};

class Mary : public file2
{
    public:
    string subject;
    string action[1];
    construct()
    {
    subject = "mary";
    action = {"read"};
    }
};

int main()
{
}