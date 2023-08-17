#include<iostream>
using namespace std;

class Distance{
    private:
        int km, m;
    public:
    Distance(){
        km = 0;
        m = 0;
    }
    explicit Distance(int value){
        km = value / 1000;
        m = value % 1000;
    }
    void display(){
        cout << km << "km" << m << "m";
    }
};

int main(){
    int d = 3000;
    Distance D(d);
    // D = d;      //explicit constructor banayo vane yo mildaina
    
    D.display();
}