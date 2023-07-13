#include<iostream>
using namespace std;

class Person{
    private:
        string name;
        int id;
    public:
        Person(string name, int idNo){
            this->name = name;
            this->id = idNo;
        }

        void setInfo(string name, int id){
            this -> name = name;
            this -> id = id;
        }

        void getInfo(){
            cout << "the name is: " << name;
            cout << "the id is: " << id;
        }

         string getName() {
            return name;
        }

        int getId() {
            return id;
        }
};

int main(){
    Person p1("Pranil", 29);
    p1.getInfo();
    
    p1.setInfo("Rajest", 23);
    p1.getInfo();
    cout << "Name:" <<p1.getName();
}