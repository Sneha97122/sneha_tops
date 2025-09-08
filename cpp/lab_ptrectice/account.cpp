#include<iostream>
using namespace std;
class account{
	private:
		double balance;
		string password;
	public:
		string accountid;
		string username;
		
	void setdata(double b,string p){
		balance=b;
		password=p;
}
		
	double getbalance(){
		return balance;
	}
	string getpassword(){
		return password;
	}
	
	void getAccountData(){
		cout<<"enter account id="<<endl;
		cin>>accountid;
		cout<<"enter username="<<endl;
		cin>>username;
		cout<<"enter balance="<<endl;
		cin>>balance;
		cout<<"enter password="<<endl;
		cin>>password;
		
	}
	
	void printdata(){
		cout<<"printing the account details:";
		cout<<"account id="<<accountid<<endl;
		cout<<"username="<<username<<endl;
			cout<<"balance="<<balance<<endl;
		//hide password and balance
		cout<<"password:";
		for(int i=0;i<password.length();i++){
			cout<<"*";
		}
		cout<<endl;

	}
		
};
int main(){
	account a1;
	a1.getAccountData();
	a1.printdata();
	a1.setdata(23000,"sneha1234");
	
//	cout<<"\n after updating using setdata():"<<endl;
//	cout<<"balance:"<<a1.getbalance()<<endl;
//	cout<<"password:"<<a1.getpassword()<<endl;

}
