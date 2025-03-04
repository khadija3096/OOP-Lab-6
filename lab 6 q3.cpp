#include<iostream>
using namespace std;

class person{
	public:
	string name;
	int age;
	person(string name, int age){
		this->name=name;
		this->age=age;
	}
	void displayDetails(){
		cout<<"Name: "<<name<<" Age: "<<age;
	}
	
};
class teacher: public person{
	public:
		string subject;
		teacher(string n, int a, string s):person(n,a){
			subject=s;
		}
		void displayDetails(){
			person::displayDetails();
			cout<<" Subject: "<<subject;
		}
};
class Researcher:public teacher{
	public:
		string researchArea;
		Researcher(string n, int a , string s, string r):teacher(n,a,s){
		
			researchArea=r;
			
		}
		void displayDetails(){
			person::displayDetails();
			cout<<" Research Area: "<<researchArea;
		}
};
class professor:public Researcher{
	public:
		int publications;
			professor(string n, int a , string s, string r,int p): Researcher(n,a,s,r){
			publications=p;
			
		}
		void displayDetails(){
			Researcher::displayDetails();
			cout<<" Publications: "<<publications;
		}
};
int main(){
	professor r1("Khadija",18,"maths","London",4);
	r1.displayDetails();
}
