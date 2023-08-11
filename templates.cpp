#include<iostream>
#include<string>
#include<cstring>
using namespace std;

template<class T>
T add(T a, T b) {
    T sum = a + b;
    return sum;
}

char *add (char *a, char *b){
    return strcat(a, b);
}

int main(){
    cout << "sum: " << add(2.5, 2.0);
    char s1[] = "s";
    char s2[] = "s2";
    cout << "sum: " << add(s1, s2);
}
