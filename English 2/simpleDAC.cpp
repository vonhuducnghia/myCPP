#include <iostream>
#include <string>
using namespace std;

class file1
{
    public:
    string object;
};

class Alice : public file1
{
    public:
    string subject;
    string action;
};

int main()
{
    string table[34][3] = {"alice", "own", "file1", "alice", "read", "file1", "alice", "write", "file1", "alice", "execute", "file1",
     "alice", "read", "file2", "alice", "write", "file2", "alice", "read", "file4", "alice", "execute", "file4", "alice", "write", "file5",
     "bob", "execute", "file1", "bob", "read", "file2", "bob", "own", "file3", "bob", "read", "file3", "bob", "write", "file3",
     "bob", "execute", "file3", "bob", "write", "file4", "oscar", "own", "file2", "oscar", "read", "file2", "oscar", "write", "file2",
     "oscar", "execute", "file2", "oscar", "execute", "file4", "macro", "read", "file1", "macro", "write", "file3", "macro", "own", "file4",
     "macro", "read", "file4", "macro", "write", "file4", "macro", "execute", "file4", "macro", "execute", "file5", "mary", "read", "file2",
     "mary", "read", "file3", "mary", "own", "file5", "mary", "read", "file5", "mary", "write", "file5", "mary", "execute", "file5"};
    

}