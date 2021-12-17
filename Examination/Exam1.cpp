#include <iostream>
#include <string>
using namespace std;

class Student
{
    private:
    int StudentID;
    char StudentName[20], Gender[10], Major[10];
    public:
    void input_data();
    void display_data();
}s;

// Create class Graduate student
class GraduateStudent : public Student
{
    private:
    int StudentID;
    char StudentName[20], Gender[10], Major[10];
};

// Set and get Student information
void Student::input_data()
{
    cout << "Student details: " << endl;
    cout << "Enter student ID: ";
    cin >> StudentID;
    cout << "Student name: ";
    cin.ignore();
    cin.getline(StudentName, 20);
    cout << "Gender: ";
    cin.getline(Gender, 10);
    cout << "Student major: ";
    cin.getline(Major, 10);
    cout << endl;
}

void Student::display_data()
{
    cout << "Student ID: " << StudentID << endl;
    cout << "Student name: " << StudentName << endl;
    cout << "Gender: " << Gender << endl;
    cout << "Major: " << Major << endl;
}

// Driver code / Test code
int main()
{
    Student ID;
    ID.input_data();
    cout << "Student info: " << endl;
    ID.display_data();
}