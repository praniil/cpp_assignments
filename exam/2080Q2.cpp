#include <iostream>
using namespace std;

int sum(int number1 , int number2 = 3)
{
    return number1 + number2;
}

int sum(int number1, int number2, int number3)  
{
    return number1 + number2;
}

int main()
{
    cout << sum(5) << endl;
}