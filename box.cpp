#include <iostream>
using namespace std;

class Box
{
private:
    int length, breadth, height;

public:
    // Default constructor
    Box()
    {
        length = 1;
        breadth = 1;
        height = 1;
    }

    // Parameterized constructor
    Box(int l, int b, int h)
    {
        length = l;
        breadth = b;
        height = h;
    }

    // Copy constructor
    Box(const Box &b)
    {
        length = b.length;
        breadth = b.breadth;
        height = b.height;
    }

    int volume()
    {
        return length * breadth * height;
    }

    void display()
    {
        cout << "Length = " << length << endl;
        cout << "Breadth = " << breadth << endl;
        cout << "Height = " << height << endl;
        cout << "Volume = " << volume() << endl;
    }

    // Destructor
    ~Box()
    {
        cout << "Destructor called." << endl;
    }
};

int main()
{
    int l, b, h;

    cout << "Enter length: ";
    cin >> l;

    cout << "Enter breadth: ";
    cin >> b;

    cout << "Enter height: ";
    cin >> h;

    // Parameterized constructor
    Box box1(l, b, h);

    cout << "\nBox 1:" << endl;
    box1.display();

    // Copy constructor
    Box box2(box1);

    cout << "\nBox 2 (Copied from Box 1):" << endl;
    box2.display();

    return 0;
}