#include<iostream>
using namespace std;

class Person{
	private :
		int phoneNumberPri;
		int idPri;
	public:
		int phoneNumber;
		int id;
		//default constructot
	Person(){	
		int phoneNumber = 5;
		int id = 5;
		int phoneNumberPri = 25;
		int idPri = 5;
			
	}
	int getPrivatePhone(){
		return phoneNumberPri;
		
	}
	int getPrivateId(){
		return idPri;
		
	}
	int getPhone(){
		return phoneNumber;
		
	}
	int getId(){
		return phoneNumber;
		
	}
};

int main(){
	Person p1;
	
	cout << "the phone num of 1st person: and id is " << p1.phoneNumber << p1.id;
	Person p2;
	
	cout << "the private phone number of 2nd person: " << p2.getPrivatePhone();

}
