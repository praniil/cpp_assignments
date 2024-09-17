#include <iostream>
#include <stdio.h>
#include <time.h>

constexpr int product(const int var1, const int var2) {
    return var1 * var2;
}

int prod(int var3, int var4) {
    return var3 * var4;
}

int main () {
    clock_t time_req, time_req2;
    const int var1 = 10;
    const int var2 = 10;
    time_req = clock(); 
    constexpr int product_res = product(var1, var2);
    time_req = clock() - time_req;
    std::cout << "total time in sec: " << (float)time_req / CLOCKS_PER_SEC << std::endl;
    std::cout << "product result: " << product_res << std::endl;
    
    int var3 = 10;
    int var4 = 10;
    time_req2 = clock();
    int prod_res = prod(var3, var4);
    time_req2 = clock() - time_req2;
    std::cout << "time for non constexpr in sec: " << (float)time_req2 / CLOCKS_PER_SEC << std::endl;
    std::cout << "prod res: " << prod_res << std::endl;

    return 0;
}
