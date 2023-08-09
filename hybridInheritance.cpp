#include<iostream>
using namespace std;

class Staff{
    protected:
    int id, phoneNo, accNo;
    char *name;
    public:
    virtual void display(){
        cout << "Staff: " << id;
    }
};

class TeachingStaff : public Staff{
    public:
    int no_of_class;
    TeachingStaff(){
        no_of_class = 0;
    }
    TeachingStaff(int a){
        no_of_class = a;
    }
    void display(){
        cout << "name of teaching staff: " << name;
        cout << "number of class : " << no_of_class;
    }
};

class AdminStaff : public Staff{
    public: 
    char *shift;
    AdminStaff(){
        shift = "";
    }  
    AdminStaff(char *a){
        *shift = *a;
    }  
    void display(){
        cout << "name of admin staff: " << name;
        cout << "shift: " << *shift;
    }
};

class DepartmentStaff : public AdminStaff , public TeachingStaff {
    public:
    char *departmentCode;
    char *departmentBlock;
    DepartmentStaff(char *departmentCode, char *departmentBlock){
        this-> departmentBlock = departmentBlock;
    }
    void display(){
        // cout << "name: " << *name << endl;
        cout << "info: " << *departmentBlock, *departmentCode;

    }
};

int main(){
    Staff *ptr, staff;
    TeachingStaff t(6);
    AdminStaff ad("Day");
    DepartmentStaff("BCT", "BCT");
    ptr = &t;
    ptr->display();
    return 0;

}
