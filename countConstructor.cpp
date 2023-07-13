#include<iostream>
using namespace std;

class Complex{
    private:
    int real;
    int imaginary;
    static int count;

    public:
    Complex(int realVal, int imaginaryVal){
        this->real = realVal;
        this->imaginary = imaginaryVal;
        this-> count= ++count ;
    }  

    static int getCount(){  //static hane paxi we dont need object to access 
        return count;
    }

    
};
int Complex :: count = 0;
int main(){

    Complex c1(25, 15);
    Complex c2(20, 10);
    cout << "no of constructor: " << Complex::getCount() ;
}