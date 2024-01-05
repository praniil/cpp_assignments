#include<iostream>
using namespace std;

class Distance{
    public:
    int feet, inch;
    Distance(){
        feet = 0;
        inch = 0;
    }
    Distance (int feet, int inch){
        this -> feet = feet;
        this -> inch = inch;
    }
    friend ostream& operator <<(ostream& out , Distance &d){
        out << "feet: " << d.feet << "inch: " << d.inch;
        return out;
    }

    friend istream& operator >>(istream& in, Distance &d){
        cout << "enter in feet: " << endl;
        in >> d.feet;
        cout << "enter in inch: " << endl;
        in >> d.inch;
        return in;
    }
};

int main(){
    Distance d;
    cin >> d;
    cout << d;
}