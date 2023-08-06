#include<iostream>
using namespace std;

class Distance{
    private:
    int feet;
    float inches;
    public:
    Distance(){
        feet = 0;
        inches = 0.0;
    }
    Distance(int feet, float inches){
        this -> feet = feet;
        this -> inches = inches;
    }
    friend ostream& operator << (ostream& out, const Distance& d){
        out << d.feet << "feet" << d.inches << "inches";
        return out;
    }
    friend istream& operator >> (istream& in, Distance& d){
        cout << "enter fee: ";
        in >> d.feet;
        cout << "enter inches: ";
        in >> d.inches;
        return in;
    }
};

int main(){
    Distance d1, d2(4, 5.3);
    cout << d1;
    cout << d2;
}