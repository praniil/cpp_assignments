#include <iostream>
using namespace std;

class Complex
{
public:
    int real = 5;
    int imaginary = 6;

    int returnReal() const
    {
        return real;
    }
};

int const returnImaginary() 
{
    const Complex c1;
    return c1.imaginary;
}

int main()
{
    const Complex c1;

    cout << "the complex number is: " << c1.returnReal() << "+" << returnImaginary() << "i";
}