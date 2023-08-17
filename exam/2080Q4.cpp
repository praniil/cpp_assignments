#include<iostream>
using namespace std;

class Time{
    public:
        int hour, minutes, seconds;
    Time(){
        hour = 0;
        minutes = 0;
        seconds = 0;
    }
    Time(int value){
        this -> hour = value / 3600;
        this -> seconds = (value % 3600) % 60 ;
        this -> minutes = (value % 3600) / 60;
    }

    Time operator +(Time t2){
        Time sum;
        sum.hour = hour + t2.hour;
        sum.minutes = minutes + t2.minutes;
        sum.seconds = seconds + t2.seconds;
        return sum;
    }
};

int main(){
    Time t1(3600);
    Time t2(3600);
    Time sum = t1 + t2;
    cout << sum.hour << "hour" << sum.minutes << "minutes" << sum.seconds << "seconds" <<endl;
}