#include<iostream>
using namespace std;
class GoldInt;

class GoldNep{
    public:
    float tola;
    GoldNep(){
        tola = 0;
    }
    GoldNep(float tola){
        this -> tola = tola;
    }
    void conversion ( GoldInt obj);

    void display(){
        cout << "grams in tola: " << tola;
    }
};


class GoldInt{
    public:
    float grams;
    GoldInt(){
        grams = 0;
    }
    GoldInt(float grams){
        this-> grams = grams;
    }
    void conversion (GoldNep obj);
    void display (){
        cout << "tola in grams: " << grams << endl;
    }
};

void GoldNep::conversion(GoldInt obj) {
    tola = obj.grams / 11.664;
}

void GoldInt::conversion(GoldNep obj) {
    grams = obj.tola * 11.664;
}

int main(){
    GoldInt g1(25);
    GoldNep tola1(25);
    GoldInt g2;
    g1.conversion(tola1);
    g1.display();
    
}