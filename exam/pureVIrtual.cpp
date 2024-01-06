#include<iostream>
using namespace std;

class Shape{
    public:
    virtual void display() = 0;
};
class Circle : public Shape{
    public:
    void display(){
        cout << "circle";
    }
};

int main(){
    Shape* ptr;
    // Shape s1;       //Object of abstract class is not allowed
    Circle cir;
    ptr = & cir;
    ptr->display();
}