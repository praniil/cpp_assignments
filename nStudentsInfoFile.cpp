#include<iostream>
#include<fstream>
using namespace std;

class Students{
    string name;
    public:
    Students(){}
    Students(string name){
        this -> name = name ;

    }
    void setData(){
        cout << "name: " ;
        cin >> name;
    }
    void getData(){
        cout << name;
    }
};

int main(){
    Students student[2];
    fstream file;
    file.open("students.txt", ios :: out);
    cout << "enter the info of students" << endl;
    for (int i = 0; i < 2; i++){
        student[i].setData();
        file.write((char*)&student[i], sizeof(student[i]));     //student[i] is pointer to object type Students so "char*" casts it into string
    }
    file.close();

    file.open("students.txt", ios::in);
    for(int i=0; i<2 ; i++){
        file.read((char*)&student[i], sizeof(student[i]));
        student[i].getData();
    }
    file.close();

}