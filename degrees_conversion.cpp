#include<iostream>
#define pi 3.14
using namespace std;

int main(){
	
	float degrees;
	float radian;
	cout << "enter the angle in degrees: ";
	cin >> degrees;
	radian = (pi / 180) * degrees;
	cout << "the angle in radian is : " << radian;

}
