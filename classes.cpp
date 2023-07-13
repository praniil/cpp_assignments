#include<iostream>
using namespace std;

class laptops {
	public :
	string name;
	string model;
	int price;
};

int main(){
	laptops laptop1;
		laptop1.name = "Lenovo";
		laptop1.model = "Legion";
		laptop1.price = 125000;
	

	laptops laptop2;
		laptop2.name = "Acer";
		laptop2.model = "Nitro5";
		laptop2.price = 120000;
	

	cout << laptop1.name << laptop1.model << laptop1.price << "\n";
	cout << laptop2.name << laptop2.model << laptop2.price;
}
