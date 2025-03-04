#include<iostream>
using namespace std;

class Device{
	public:
	int deviceId;
	bool status;
	Device(int di, bool s){
		deviceId=di;
		status=s;
	}
	void displayDetails(){
		cout<<"Device ID: "<<deviceId<<" Status: "<<status;
	}
	
};
class Smartphone: public Device{
	public:
	float screensize;
	Smartphone(int di, bool s, float sz):Device(di,s){
	};
	void displayDetails(){
		Device::displayDetails();
		cout<<" Screen size: "<<screensize;
	}
		
};
class SmartWatch: public Smartphone{
	public: 
	bool heartRateMonitor;
	SmartWatch(int di, bool s, float sz, bool hrm):Smartphone(di,s,sz){
		heartRateMonitor=hrm;
	}; 
	void displayDetails(){
		Smartphone::displayDetails();
		cout<<"Heart rate monitor: "<<heartRateMonitor;
	};
};
class SmartWearable:public SmartWatch{
	public:
		int stepCounter;
		SmartWearable(int di, bool s, float sz, bool hrm,int sc):SmartWatch(di,s,sz,hrm){
			stepCounter=sc;
		};
     void displayDetails(){
		    SmartWatch::displayDetails();
		    cout<<"Step counter: "<<stepCounter;
        };
};
int main(){
	SmartWearable s1(100,true,11.5,false,6);
	s1.displayDetails();
}
        
