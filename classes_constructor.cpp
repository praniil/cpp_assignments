#include<iostream>
using namespace std;

class integer{
	int x, y;
	public :

	integer(int , int); //constructor declared
	void display(void){
		cout << "x = " << x;
		cout << "y = " << y;
	
	}
};


integer :: integer(int a, int b )
    	//constructor defined
{
	x = a;
	y = b;


}


int main(){

	integer int1(0, 1);
	integer int2 = integer(1, 2);
      	cout << "Object1";
	int1.display();	
	cout << "Object2";
	int2.display();
}

