#include <iostream>
using namespace std;

class Employee
{
public:
    virtual void calculateSalary() = 0;
};

class Manager : public Employee
{
    int salary;

public:
    Manager(int a)
    {
        salary = a;
    }

    void calculateSalary() override
    {
        cout << "Salary of Manager = " << salary << endl;
    }
};

class Developer : public Employee
{
    int salary;

public:
    Developer(int b)
    {
        salary = b;
    }

    void calculateSalary() override
    {
        cout << "Salary of Developer = " << salary << endl;
    }
};

int main()
{
    Employee *e;

    Manager m(70000);
    Developer d(10000);

    e = &m;
    e->calculateSalary();

    e = &d;
    e->calculateSalary();

    return 0;
}