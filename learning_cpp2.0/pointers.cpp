#include<iostream>

int myFunction (int value) {
    std::cout << "value is: " << value << std::endl;
    return value;
}

int main() {
    //1. regular pointers
    char c = 'a';
    char* p = &c;   
    std::cout << "p: " << p << std::endl;
    std::cout << "*p: " << *p << std::endl;

    char** ppc = &p;
    std::cout << "ppc" << ppc << std::endl;

    //2. null pointer not pointing to any valid memeory location
    int* pointer = nullptr;
    // std::cout << "null pointer" << *pointer << std::endl;

    //3. void pointer = Generic pointer, can point to data of any data type
    //we cannot dereference a void pointer without type casting

    int a = 10;
    void* ptr = &a;

    char c1 = 'a';
    void* ptr2 = &c1;

    int* intPtr = static_cast<int*>(ptr);
    std::cout << "the value of a is: " << *intPtr << std::endl;

    std::cout << "address of a is: " << ptr << std::endl;
    std::cout << "address of c1 is: " << ptr2 << std::endl;

    /*
        error
        derefrencing a void pointer    
            std::cout << "value of a is: " << *ptr << std::endl;
    */

   //4. pointer to pointer
   int x = 30;
   int* pointerInt = &x;
   int** pointerToPointerInt = &pointerInt;
    //dereferencing 
   std::cout << "the value of x is: " << **pointerToPointerInt << std::endl;

   int normalPointerSize = sizeof(pointerInt);
   int pointerToPointerSize = sizeof(pointerToPointerInt);

   std::cout << "normal size: " << normalPointerSize << "\n" << "pointer to pointer size: " << pointerToPointerSize << std::endl;

   //5. function pointer: call a function by its pointer
   //function pointer points to the code not data
   //a function pointer stores the start of executable code 
    int (*funcPointer)(int) = myFunction;
    (*funcPointer)(5);

    //6. array pointers
    int array[4] {1, 2, 3, 4};
    //array name is itself a pointer to the first element of an array
    int* ptrArr = array;
    std::cout << "first element: " << *array << std::endl;
    std::cout << "first element: " << *ptrArr << std::endl;
    std::cout << "first element address: " << array << std::endl;
    std::cout << "first element address: " << ptrArr << std::endl;

    return 0;
}
