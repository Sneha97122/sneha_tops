#include<iostream>
using namespace std;
class sum{
	public:
	int num1,num2;
	
	getdata(){
		cout<<"enter the 1st number:-";
		cin>>num1;
		cout<<"enter the 2nd number:-";
		cin>>num2;	
	}
	printdata(){
		cout<<"sum of the tow number is:-"<<num1+num2;
	}
	
};
int main(){
	sum s1;
	s1.getdata();
	s1.printdata();
}
