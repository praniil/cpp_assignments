#include <iostream>

class Complex {
    double re, im;
public:
    int changeMe = 0;
    Complex(double r, double i): re{r}, im{i} {}
    Complex(double r): re{r}, im{0} {}
    Complex(): re{0}, im{0} {}

    Complex& return_func() {
        std::cout << this->re << this->im << std::endl;
        return *this;
    }

    double get_re() {
        return this->re;
    }

    double get_im() {
        return this->im;
    }

    //operator overloading vs normally
    //operator overloading
    Complex& operator+=(Complex other) {
        re += other.re;
        im += other.im;
        return *this;
    }

    //normal
    Complex& addition(Complex other) {
        re = re + other.re;
        im = im + other.im;
        return *this;
    }
};

int main (){
    Complex c1;
    Complex c2(2, 3);
    Complex c3(2);
    std::cout << c1.changeMe << std::endl;
    Complex result = c2.return_func();
    c1.changeMe = 10;
    std::cout << c1.changeMe << std::endl;
    std::cout << result.get_re() << std::endl;
    std::cout << result.get_im() << std::endl;
    //using operator overloading
    c2 += c3;

    //normal
    c1 = c1.addition(c2);
    
    std::cout << c2.get_re() << "\n" << c2.get_im() << std::endl;
    std::cout << c1.get_re() << "\n" << c1.get_im() << std::endl;
    return 0;
}
