#include <iostream>
using namespace std;

class Student
{
private:
    string name;
    int roll_no;
    int phone_no;

public:
    void set_data(string name, int roll_no, int phone_no)
    {
        this->name = name;
        this->phone_no = phone_no;
        this->roll_no = roll_no;
    }
    void get_data()
    {
        cout << name;
        cout << phone_no;
        cout << roll_no;
    }
};

class Test : public Student
{
protected:
    float marks1, marks2;

public:
    void set_marks(float marks1, float marks2)
    {
        this->marks1 = marks1;
        this->marks2 = marks2;
    }
    void get_marks()
    {
        cout << "marks: " << marks1 << endl;
        cout << "marks: " << marks2 << endl;
    }
};

class Result : public Test
{
public:
    float total;
    void display()
    {
        get_marks();
        get_data();
        total = marks1 + marks2;
        cout << total;
    }
};
int main()
{
    Result r1;
    r1.set_data("Pranil", 9840, 29);

    r1.set_marks(25, 25);
    r1.display();
}
