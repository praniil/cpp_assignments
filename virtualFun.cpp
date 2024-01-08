#include<iostream>
using namespace std;

class Base{
    public:
    void display(){
        cout << "base derived"  << endl;
    }
    virtual void show(){
        cout << "base show" << endl;
    }
};

class Derived : public Base {
    public:
    void display(){
        cout << "display derived" << endl;
    }
    void show(){
        cout << "show derived" << endl;
    }
};

int main(){
    Base b, *ptr;
    Derived d;
    ptr = &d;
    d.display();    //override
    ptr->display();
    ptr->show();
    ptr = &b;
    ptr->display();
    ptr->show();
}