#include<iostream>
using namespace std;

class nesFn {
	int number1, number2;
	public:
	int largest(){
		if(number1 > number2){
			return(number1);

		}
		else{
			return(number2);
		}
	}
	void input(){
		cout << "enter any two numbers:";
		cin >> number1 >> number2;
	
	}

	void display (){
	
		cout << "the largest number is :" << largest();
	}

};

int main(){
	nesFn A;
	A.input();
	A.display();

	return 0;
}
