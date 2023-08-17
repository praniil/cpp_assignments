#include<iostream>
#include<fstream>
using namespace std;

class Employee{
    public:
    string name;
    int phoneNumber;

    void setInformation(){
        cout << "enter the name: ";
        cin >> name;
        cout << "enter the phoneNumber";
        cin >> phoneNumber;
    }
    void getInformation(){
        cout << "name: " << name;
        cout << "phoneNumber: " << phoneNumber;
    }

    string searchInformation(string info){
        
    }

};

int main(){
    Employee emp[4];
    fstream file;

    file.open("informationOfEmployee.dat" , ios :: out | ios::binary);
    cout << "enter info: " << endl;
    for(int i=0 ; i< 4; i++){
        emp[i].setInformation();
        file.write(reinterpret_cast<char*>(&emp[i].name), sizeof(emp[i]));
    }
    file.close();

    file.open("informationOfEmployee.dat", ios :: in | ios::binary);
    cout << "information of file: " << endl;
    for(int i=0; i<4; i++){
        file.read(reinterpret_cast<char*>(&emp[i]), sizeof(emp[i]));
        emp[i].getInformation();
    }
    file.close();
    
}