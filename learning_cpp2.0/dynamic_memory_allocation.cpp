#include<iostream>

int main() {
    //allocate a memory for array of any size;
    int size;
    std::cout << "enter the size of an array you want to allocate: " << std::endl;
    std::cin >> size;
    int* ptr = new int[size];
    if (ptr == nullptr) {
        std::cerr << "Memory allocation faield" << std::endl;
        return 1;
    }

    for(int i=0; i< size; i++) {
        //fill every index by 1
        ptr[i] = i;
    }
    
    //pointer arithmetics
    //always understand this from right to left operation(for understanding)

    // Create a separate pointer for traversal
    int* tempPtr = ptr; // Keep a copy of the original pointer

    std::cout << "++*tempPtr: " << ++*tempPtr << std::endl;   // Increment the value pointed by tempPtr
    std::cout << "*++tempPtr: " << *++tempPtr << std::endl;   // Increment the pointer and take the value
    std::cout << "tempPtr + 1: " << tempPtr + 1 << std::endl; // Print the address of the next element
    std::cout << "*tempPtr++: " << *tempPtr++ << std::endl;   // Get the value pointed by the pointer and move to the next position
    std::cout << "(*tempPtr)++: " << (*tempPtr)++ << std::endl; // Get the value pointed by the pointer and increment it

    delete[] ptr;

    //using void pointer
    void* pointer = new int[size];

    //we can use void pointer as a pointer to any type in dynamic memory allocation but at first be have to type cast it to the respective type
    for (int i = 0; i < size; i++) {
        int* intPointer = static_cast<int*>(pointer);
        std::cout << "give me the int: " << std::endl;
        std::cin >> intPointer[i];
    }

    for(int i = 0; i < size; i++) {
        char* charPointer = static_cast<char*>(pointer);
        std::cout << "give me the character: " << std::endl;
        std::cin >> charPointer[i];
    }

    delete[] pointer;
    
    return 0;
}