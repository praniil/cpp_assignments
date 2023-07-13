#include<iostream>

using namespace std;
#include "cmath"
int area_of_cube(int length){
    
    int area = pow(length, 3);
    cout << "the area of cube is: " << area; 
    return 0;
}

float area_of_circle(int radius){
    float area = 3.14 * pow(radius, 3);
    cout << "the area of circle is: " << area;
    return 0;
}

float area_of_rectange(float length, float breadth){
    float area = length * breadth;
    cout << "the area of rectange is: " << area;
    return 0;
}
int main(){
    float radius;
    float length, breadth;
    area_of_cube(10);
    cout << "enter the radius of circle: ";
    cin >> radius;
    area_of_circle(radius);
    cout << "enter the length and breadth of rectange: " << endl;
    cin >> length >> breadth;
    area_of_rectange(length, breadth);

}