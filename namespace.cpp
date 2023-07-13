#include<iostream>
using namespace std;

namespace BEI {
	char subject[30] = "Electronics";
	int room = 400;

	void printSubject(){
		cout << "the subject name is: " << subject << endl;
	}

	void printRoom(){
		cout<< "the room number is: " << room << endl;
	}

}

namespace BCT {
	char subject[30] = "Computer Engineering";
	int roomNumber = 401;

	void printSubject(){
		cout << "the subject name is: " << subject << endl;
	}
	void printRoomNumber(){
		cout << "the room number is: " << roomNumber << endl;
	}

}

int main(){
	using namespace BEI;
	using namespace BCT;
	printRoom();
	printRoomNumber();
	BEI::printSubject();
	BCT::printSubject();
	return 0;

}
