#include <iostream>
using namespace std;

class Shape
{
public:
    virtual void display()
    {
        cout << "drawing a shape" << endl;
    }
};

class Circle : public Shape {
    public:
    void display(){
        cout << "circle" << endl;
    }
};

class Rectangle : public Circle {
    public:
    void display(){
        cout << "rectangle" << endl;
    }
};
int main(){
    // Rectangle r1;
    // r1.Circle :: display(); // choose for print
    // r1.display();
    Circle c1;
    Rectangle r1;
    Shape* shape1 ;
    Shape* shape2;
    shape1 = &c1;
    shape2 = &r1;
    shape1->display();
    shape2->display();    
}