// #include<iostream>
// using namespace std;

// class Plane{
//     private:
//     int x, y, z;
//     public:
//     Plane(){
//         x = 0;
//         y = 0;
//         z = 0;
//     }
//     Plane(int x, int y, int z){
//         this -> x = x;
//         this -> y = y;
//         this -> z = z;
//     }

//     void operator ++(int){
//         this -> x ++;
//         this -> y ++;
//         this -> z ++;
//         cout << x;
//         cout << y;
//         cout << z;
        
//     }

// };

// int main(){
//     Plane p1(2, 3, 4);
//     p1++;
    
// }
//using friend function
#include<iostream>
using namespace std;

class Plane{
    private:
    int x, y, z;
    public:
    Plane(){
        x = 0;
        y = 0;
        z = 0;
    }
    Plane(int x, int y, int z){
        this -> x = x;
        this -> y = y;
        this -> z = z;
    }
    friend void operator++(Plane p1, int);      //int halera kei hune hoina its just a notation for post increment 
};
void operator++(Plane p1, int){
    p1.x++;
    p1.y++;
    p1.z++;
    cout << p1.x;
    cout << p1.y;
    cout << p1.z;
}
int main(){
    Plane p1(2, 3, 4);
    p1++;
}
