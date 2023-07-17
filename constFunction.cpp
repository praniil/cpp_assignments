#include<iostream>
using namespace std;

class Complex{
    public:
    int const real = 1;
    int imaginary;
    Complex(){
        
        imaginary = 0;
    }
    Complex(int imaginary){
        this -> imaginary = imaginary;
    }
    int const returnReal(){
        return real;
    }
    int returnImaginary(){
        return imaginary;
    }
    void displayComplex (){
        cout<< real << "+" << imaginary << "i" << endl;
    }

};

int main(){
    Complex c1(5);
    Complex c2;
    c1.displayComplex();
    c2.displayComplex();
}