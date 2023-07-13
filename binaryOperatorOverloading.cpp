#include<iostream>
using namespace std;

class Complex{
    float real, imaginary;
    public:
    void setVal(float a, float b){
        this -> real = a;
        this -> imaginary = b;
    }
    void getVal(){
        cout << "a + ib :" << real << "+" << imaginary << "i" << endl;
    }

    Complex operator * (Complex c){
        Complex temp;
        temp.real = (real * c.real) - (imaginary * c.imaginary);
        temp.imaginary = (real * c.imaginary) + (imaginary * c.real);
        return temp;
    }
};

int main(){
    Complex c1, c2, c3;
    c1.setVal(2.0, 3.0);
    c2.setVal(4.0,5.0);
    c3 = c1 * c2;
    c3.getVal();
    return 0;
}