/*
NOTATION
pseudo inverse
Work in group, use management tools - Getlab
*/
#include <iostream>
#include <string>
using namespace std;

class book
{
    /*private:
    string author, title, format, publisher;
    double price;
    int year;*/
    public:
    string author;
    string title;
    string format;
    string publisher;
    int year;
    double price;
};

int main()
{
    book no1;
    no1.author = "Nghia";
    no1.title = "Live long and suck it";
    no1.year = 2001;
    cout << no1.author << endl;
    cout << no1.title << endl;
    cout << no1.year << endl;
}