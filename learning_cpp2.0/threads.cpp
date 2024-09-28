#include<iostream>
#include<thread>
#include<unistd.h>
#include<fstream>

// void threadFunction(int id) {
//     std::cout << "thread: " << id << std::endl;
//     sleep(5);
// }

int main() {
    // std::thread t1(threadFunction, 1);
    // std::thread t2(threadFunction, 2);

    // t1.join();
    // t2.join();

    auto thread1 = std::thread([](){
        for(int i = 0; i < 10; i++) {
            std::cout << "in thread1 " << i << std::endl;
            sleep(1);
        }
    });

    thread1.join(); //if i dont use join() the main function wont wait for the completion of task in the thread
    
    for(int i = 0; i < 10; i++) {
        std::cout << "in main " << i << std::endl;
        sleep(0.001);
    }

    return 0;
}