#include<iostream>
#include<vector>

int sum(int a, int b) {
    return a + b;
}

int main() {
    std::vector<int> vec1{1, 2, 3, 4, 5};
    std::vector<int>::iterator ptr;

    auto print = [&vec1, &ptr] () -> int {
        for(ptr = vec1.begin(); ptr < vec1.end(); ptr++) {
            std::cout << *ptr << std::endl;
        }
        return 0;
    };

    print();

    int a = 2;
    int b = 3;
    int c = 4;
    auto sum1 = [&](int a, int b) -> int {return a + b;};
    int finalSum = sum(c, sum1(a, b));
    std::cout << "final sum: " << finalSum << std::endl;
    return 0;
}
