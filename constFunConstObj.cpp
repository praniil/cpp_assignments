#include <iostream>
using namespace std;

class Complex {
public:
    const int real = 1;
    int imaginary;

    Complex() {
        imaginary = 0;
    }

    Complex(int imaginary) {
        this->imaginary = imaginary;
    }

    int returnReal() const {
        return real;
    }

    int returnImaginary() {
        return imaginary;
    }

    void displayComplex() const {
        cout << real << "+" << imaginary << "i" << endl;
    }
};

int main() {
    const Complex c1(5);
    const Complex c2;
    c1.displayComplex();
    c2.displayComplex();

    return 0;
}