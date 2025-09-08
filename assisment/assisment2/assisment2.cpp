#include<iostream>
using namespace std;
class event{
	public:
	string name;
	string customer_name;
	double gest;
	double time;
	
	
	
	void getdata(){
		cout<<endl<<"enter event name:-";
		cin>>name;
		cout<<endl<<"enter customer first and last name:-";
		cin>>customer_name;
		cout<<endl<<"enter the number of guest:-";
		cin>>gest;
		cout<<endl<<"enter the  number of event minites:-";
		cin>>time;
		
		cout<<"========================event estrablish for:"<<customer_name<<"===================================";
	}
	
	void count(){
			const double CostPerHour = 18.50; 
 			const double CostPerMinute = .40; 
			const double CostOfDinner = 20.70;
			float costforoneserver;
			float totalfoodcost;
			float averagecost;
			float totalcost;
			float cost1=0;
			float cost2=0;
			float depositamount;
			
			int server;
	
		
			//number of serve
//			server=(1*gest)/20;
		server = gest / 20;
        if (gest > 0 && server == 0) server = 1;
			
			//cost of one server
			cost1 = (time / 60) * CostPerHour; 
			cost2 = ((int)time % 60) * CostPerMinute; 
			costforoneserver = cost1 + cost2; 
			
			
			//cost for food
			totalfoodcost = gest * CostOfDinner; 
			
			//avrage cost for one persoin
			averagecost = totalfoodcost / gest; 

			//total cost
			totalcost = totalfoodcost + (costforoneserver * server); 

			cout<<endl<<"number of server:-"<<server;
			cout<<endl<<"cost for server:-"<<costforoneserver;		 
			cout<<endl<<"the cost for food is:-"<<totalfoodcost;
			cout<<endl<<"avregae cost per person:-"<<averagecost;
			
			cout<<endl<<"total cost is:-"<<totalcost;
			cout<<endl<<"please deposite a 25% deposit to reserv the event";
			depositamount = totalcost * .25; 

			cout<<endl<<"the deposit nedded is:-"<<depositamount;
			
			
	}
	
	
	
};

int main(){
	cout<<"*************************************************EVENT MANEGMENT SYSTEM**********************************"<<endl;
	event e1;
	e1.getdata();
	e1.count();
	
}
