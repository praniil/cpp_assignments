#include <iostream>
using namespace std;

class Time
{
public:
    int hr;
    int min;
    int sec;
    Time()
    {
        hr = 12;
        min = 0;
        sec = 0;
    }
    Time(int a)
    {
        hr = a / 3600;
        min = (a % 3600) / 60;
        sec = (a % 3600) % 60;
    }
    int returnHr()
    {
        return hr;
    }
    int returnMin()
    {
        return min;
    }
    int returnSec()
    {
        return sec;
    }
};

int main()
{
    Time t1(3700);
    Time t2(t1);
    

    cout << t1.returnHr() << "hr" ;
    cout << t1.returnMin() << "min" ;
    cout << t1.returnSec() << "sec" ;

    cout << t2.returnHr() << "hr" ;
    cout << t2.returnMin() << "min" ;
    cout << t2.returnSec() << "sec" ;
}