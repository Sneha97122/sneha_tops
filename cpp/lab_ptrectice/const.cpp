#include<iostream>
using namespace std;
class person{
	public:
	int pid;
	char pname[20];
	char email[20];
	
	person(){
		cout<<"constructor is call\n";
	}
	void getdata(){
		cout<<"enter person id name and email";
		cin>>pid>>pname>>email;
	}
};
int main(){
	person p1;
	p1.getdata();
}
