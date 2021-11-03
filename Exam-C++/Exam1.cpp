#include <iostream>
#include <string>
using namespace std;

class Employee
{
    private:
    int EmployeeID;
    char EmployeeName[20], Gender[10], DepartmentID[10];
    public:
    void input_data();
    void display_data();
}s;

void Employee::input_data()
{
    cout << "Employee details: " << endl;
    cout << "Enter employee ID: ";
    cin >> EmployeeID;
    cout << "Employee name: ";
    cin.ignore();
    cin.getline(EmployeeName, 20);
    cout << "Gender: ";
    cin.getline(Gender, 10);
    cout << "DepartmentID: ";
    cin.getline(DepartmentID, 10);
    cout << endl;
}

void Employee::display_data()
{
    cout << "Employee ID: " << EmployeeID << endl;
    cout << "Employee name: " << EmployeeName << endl;
    cout << "Gender: " << Gender << endl;
    cout << "Department ID: " << DepartmentID << endl;
}

int main()
{
    Employee ID;
    ID.input_data();
    cout << "Employee info: " << endl;
    ID.display_data();
}