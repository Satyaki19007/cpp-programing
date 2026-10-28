#include <iostream>
using namespace std;

class Employee
{
    int employeeID;
    string employeeName;
    string department;
    int annualSalary;

public:
    void accept()
    {
        cout << "Enter Employee ID: ";
        cin >> employeeID;

        cout << "Enter Employee Name: ";
        //cin >> employeeName;
        cin.ignore();
        getline(cin, employeeName);

        cout << "Enter Department: ";
        cin >> department;

        cout << "Enter Annual Salary: ";
        cin >> annualSalary;
    }

    void display()
    {
        cout << "-: Employee Information :- "<< endl;
        cout << "Employee ID: " << employeeID << endl;
        cout << "Employee Name: " << employeeName << endl;
        cout << "Department: " << department << endl;
        cout << "Annual Salary: " << annualSalary << endl;
    }
};

int main()
{
    Employee e;

    e.accept();
    e.display();

    return 0;
}
