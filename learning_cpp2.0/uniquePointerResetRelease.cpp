#include<iostream>
#include<memory>

int main() {
    int size;
    std::cout << "enter the size of an array: " << std::endl;
    std::cin >> size;
    std::unique_ptr<int[]> array(new int[size]);  
    for(int i = 0; i < size; i++) {
        array[i] = i + 1;
    }  

    for(int i = 0; i < size; i++) {
        std::cout << array[i] << std::endl;
    }

    std::cout << array.get() << std::endl;

    //array's ownership is released and the new owner is array2
    std::unique_ptr<int[]> array2(array.release());

    for(int i = 0; i < size; i++) {
        std::cout << array2[i] << std::endl;
    }

    // for(int i = 0; i < size; i++) {
    //     std::cout << array[i] << std::endl;
    // }
}