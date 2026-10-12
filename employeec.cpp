#include <iostream>
using namespace std;

class Employee {
private:
    int employeeID;
    string employeeName;
    double basicSalary;
    double HRA;
    double DA;

public:

    // Parameterized constructor
    Employee(int id, string name, double basic, double hra, double da) {
        employeeID = id;
        employeeName = name;
        basicSalary = basic;
        HRA = hra;
        DA = da;
    }

    // Calculate gross salary
    double grossSalary() {
        return basicSalary + HRA + DA;
    }

    // Display employee details
    void display() {
        cout << "\nEmployee Details" << endl;
        cout << "Employee ID: " << employeeID << endl;
        cout << "Employee Name: " << employeeName << endl;
        cout << "Basic Salary: " << basicSalary << endl;
        cout << "HRA: " << HRA << endl;
        cout << "DA: " << DA << endl;
        cout << "Gross Salary: " << grossSalary() << endl;
    }

    // Destructor
    ~Employee() {
        cout << "\nEmployee object destroyed." << endl;
    }
};

int main() {

    int id;
    string name;
    double basic, hra, da;

    // Take input from user
    cout << "Enter Employee ID: ";
    cin >> id;

    cout << "Enter Employee Name: ";
    cin >> name;

    cout << "Enter Basic Salary: ";
    cin >> basic;

    cout << "Enter HRA: ";
    cin >> hra;

    cout << "Enter DA: ";
    cin >> da;

    // Create object using constructor
    Employee emp(id, name, basic, hra, da);

    // Display details
    emp.display();

    return 0;
}