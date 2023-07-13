#include<iostream>
using namespace std;

class person{
	public:
		char name[30];
		int id;
	void getInfo(){
		cout<< "enter the name: ";
		cin >> name;
		cout << "enter the id: ";
		cin >> id;		

	}
	void printInfo(){
		cout << "the name is :" << name;
		cout << "the id is :" << id;
	
	}
};
int main(){
person pranil;
pranil.getInfo();
pranil.printInfo();
}
