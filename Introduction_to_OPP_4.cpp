#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <fstream>
#include <iomanip>
using namespace std;

class student
{
    private:
    int std_ID;
    char first_name[20];
    char last_name[20];
    char major[20];
    char gender[10];
    float GPA;

    public:
    void input_data();
    void display_data();
    int getstd_ID()
    {
        return std_ID;
    }
}s;

void student::input_data()
{
    cout << "Enter student details" << endl;
    cout << "Enter student ID: ";
    cin >> std_ID;
    cout << "First name: ";
    cin.ignore();
    cin.getline(first_name, 20);
    cout <<"Last name ";
    cin.getline(last_name, 20);
    cout << "Major: ";
    cin.getline(major, 20);
    cout << "Gender: ";
    cin.getline(gender, 10);
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

void addData()
{
    ofstream fileout;
    fileout.open("student.bat", ios::binary | ios::out | ios::app);
    s.input_data();
    fileout.write((char)*&s, sizeof(s));
    fileout.close();
    cout << "File is successfully saved." << endl;
}

void listData()
{
    ifstream filein;
    filein.open("student.bat", ios::binary | ios::in);
    while (filein.read((char)*&s, sizeof(s)))
    {
        s.display_data();
    }
    filein.close();
    cout << "Data reading from file successfully done." << endl;
}

void execute()
{
    int choice;
    do
    {
        system ("cls");
        cout << "--STUDENT MANAGING SYSTEM--" << endl;
    	cout<<"\t1. Add Records to File\n";
		cout<<"\t2. List Records From File\n";
		cout<<"\t3. Modify Records in File\n";
		cout<<"\t4. Delete Records From File\n";
		cout<<"\t5. Search Records From File\n";
		cout<<"\n\t Please choose an option: ";
		cin>>choice;
    } while (choice);
}

int main()
{
    execute();
}