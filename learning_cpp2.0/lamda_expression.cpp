#include<iostream>
#include<vector>

int sum(int a, int b) {
    return a + b;
}

int main() {
    std::vector<int> vec1{1, 2, 3, 4, 5};
    std::vector<int>::iterator ptr;

    //here vec1 is passed by reference and ptr as value
    // auto print = [&vec1] (auto ptr) -> int {
    //     for(ptr = vec1.begin(); ptr < vec1.end(); ptr++) {
    //         std::cout << *ptr << std::endl;
    //     }
    //     return 0;
    // };

    // print(ptr);

    //here both vec1 and ptr passed by reference
    auto print = [&vec1, &ptr] () -> int {
        for(ptr = vec1.begin(); ptr < vec1.end(); ptr++) {
            std::cout << *ptr << std::endl;
        }
        return 0;
    };

    print();

    auto a = 2;
    int b = 3;
    int c = 4;
    //in sum2 a and b are the arguments and they are the value, and can access all the other var by reference other than a and b. 'c is captured by reference'
    auto sum1 = [&]() -> int {int sum = a + b; a = 100; c = 1000; return sum;}; //here all the vars of the surrounding are captured by reference
    auto sum2 = [&](int a, int b) -> int {int sum = a + b; a = 100; c = 1000; return sum;}; //auto takes its type on its own. here its a lambda function
    auto sum3 = [&a](int b) -> int {return a + b;}; //here a is taken as reference and b by value. other variables are not captured

    auto finalSum1 = sum(c, sum1());
    auto finalSum2 = sum(c, sum2(a, b));
    auto finalSum3 = sum(c, sum3(b));

    std::cout << "a: " << a << std::endl;
    std::cout << "c: " << c << std::endl;

    std::cout << "final sum1: " << finalSum1 << std::endl;
    std::cout << "final sum2: " << finalSum2 << std::endl;
    std::cout << "final sum3: " << finalSum3 << std::endl;
    return 0;
}
