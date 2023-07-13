#include<iostream>
using namespace std;

void swap_number(int &a, int &b){
	int temp;
	temp = a;
	a = b;
	b = temp;
	 
}

int main(){
	int number1, number2, temp;
	cout << "enter the first number: ";
	cin >> number1;
	cout << "enter the second number: ";
	cin >> number2;
	cout << "previous: " << number1 << "\n" <<  number2;
	swap_number(number1, number2);
	cout << "swapped number: " << number1 << "\n" << number2;

	
	
}
