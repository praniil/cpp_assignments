#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ofstream outfile("text.txt");
    cout << "enter item name: ";
    char name[30];
    cin >> name;

    outfile << name << endl;
    cout << "enter the price";
    int price;
    cin >> price;
    outfile << price << endl;
    outfile.close();

    ifstream infile("text.txt");
    infile >> name;
    infile >> price;
    cout << "Item name: " << name << endl;
    cout << "price: " << "$" << price << endl;
    infile.close();
}