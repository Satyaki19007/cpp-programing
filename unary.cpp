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

    // Unary operator overloading
    void operator++()
    {
        num++;
    }

    // Binary operator overloading
    Number operator-(Number n)
    {
        Number temp(0);
        temp.num = num - n.num;
        return temp;
    }

    // Relational operator overloading
    bool operator<(Number n)
    {
        return num < n.num;
    }

    void display()
    {
        cout << "Value = " << num << endl;
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

    // Unary
    cout << "\nBefore increment:" << endl;
    n1.display();

    ++n1;

    cout << "After increment:" << endl;
    n1.display();

    // Binary
    Number n3 = n1 - n2;

    cout << "\nSubtraction:" << endl;
    n3.display();
    return 0;
}