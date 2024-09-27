#include<iostream>
#include<fstream>
#include<memory>

class FileHandle {
    public:
    std::string filename;
    std::fstream file1;
    std::string content;

    FileHandle(std::string fileName) : filename(fileName) {
        file1.open(fileName, std::ios::in | std::ios::out | std::ios::app);
        if(!file1) {
            std::cerr << "failed to create a file" << std::endl;
        }
    }

    void write(std::string text) {
        file1 << text;
    }

    std::string read() {
        std::cout << "get pointer pos: " << file1.tellg() << std::endl;
        file1.seekg(0);
        content.clear();
        std::cout << "get pointer pos: " << file1.tellg() << std::endl;
        file1 >> content;
        std::cout << "in class: " << content << std::endl;
        return content;
    }

    void append(std::string text) {
        file1 << text;
    }

    ~FileHandle() {
        file1.close();
    }
};

int main() {
    std::unique_ptr<FileHandle> f1(new FileHandle("test_file1.txt"));

    f1->write("Pranil");
    (*f1).write(" Parajuli");

    std::string content = f1->read(); 
    std::cout << "in main" << content << std::endl;

    f1->append(" hey");
    return 0;

}