#include<iostream>
using namespace std;
class student{
	public:
	int sid;
	string name;
	string email;
	int std;
	
	void getstudentdata(){
		cout<<"\n enter student id and name";
		cin>>sid>>name;
		cout<<"\n enter email and std";
		cin>>email>>std;
	}
	
	void showstudentdata(){
		cout<<"student id="<<sid<<"\t name="<<name;
		cout<<"\nemail="<<email<<"\t std="<<std;
	}
};
int main(){
	student s1,s2;
	s1.getstudentdata();
	s1.showstudentdata();
	cout<<"second data "
	s2.getstudentdata();
	s2.showstudentdata();
}
