#include<iostream>
using namespace std;

template<class T>
class Container{
    private:
    T content;
    public:
    Container(){
        content = 0;
    }
    Container(T content){
        this -> content = content;
    }
    
    void getContent(){
        cout << "content: " << content << endl;
    }
};

int main(){
    Container<int> c1(5);
    Container<string> c2("hello Pranil");
    Container<double> c3(5.5);
    c1.getContent();
    c2.getContent();
    c3.getContent();
}