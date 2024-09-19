#include<iostream>

void addition(int a, int b) {
    std::cout << "addition: " << a + b << std::endl;
}

void subtraction(int a, int b) {
    std::cout << "subtraction: " << a - b << std::endl;
}

void multiplication(int a, int b) {
    std::cout << "multiplication: " << a * b << std::endl;
}

int main() {
    //0th pos add, 1st pos sub, 2nd pos mul
    void (*funcPointerArr[])(int, int) = {addition, subtraction, multiplication};
    int a = 10, b = 2;
    unsigned int choice;
    std::cout << "enter your choice: " << std::endl;
    std::cin >> choice;

    if(choice > 2) {
        std::cout << "enter choice greater than 0 less or equal to 2" << std::endl;
    }

    funcPointerArr[choice](a, b);

    return 0;
}