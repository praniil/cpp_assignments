#include<iostream>
#include<vector>
#include<memory>
#include<cstring>

int main() {
    std::unique_ptr<char[]> str1(new char[1000]); //1000 * sizeof(char) is allocated
    std::cout << "enter the string: " << std::endl;
    std::cin.getline(str1.get(), 1000);

    size_t actualSize = strlen(str1.get());
    std::cout << actualSize << std::endl;
    for(size_t i = 0; i < actualSize; i++) {
        // std::cout << static_cast<void*> (str1.get()) << std::endl;
        std::cout << str1[i] << std::endl;
    }
    std::cout << "here" << std::endl;
    int index;
    for(size_t i = actualSize; i > 0; i--) {
        if (str1[i] == ' ') {
            index = i;
            break;
        }
    }

    std::cout << "index" << index;

    for(size_t i = index; i < actualSize; i++) {
            std::cout << str1[i] << std::endl;
    }

    return 0;
}