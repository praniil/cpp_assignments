#include<iostream>
using namespace std;

void swapNumbers(int* a, int* b){
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
	
}

int getInput(){
	int number;
	cout<< "enter the number: ";
	cin >> number;
	return number;
}

int main(){
	int number1, number2;
	number1 = getInput();
	number2 = getInput();
	cout << "the previous numbers: "<< number1 << number2;
	swapNumbers(&number1, &number2);
	cout << "the swapped numbers are: " << number1 << "\n" << number2;
	return 0;
		

}
