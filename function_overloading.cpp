#include<iostream>
#include <cmath>
using namespace std;


float calcArea(int length =  10){
	float area;
	area = pow(length, 3);
	return area;
}
float calcArea(float radius) {
	float area;
	area = 3.14 * pow(radius, 2);
	return area;
}

float calcArea(float length, float breadth) {
	float area;
	area = length * breadth;
	return area;
}

int main() {
	float radius, recLength, recBreadth;
	cout << "enter the radius of circle: ";
	cin >> radius;
	calcArea(radius);
	cout << "enter the length and breadth of reactange";
	cin >> recLength >> recBreadth;
	calcArea(recLength, recBreadth);
	cout << calcArea(radius);
	cout << calcArea(recLength, recBreadth);
	return 0;
}
