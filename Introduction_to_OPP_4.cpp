#include <iostream>
#include <string>
#include <stdlib.h>
#include <string.h>
#include <fstream>
#include <iomanip>
using namespace std;

class student
{
    private:
    int std_ID;
    string first_name;
    string last_name;
    string major;
    bool gender;
    float GPA;

    public:
    void input_data();
    void display_data();
    int getstd_ID()
    {
        return std_ID;
    }
};

void student::input_data()
{
    cout << "Enter student detail:" << endl;
    cout << "Enter student ID: ";
    cin >> std_ID;
    cout << "First name: ";
    cin >> first_name;
    cout <<"Last name ";
    cin >> last_name;
    cout << "Major: ";
    cin >> major;
    cout << "Gender: ";
    cin >> gender;
    cout << "GPA: ";
    cin >> GPA;
    cout << endl;
}

void student::display_data()
{
    cout << "Student details--" << endl;
    cout << "Student ID: " << std_ID << endl;
    cout << "Student first name: " << first_name << endl;
    cout << "Student last name: " << last_name << endl;
    cout << "Student major: " << major << endl;
    cout << "Student gender: " << gender << endl;
    cout << "Student GPA: " << GPA << endl;
}