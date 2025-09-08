#include<iostream>
using namespace std;
int main(){
	int a[2][2],b[2][2],c[2][2];
	int i,j;
	cout<<"enter 1st matrices elements"<<endl;
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			cin>>a[i][j];
		}
//		cout<<endl;
	}
	cout<<"enter second matrices elements"<<endl;
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			cin>>b[i][j];
		}
//		cout<<endl;
	}
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
		c[i][j]=a[i][j]+b[i][j];
		}
	}
	
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			cout<<"addition is"<<c[i][j]<<endl;
		}
	}
	
}
