#include <iostream>
#include <cmath>
using namespace std;

class Complex
{
private:
    int real;
    int imaginary;

    friend float magnitude(Complex c1);

public:
    Complex(int real, int imaginary)
    {
        this->real = real;
        this->imaginary = imaginary;
    }
};
float magnitude(Complex c1)
{
    float mag = sqrt(pow(c1.real, 2) + pow(c1.imaginary, 2));
    return mag;
}

int main()
{
    Complex c1(5, 5);
    float mag = magnitude(c1);
    cout << "mag : " << mag << endl;
}