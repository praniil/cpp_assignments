#include<iostream>
using namespace std;

class complex {
	int a, b;

	public :
	complex(int x , int y){
		a = x;
		b = y;
	}

	void printComplex( ){
		cout << "the complex number is " << a << "+" << b <<"i";
	}
};


int main(){
	complex c1(5, 4);
	c1.printComplex();

}
