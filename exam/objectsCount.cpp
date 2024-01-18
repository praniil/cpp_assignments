#include<iostream>
using namespace std;

class Complex{
    public:
    int real, imaginary;
    static int count;
    Complex(int real, int imaginary){
        this -> real = real;
        this -> imaginary = imaginary;
        count = count + 1;
    }
    static int dispalyCount(){
        
        return count;
    }
};

int Complex :: count = 0;

int main(){
    Complex c1(5, 6);
    Complex c2(6, 7);
    Complex c3(6, 7);
    cout << c1.dispalyCount();
    cout << Complex :: dispalyCount();
}