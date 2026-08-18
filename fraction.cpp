#include <iostream>
using namespace std;

class Fraction {
private:
    int numerator, denominator;

public:

    void accept() {
        cout << "Enter numerator: ";
        cin >> numerator;

        cout << "Enter denominator: ";
        cin >> denominator;
    }

    Fraction add(Fraction f) {
        Fraction result;

        result.numerator = numerator * f.denominator +
                           f.numerator * denominator;

        result.denominator = denominator * f.denominator;

        return result;
    }

    Fraction subtract(Fraction f) {
        Fraction result;

        result.numerator = numerator * f.denominator -
                           f.numerator * denominator;

        result.denominator = denominator * f.denominator;

        return result;
    }

    void display() {
        int a = numerator;
        int b = denominator;

        // Finding GCD
        int gcd = 1;

        for (int i = 1; i <= a && i <= b; i++) {
            if (a % i == 0 && b % i == 0) {
                gcd = i;
            }
        }

        numerator = numerator / gcd;
        denominator = denominator / gcd;

        cout << numerator << "/" << denominator << endl;
    }
};

int main() {

    Fraction f1, f2, sum, difference;

    cout << "Enter first fraction:" << endl;
    f1.accept();

    cout << "\nEnter second fraction:" << endl;
    f2.accept();

    sum = f1.add(f2);
    difference = f1.subtract(f2);

    cout << "\nAddition: ";
    sum.display();

    cout << "Subtraction: ";
    difference.display();

    return 0;
}