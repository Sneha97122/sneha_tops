#include<iostream>
using namespace std;
class greet{
	public:
	string name;
	int age;
	
	getdata(){
		cout<<"enter your name"<<endl;
		cin>>name;
		
		cout<<"enter yuor age"<<endl;
		cin>>age;
	}
	
	displaydata(){
		cout<<"welcome  "<<name<<endl;
		cout<<"good morning how are you?";
	}
};
int main(){
	greet g1;
	g1.getdata();
	g1.displaydata();
}
