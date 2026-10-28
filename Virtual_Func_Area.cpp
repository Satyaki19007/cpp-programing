#include <iostream>
using namespace std;

// Base class
class Shape
{
public:
    virtual void area()
    {
        cout << "Area of Shape" << endl;
    }
};

// Derived class Circle
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
        cout << "Area of Circle = "
             << 3.14 * radius * radius << endl;
    }
};

// Derived class Rectangle
class Rectangle : public Shape
{
private:
    float length, breadth;

public:
    Rectangle(float l, float b)
    {
        length = l;
        breadth = b;
    }

    void area() override
    {
        cout << "Area of Rectangle = "
             << length * breadth << endl;
    }
};

// Derived class Square
class Square : public Shape
{
private:
    float side;

public:
    Square(float s)
    {
        side = s;
    }

    void area() override
    {
        cout << "Area of Square = "
             << side * side << endl;
    }
};

int main()
{
    Circle c(5);
    Rectangle r(10, 5);
    Square s(4);

    Shape *ptr;

    // Circle
    ptr = &c;
    ptr->area();

    // Rectangle
    ptr = &r;
    ptr->area();

    // Square
    ptr = &s;
    ptr->area();

    return 0;
}
