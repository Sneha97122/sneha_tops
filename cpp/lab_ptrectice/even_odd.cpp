#include<iostream>
using namespace std;
class evenodd{
	public:
	int num;
	
	int eo(){
		if(num%2==0){
			cout<<"number is even";
		}else
		{
			cout<<"number is odd";
		}
	}
};
int main(){
	evenodd e1;
	cout<<"enter the number";
	cin>>e1.num;
	e1.eo();
}
