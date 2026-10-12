#include <iostream>
using namespace std;

class Calculator
{
public:
    int add(int a, int b)
    {
        return a + b;
    }

    int add(int a, int b, int c)
    {
        return a + b + c;
    }

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
    cout << "Result = " << calc.add(a, b) << endl;

    cout << "Enter three integers: ";
    cin >> a >> b >> c;
    cout << "Result = " << calc.add(a, b, c) << endl;

    cout << "Enter two floating-point numbers: ";
    cin >> x >> y;
    cout << "Result = " << calc.add(x, y) << endl;

    return 0;
}