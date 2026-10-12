#include <iostream>
using namespace std;

class Calculator
{
public:
    // Add two integers
    int add(int a, int b)
    {
        return a + b;
    }

    // Add three integers
    int add(int a, int b, int c)
    {
        return a + b + c;
    }

    // Add two floating-point numbers
    float add(float a, float b)
    {
        return a + b;
    }
};

int main()
{
    Calculator calc;

    int a, b, c;
    float x, y;

    cout << "Enter two integers: ";
    cin >> a >> b;
    cout << "Sum = " << calc.add(a, b) << endl;

    cout << "\nEnter three integers: ";
    cin >> a >> b >> c;
    cout << "Sum = " << calc.add(a, b, c) << endl;

    cout << "\nEnter two floating-point numbers: ";
    cin >> x >> y;
    cout << "Sum = " << calc.add(x, y) << endl;

    return 0;
}