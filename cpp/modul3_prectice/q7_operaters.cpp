#include<iostream>
using namespace std;
int main(){
	int a,b;
	cout<<"------------------arathimatic operaters example-------------------"<<endl;
	cout<<"enter the value of a";
	cin>>a;
	cout<<"enter the value of b";
	cin>>b;
	cout<<"addition of the a and b is"<<a+b<<endl;
	cout<<"subtration of the a and b is"<<a-b<<endl;
	cout<<"multiplication of the a and b is"<<a*b<<endl;
	cout<<"diversion of the a and b is"<<a/b<<endl;
	cout<<"moduler of the a and b is"<<a%b<<endl;
	
	
	cout<<"--------------logical operaters example--------------------------";
	if(a==b){
		cout<<"a and b are same"<<endl;
	}
	else if(a!=b){
		cout<<"a and b are diffrent"<<endl;
	}else if(a>b){
		cout<<"a is greter than b"<<endl;
	}else if(a<b){
		cout<<"b is greter than a"<<endl;
	}else if(a>=b){
		cout<<"a is greter eauel b"<<endl;
	}else if(a<=b){
			cout<<"b is greter eauel a"<<endl;
	}
	
	cout<<"-------------------assigning operaters example--------------------"<<endl;
	int x=5;
	x+=x;
	cout<<"x+=x value is="<<x<<endl;
	x-=x;
	cout<<"x-=x value is="<<x<<endl;
	x*=x;
	cout<<"x*=x value is="<<x<<endl;
	x/=x;
	cout<<"x/=x value is="<<x<<endl;
	x%=x;
	cout<<"x%=x value is="<<x<<endl;
}
