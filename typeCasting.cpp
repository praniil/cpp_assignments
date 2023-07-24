#include<iostream>
using namespace std;

class Design1{
    public:
    int code, quantity, price;
    Design1(){
        code=0;
        quantity = 0;
        price =0;
    }
    Design1(int a, int b, int c){
        
        code = a;
        quantity = b;
        price = c;
    }

};

class Design2{
    public:
    int code;
    int value;
    Design2(){
        code = 0;
        value = 0;

    }
    Design2(int a, int b){
        code = a;
        value = b;
    }
    Design2(Design1 d){
        code = d.code;
        value = d.quantity * d.price; 
    }
    void display(){
        cout << "code: " << code << "\n" << "value: " << value;
    }
};

int main(){
    Design1 d1(20, 2, 3);
    Design2 d2;
    d2 = d1;
    d2.display();
}