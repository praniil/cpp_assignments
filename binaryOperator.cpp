#include <iostream>
using namespace std;

class Matrix1
{
public:
    int number1, number2, number3, number4;
    Matrix1()
    {
        number1 = 1;
        number2 = 2;
        number3 = 3;
        number4 = 4;
    }
    
    
    
};

class Matrix2{
    public:
    int a, b, c, d;
    Matrix2& temp;
    Matrix2(int a, int b, int c, int d ){
        this->a = a;
        this->b=b;
        this->c=c;
        this->d=d;
    }
   
    Matrix2 operator * (Matrix1 m1){
        temp.a= a* m1.number1 + b* m1.number3;

        temp.b= a* m1.number2 + b* m1.number4;
        temp.c= c* m1.number1 + d* m1.number3;
        temp.d= c* m1.number2 + d* m1.number4;



    }
};

