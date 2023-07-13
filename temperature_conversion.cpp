#include<iostream>
using namespace std;

int main(){
    float temperature;
    float celcius, farhenit;
    int number;
    cout << "enter the temperature";
    cin >> temperature;
    cout << "press 1. to change farhenit to celcius" << "\n" << "press 2. to change celcius to farhenit";
    cin >> number;
    switch (number)
    {
    case 1:
        celcius = (5 * (temperature - 32) ) / 9;
        cout << "the temperature in celcius is :" << celcius;
        break;
    
    case 2:
        farhenit = (9 * temperature) / 5 + 32;
        cout << "the temperature in farhenit is :" << farhenit;
        break;

    default:
        cout << "error";
        break;
    }

}