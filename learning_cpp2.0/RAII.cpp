#include<iostream>
#include<fstream>
#include<memory>

class FileHandling {
    public:
        std::string fileName;
        std::ofstream file;
        FileHandling(const std::string& fileName): fileName(fileName) {
            file.open(fileName, std::ios::in | std::ios::out);
            std::cout << "initialized" << std::endl;
        }

        ~FileHandling() {
            file.close();
            std::cout << "destructed" << std::endl;
        }
};

int main() {
    //normal object or raw pointer, when goes out of scope destructor is called
    // FileHandling f1("file1");
    //FileHandling* pointer = &f1;
    // pointer = &f1;

    //we dont have to release unique pointer explicitly
    std::unique_ptr<FileHandling> f3(new FileHandling("File3"));
    std::cout << "pointer: " << f3.get() << std::endl;
    std::cout << "filename: " << f3->fileName << std::endl;
    f3.release();
    f3.reset();

    FileHandling* f2 = new FileHandling("file2");
    std::cout << "pointer: " << f2 << std::endl;
    std::cout << "filename: " << f2->fileName << std::endl;
    std::cout << "filename: " << (*f2).fileName << std::endl;
    delete f2;

}