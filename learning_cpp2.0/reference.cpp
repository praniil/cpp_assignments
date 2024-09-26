#include<iostream>
//pass by reference
void sum(int& a, int& b) {
    std::cout << a + b << std::endl;
    a = 10;
}

//pass by pointer
void sum_ptr(int* a, int* b) {
    std::cout << "sum ptr" << *a + *b << std::endl;
    *a = 50;
}

int main(int argc, char* argv[]) {
    int a = 2, b = 3;
    std::cout << "a bef" << a << std::endl;
    sum(a, b);
    std::cout << "a aft" << a << std::endl;
    int* ptra = &a;
    int* ptrb = &b;
    sum_ptr(ptra, ptrb);
    std::cout << "a after after" << a << std::endl;
    return 0;
} 