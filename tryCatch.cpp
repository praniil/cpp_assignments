#include<iostream>
#include<cmath>
using namespace std;

template<class T>
T SquareRoot(T number){
    if(number >= 0 ){

    T squareRoot = pow(number, 0.5);
    return squareRoot;
    }
    else{

    throw invalid_argument("Cannot calculate square root of negative numbers");
    }
}

int main(){
    try{
        int number;
        cout << "enter the number: " << endl;
        cin >> number;
        cout << "the square root is " << SquareRoot<int>(number);
    }
    catch(invalid_argument& e){
        cout << "error: " << e.what() << endl;
    }
}
