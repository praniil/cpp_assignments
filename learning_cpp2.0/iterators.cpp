#include<iostream>
#include<vector>
#include<iterator>

int main () {
    std::vector<int> ar{1, 2, 3, 4, 5};
    std::vector<int>::iterator ptr;

    for(ptr= ar.begin(); ptr < ar.end(); ptr++) {
        std::cout << *ptr << std::endl;
    }

    std::vector<int> vec1{1, 2, 3, 4, 10};
    std::vector<int>::iterator pointer1;
    pointer1 = vec1.begin();
    std::advance(pointer1, 3);
    std::cout << *pointer1 << std::endl;

    auto it = std::next(pointer1, 2);
    auto it1 = std::prev(ptr, 2);

    std::cout << "next: " << *it << std::endl;
    std::cout << "prev: " << *it1 << std::endl;
}