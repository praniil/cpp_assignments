#include<iostream>
using namespace std;

class Fixed_deposit {
	public:
		long int Principle;
	private:
		int id;
		int years;
		float rate;
		float rate_value;
	
	public:
	Fixed_deposit() {}
	Fixed_deposit(int p, int y, int r){
		Principle = p;
		years = y;
		rate = r;
		rate_value = Principle;
		for(int i = 1; i <=y ; i++){
			rate_value = rate_value * (1.0 + r * i);
			
		}
	}
	Fixed_deposit(int p, int y, int r) {
		Principle = p;
		years = y;
		rate = r;
		rate_value = Principle;
		for(int i = 1; i <= y; i++){
			rate_value = rate_value * (1.0 + (float(r) / 100))* i ;
		}
		
	}

	int getYears(){
		return this->years;
	}

	void setYears(int year){
		this->years = year;
	}


};


int main(){
	Fixed_deposit fd1, fd2;

	fd1 = Fixed_deposit();

	cout << fd1.Principle <<"\n";
	cout << fd1.getYears()<<"\n";

	fd2 = Fixed_deposit(100, 2, 3);
	cout << fd2.Principle<<"\n";
	cout << fd2.getYears()<<"\n";


	// fd1.Principle = 100;

	// fd1.setYears(12);

	// cout << fd1.Principle;
	// cout << fd1.getYears();

	// fd1.setYears()

}
