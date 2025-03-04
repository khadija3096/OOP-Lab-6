#include<iostream>
using namespace std;
class account{
	public:
	int accountNumber;
	float balance;
	account(int aN,float b){
		accountNumber=aN;
		balance=b;
	}
	void displayDetails(){
		cout<<"Account number: "<<accountNumber<<" Balance: "<<balance;
	}
};
class savingsAccount: public account{
	public:
		float interestRate;
		savingsAccount(int an,float b, float iR):account(an,b){
			interestRate=iR;
		};
		void displayDetails(){
		account::displayDetails();
		cout<<" Interest Rate: "<<interestRate<<"\n";
		};
		
		
};
class CheckingAccount: public account{
	public:
		float overdraftLimit;
		CheckingAccount(int an, float b, float odl):account(an,b){
			overdraftLimit=odl;
		};
		void displayDetails(){
			account::displayDetails();
			cout<<" Over draft Limit: "<<overdraftLimit<<"\n";
		};	
};
int main(){
	savingsAccount s1(123,8000.0,67.2);
	s1.displayDetails();
	CheckingAccount c1(234,7897.0,898.0);
	c1.displayDetails();
}