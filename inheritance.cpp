#include <iostream>
#include <string>
using namespace std;

// Base Class
class Employee {
protected:
    int empId;
    string empName;
    string department;

public:
    Employee() : empId(0), empName(""), department("") {}

    Employee(int id, const string& name, const string& dept)
        : empId(id), empName(name), department(dept) {}

    void getEmployeeData() {
        cout << "Enter Employee ID: ";
        cin >> empId;
        cin.ignore();
        cout << "Enter Employee Name: ";
        getline(cin, empName);
        cout << "Enter Department: ";
        getline(cin, department);
    }

    void displayEmployee() const {
        cout << "Employee ID   : " << empId << endl;
        cout << "Employee Name : " << empName << endl;
        cout << "Department    : " << department << endl;
    }
};

// Derived Class 1
class TeachingStaff : public Employee {
private:
    string subject;
    string qualification;

public:
    void getTeachingData() {
        getEmployeeData();
        cout << "Enter Subject: ";
        getline(cin, subject);
        cout << "Enter Qualification: ";
        getline(cin, qualification);
    }

    void display() const {
        cout << "\n----- Teaching Staff Details -----" << endl;
        displayEmployee();
        cout << "Subject       : " << subject << endl;
        cout << "Qualification : " << qualification << endl;
    }
};

// Derived Class 2
class NonTeachingStaff : public Employee {
private:
    string designation;
    int workingHours;

public:
    NonTeachingStaff() : workingHours(0) {}

    void getNonTeachingData() {
        getEmployeeData();
        cout << "Enter Designation: ";
        getline(cin, designation);
        cout << "Enter Working Hours (per day): ";
        cin >> workingHours;
        cin.ignore();
    }

    void display() const {
        cout << "\n--- Non-Teaching Staff Details ---" << endl;
        displayEmployee();
        cout << "Designation   : " << designation << endl;
        cout << "Working Hours : " << workingHours << " hrs/day" << endl;
    }
};

int main() {
    TeachingStaff teacher;
    NonTeachingStaff staff;

    cout << "=== Enter Teaching Staff Details ===" << endl;
    teacher.getTeachingData();

    cout << "\n=== Enter Non-Teaching Staff Details ===" << endl;
    staff.getNonTeachingData();

    cout << "\n========== EMPLOYEE MANAGEMENT SYSTEM ==========";
    teacher.display();
    staff.display();

    return 0;
}