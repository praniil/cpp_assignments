#include<iostream>
#include<vector>
#include<complex>

int main () {
    double d1 = 2.3;    //using = sign
    double d2{2.3}; //using curly braces

    std::complex<double> z1 = 1;
    std::complex<double> z2{1, 2};
    std::complex<double> z3 {d1, d2};

    std::vector <int> v = {1, 2, 3, 5, 4, 5, 6};
    std::vector <int> v2 {1, 2, 3, 4, 4};
    
    std::cout << d1 << std::endl;
    std::cout << d2 << std::endl;
    std::cout << z1 << std::endl;
    std::cout << z2 << std::endl;
    std::cout << z3 << std::endl;
    
    int size_of_stdvector = sizeof(v);
    std::cout << "size of standard vector object that includes pointer, size and capacity is: " << size_of_stdvector << "bytes" << std::endl;

    int length = v.size();
    int length2 = v2.size();
    std::cout << "length" << length << std::endl;
    std::cout << "length" << length2 << std::endl;

    for (int i=0; i< length; i++) {
        std::cout << v[i] << std::endl;
    }
    
    return 0;
}
