#include<iostream>
using namespace std;
int a,b;
int sum(int a,int b,int c,int d){
	return a+b+c+d;
}

int main(){
	int c,d;
		cout<<"enter the value of a="<<endl;
	cin>>a;
		cout<<"enter the value of b="<<endl;
	cin>>b;
		cout<<"enter the value of c="<<endl;
	cin>>c;
		cout<<"enter the value of d="<<endl;
	cin>>d;
	cout<<"result is="<<sum(a,b,c,d);
}
