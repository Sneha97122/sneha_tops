#include<iostream>
using namespace std;
long factfind(int n){
	if(n==0 || n==1)
	return 1;
	else 
	return n*factfind(n-1);
	
}

int main(){
	int  n;
	cout<<"enter the number="<<endl;
	cin>>n;
	
	cout<<"factorial of"<<n<<"number is="<< factfind(n)<<endl;
}
