#include<iostream>
using namespace std;
class rectangal{
	public:
	int l,w;
	
		getdata(){
			cout<<"enter the lengh and with";
			cin>>l>>w;
		}
		
		printdata(){
			cout<<"are of rectangle is :-"<<l*w;
		}
};
int main(){
	rectangal r1;
	r1.getdata();
	r1.printdata();
}
