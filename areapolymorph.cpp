#include <iostream>
using namespace std;

class Shape
{
public:
    virtual void area()
    {
        cout << "Area of Shape" << endl;
    }
};

class Circle : public Shape
{
private:
    float radius;

public:
    Circle(float r)
    {
        radius = r;
    }

    void area() override
    {
        cout << "Area of Circle = " << 3.14 * radius * radius << endl;
    }
};

class Rectangle : public Shape
{
private:
    float length, width;

public:
    Rectangle(float l, float w)
    {
        length = l;
        width = w;
    }

    void area() override
    {
        cout << "Area of Rectangle = " << length * width << endl;
    }
};

int main()
{
    Shape *shape;

    // Variables to store user input
    float r, l, w;

    // Taking Circle input from user
    cout << "Enter radius of the circle: ";
    cin >> r;
    Circle c(r);

    // Taking Rectangle input from user
    cout << "Enter length of the rectangle: ";
    cin >> l;
    cout << "Enter width of the rectangle: ";
    cin >> w;
    Rectangle rect(l, w);

    // Polymorphism in action
    shape = &c;
    shape->area();

    shape = &rect;
    shape->area();

    return 0;
}