#include<iostream>
#include<memory>
//single ownership
struct A {
    void printA() {std::cout << "A" << std::endl;}
};

int anyFunc() {
    return 0;
}

class B{
    public:
    int b;
    B() {b = 10; std::cout << "initialize" << std::endl;}
    ~B() {std::cout << "destructed" << std::endl;}
};

class C{
    public:
    int c;
    C() {c = 10; std::cout << "initialize" << std::endl;}
    ~C() {std::cout << "destructed" << std::endl;}
};

int main() {
    //raw pointer
    C* pointer1 = new(C);
    std::cout << pointer1->c << std::endl;

    std::unique_ptr<A> p1(new A);
    p1->printA();

    int* pointer = new(int);
    int number = 2;
    pointer = &number;
    std::cout << pointer << std::endl;
    std::cout << &number << std::endl;
    std::cout << *pointer << std::endl; 

    std::cout << "p1.get(): " << p1.get() << std::endl; //address

    //lets try to copy it to a new unique pointer
    //err
    //std::unique_ptr<A> p2 = p1; 

    std::unique_ptr<A> p2 = move(p1);
    std::cout << p2.get() << std::endl; //address of p1 is moved to p2 and p1's address is 0

    std::cout << p1.get() << std::endl; //its 0 now 

    //explicitly reseting or deleting p2
    p2.reset();
    std::cout << p2.get() << std::endl;

    //unique pointer
    std::unique_ptr<B> p3(new B);
    std::cout << p3->b << std::endl;

    delete pointer1;
    std::cout << pointer1->c<< std::endl;
}
