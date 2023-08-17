#include<iostream>
#include<cmath>
using namespace std;
class Polar;

class Cartesian{
    public:
    float x, y;
    Cartesian(){
        x = 0;
        y = 0;
    }
    Cartesian(float x, float y){
        this -> x = x;
        this -> y = y;
    }
    // Cartesian(Polar p1);
    void display(){
        cout << x << endl;
        cout << y << endl;
    }

    operator Polar();
};
    

class Polar{
    public:
    float r, theta;
    Polar(){
        r = 0;
        theta = 0;
    }
    Polar(float r, float theta){
        this -> r = r;
        this -> theta = theta;
    }

    // Polar (Cartesian c1);

    void display(){
        cout << r << endl;
        cout << theta << endl;
    }
};

    Cartesian ::operator Polar(){
        Polar temp;
        temp.r = sqrt(pow(x , 2) + pow(y, 2));
        temp.theta = (y / x);
        return temp;
    }
    // Cartesian :: Cartesian (Polar p1){
    //     x = p1.r * cos(p1.theta);
    //     y = p1.r * sin(p1.theta);
    // }

    // Polar :: Polar (Cartesian c1){
    //     r = sqrt(pow(c1.x , 2) + pow(c1.y, 2));
    //     theta = (c1.y / c1.x);
    // }


int main(){
    // Polar p1(5, 30);
    // Cartesian c1(2, 2);
    // p1 = c1;
    // p1.display();
    
    Cartesian c1(2, 2);
    Polar p1 = c1;
    p1.display();
    

}