#include <iostream>
using namespace std;

class Rectangle {
private:
    double length;
    double width;

public:
    // Default constructor
    Rectangle() : length(1.0), width(1.0) {}

    // Constructor with custom values
    Rectangle(double len, double wid) : length(len), width(wid) {}

    // Destructor
    ~Rectangle() {
        cout << "Rectangle object destroyed." << endl;
    }

    // Getter methods
    double getLength() const {
        return length;
    }

    double getWidth() const {
        return width;
    }

    // Setter methods
    void setLength(double len) {
        length = len;
    }

    void setWidth(double wid) {
        width = wid;
    }

    // Calculate area
    double calculateArea() const {
        return length * width;
    }

    // Calculate perimeter
    double calculatePerimeter() const {
        return 2 * (length + width);
    }
};

int main() {
    double length, width;

    // Take input from user
    cout << "Enter length of rectangle: ";
    cin >> length;

    cout << "Enter width of rectangle: ";
    cin >> width;

    // Create rectangle using user input
    Rectangle rect(length, width);

    // Display properties
    cout << "\nRectangle properties:" << endl;
    cout << "Length: " << rect.getLength() << endl;
    cout << "Width: " << rect.getWidth() << endl;
    cout << "Area: " << rect.calculateArea() << endl;
    cout << "Perimeter: " << rect.calculatePerimeter() << endl;

    return 0;
}