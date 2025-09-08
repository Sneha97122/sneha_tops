#include<iostream>
#include<string>
using namespace std;

int main(){
	int arr[5];
	int sum;
	float avrg;
	for(int i=0;i<=4;i++){
		cout<<"enter the value of"<<i+1<<"=";
		cin>>arr[i];
		sum+=arr[i];
	}
	cout<<endl;
	cout<<"sum="<<sum<<endl;
	avrg=sum/5;
	cout<<"avrag is="<<avrg<<endl;
	

	return 0;	
}
