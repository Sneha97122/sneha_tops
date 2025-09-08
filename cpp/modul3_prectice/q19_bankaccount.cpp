#include<iostream>
using namespace std;
class banckaccount{
	private:
		double balance;
	public:
		string accountholder_name;
		double account_number;
		
	banckaccount(double currentbalance){
	if(currentbalance >=0){
		balance=currentbalance;
	}
}
			
	void deposit(double amount){
		if(amount>=0){
			balance+=amount;
			cout<<"deposit="<<amount<<endl;
		}
	}
	
	void withdrow(double amount){
		if(amount >0 && amount <=balance){
			balance-=amount;
			cout<<"withdrow="<<amount<<endl;
		}
	}
	
	double getbalance(){
		return balance;
	}	
};

int main(){
	string accountholder_name;
		double account_number;
	
	cout<<"enter accountholder name";
	cin>>accountholder_name;
	cout<<"enter account holder account number";
	cin>>account_number;
	banckaccount b1(1000);
	b1.deposit(500);
	b1.withdrow(200);
	cout<<"current balance="<<b1.getbalance()<<endl;
	
	
}
