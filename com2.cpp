#include <iostream>
using namespace std;

// Class to represent a Complex Number
class Complex {
private:
    float real;
    float imag;

public:
    // Constructor
    Complex() {
        real = 0;
        imag = 0;
    }

    // Function to take input
    void input() {
        cout << "Enter real part: ";
        cin >> real;

        cout << "Enter imaginary part: ";
        cin >> imag;
    }

    // Function to add two complex numbers
    Complex add(const Complex& other) {
        Complex temp;

        temp.real = real + other.real;
        temp.imag = imag + other.imag;

        return temp;
    }

    // Function to display
    void display() const {
        if (imag >= 0) {
            cout << real << " + " << imag << "i" << endl;
        } else {
            cout << real << " - " << -imag << "i" << endl;
        }
    }
};

int main() {
    Complex c1, c2, c3, c4, result;

    cout << "--- Enter First Complex Number ---" << endl;
    c1.input();

    cout << "\n--- Enter Second Complex Number ---" << endl;
    c2.input();

    cout << "\n--- Enter Third Complex Number ---" << endl;
    c3.input();

    cout << "\n--- Enter Fourth Complex Number ---" << endl;
    c4.input();

    // Adding all four complex numbers
    result = c1.add(c2);
    result = result.add(c3);
    result = result.add(c4);

    cout << "\nFirst Complex Number: ";
    c1.display();

    cout << "Second Complex Number: ";
    c2.display();

    cout << "Third Complex Number: ";
    c3.display();

    cout << "Fourth Complex Number: ";
    c4.display();

    cout << "\nSum of the four complex numbers: ";
    result.display();

    return 0;
}