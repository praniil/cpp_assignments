#include<iostream>
#include<array>
//sending the pointer to the actual array 
void traverse(int* arrayTra) {
    std::cout << "first way: " << *arrayTra << std::endl;    //first element
} 

void traverseWay2(int arrayTra[]) {
    std::cout << "second way: " << *arrayTra << std::endl;    //first element
}

//sending the copy of actual array
void traaverseCopy(std::array<int, 5> array) {
    array[0] = 9;
    std::cout << "first element: " << array[0] << std::endl;
}

int main() {
    int array[5] = {3, 3, 3, 4, 5};
    int* arrayPointer = array;
    //traverse
    for (int i= 0; i < 5; i++) {
        std::cout << *arrayPointer++ << std::endl;
    }
    traverse(array);
    traverseWay2(array);

    std::array<int, 5> myArray = {1, 2, 3, 4, 5};
    traaverseCopy(myArray);
    std::cout << "first element after changing in the function: " << myArray[0] << std::endl;
    return 0;
}