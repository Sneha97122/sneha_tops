#include<iostream>
using namespace std;
class rectengal{
	public:
		float leght;
		float widht;
		
	float area(){
		return leght*widht;
	}
	
	float perimeter(){
		return 2*(leght+widht);
	}
};
int main(){
	rectengal r1;
	cout<<"\n enter the value of leght and with";
	cin>>r1.leght>>r1.widht;
	cout<<"area"<<r1.area()<<endl;
	cout<<"area"<<r1.perimeter()<<endl;
}

