#include<iostream>
using namespace std;
class vehicle{
	public:
	string brand;
	int speed;
	vehicle(string b, int s){
		brand=b;
		speed=s;
	};
	void displayDetails(){
		cout<<"Brand: "<<brand<<" Speed: "<<speed;
	}
};
class car: public vehicle{
	public: 
	int seats;
	car(string b, int s, int seats):vehicle(b,s){
		this->seats=seats;
	}
	void displayDetails(){
		vehicle::displayDetails();
		cout<<" Seats: "<<seats;
	}
};
class Electriccar: public car{
	public:
	int batterylife;
	Electriccar(string b, int s, int se,int bl): car(b,s,se){
		batterylife=bl;
	}
	void displayDetails(){
		car::displayDetails();
		cout<<" Battery life: "<<batterylife;
	}
	
};
int main(){
	Electriccar e1("toyota",50,9,8);
	e1.displayDetails();
}