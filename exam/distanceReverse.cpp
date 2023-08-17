#include<iostream>
using namespace std;

class Distance{
    public:
    int value, km, m;
    Distance(int kilo, int meter){
        km = kilo;
        m = meter;
    }
    operator int (){
        value = km * 1000 + m;
        return value;
    }
};
int main(){
    int km = 3;
    int m = 0;
    Distance D(km, m);
    int d = D;      //class to defined conversion 
    cout << d;
}