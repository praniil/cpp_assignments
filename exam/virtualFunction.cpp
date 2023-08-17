#include<iostream>
using namespace std;

class Student{
    public:
    int roll;
    Student(){
        cout << "this is student constructor";
    }
    ~Student(){
        cout << "this is student destructor";
    }
};

class Good : public virtual Student{
    public:
    Good(){
        cout << "this is a good constructor";
    }
    ~Good(){
        cout << "this is good destructor";
    }
};

int main(){
    Student* s1;
    Good g1;
    s1 = &g1;
}