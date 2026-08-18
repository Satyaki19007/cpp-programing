#include <iostream> 
using namespace std; 
class Complex { 
private: 
int real, imag; 
public: 
Complex(int r=0,int i=0):real(r),imag(i){} 
Complex add(const Complex &c){ 
return Complex(real+c.real, imag+c.imag); 
} 
Complex subtract(const Complex &c){ 
return Complex(real-c.real, imag-c.imag); 
} 
void display() const{ 
cout<<real<<" + i"<<imag<<endl; 
} 
}; 
int main() {

    int r1, i1, r2, i2;

    cout << "Enter real part of first complex number: ";
    cin >> r1;

    cout << "Enter imaginary part of first complex number: ";
    cin >> i1;

    cout << "Enter real part of second complex number: ";
    cin >> r2;

    cout << "Enter imaginary part of second complex number: ";
    cin >> i2;

    Complex c1(r1, i1);
    Complex c2(r2, i2);

    Complex sum = c1.add(c2);
    Complex diff = c1.subtract(c2);

    cout << "\nFirst Complex Number: ";
    c1.display();

    cout << "Second Complex Number: ";
    c2.display();

    cout << "Addition: ";
    sum.display();

    cout << "Subtraction: ";
    diff.display();

    return 0;
}