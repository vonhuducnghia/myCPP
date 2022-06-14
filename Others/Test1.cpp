#include <iostream>
using namespace std;

int main()
{
    pid_t pid;
    pid = fork();
		if (pid != 0)
		{
			cout << "This is a parent process";
		}
		else
		{
			cout << "This is a child process";
		}
}