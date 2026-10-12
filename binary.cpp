#include <iostream>
using namespace std;

class Number
{
private:
    int num;

public:
    Number(int n)
    {
        num = n;
    }

    Number operator-(Number n)
    {
        Number temp(0);
        temp.num = num - n.num;
        return temp;
    }

    void display()
    {
        cout << "Result = " << num << endl;
    }
};

int main()
{
    int x, y;

    cout << "Enter first number: ";
    cin >> x;

    cout << "Enter second number: ";
    cin >> y;

    Number n1(x);
    Number n2(y);

    Number n3 = n1 - n2;

    cout << "Subtraction = ";
    n3.display();

    return 0;
}