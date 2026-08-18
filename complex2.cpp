#include <iostream>
using namespace std;

// Class to represent a Complex Number
class Complex {
private:
    float real;
    float imag;

public:
    // Constructor to initialize real and imaginary parts to 0
    Complex() {
        real = 0;
        imag = 0;
    }

    // Function to take input from the user
    void input() {
        cout << "Enter real part: ";
        cin >> real;
        cout << "Enter imaginary part: ";
        cin >> imag;
    }

    // Function to add two complex numbers and return the result
    Complex add(const Complex& other) {
        Complex temp;
        temp.real = real + other.real;
        temp.imag = imag + other.imag;
        return temp;
    }

    // Function to display the complex number in (a + ib) format
    void display() const {
        if (imag >= 0) {
            cout << real << " + " << imag << "i" << endl;
        } else {
            cout << real << " - " << -imag << "i" << endl; // Handles negative imaginary parts cleanly
        }
    }
};

int main() {
    Complex c1, c2, result;

    cout << "--- Enter First Complex Number ---" << endl;
    c1.input();

    cout << "\n--- Enter Second Complex Number ---" << endl;
    c2.input();

    // Add c1 and c2, storing the result in the 'result' object
    result = c1.add(c2);

    cout << "\nFirst Complex Number: ";
    c1.display();

    cout << "Second Complex Number: ";
    c2.display();

    cout << "\nSum of the complex numbers: ";
    result.display();

    return 0;
}