#include<iostream>
using namespace std;
class Employee{
	public:
	string name;
	float salary;
	Employee(string n,float s){
		name=n;
		salary=s;
	}
	void displayDetails(){
		cout<<"Name: "<<name<<" Salary: "<<salary;
		
	};
	
};
class manager: public Employee{
	public:
		float bonus;
		manager(string n, float s, float b):Employee(n,s){
			bonus=b;
		};
		void displayDetails(){
			Employee::displayDetails();
				cout<<"Bonus: "<<bonus;
			};
		
};
int main(){
	manager e1("khadija",500.0,890.9);
	e1.displayDetails();
}
