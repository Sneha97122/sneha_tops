#include<iostream>
using namespace std;
class teacher{
	private:
		float salary;	
	public:
	string name;
	string dept;
	string sub;
	
	void changedepartment(string newdept){
		dept=newdept;
		
	}
	
	void getdata(){
		cout<<"enter teacer name :-"<<endl;
		cin>>name;
		cout<<"enter teacer department:-"<<endl; 
		cin>>dept;
		cout<<"enter teacer subject:-"<<endl;
		cin>>sub;
		cout<<"enter teacer salary:-"<<endl;
		cin>>salary;
	}
	
	void display(){
		cout<<"name="<<name<<endl;
		cout<<"dept="<<dept<<endl;
		cout<<"sub="<<sub<<endl;
		cout<<"salary="<<salary<<endl;
	}
};

int main(){
		teacher t1;
	teacher teacher[3];
	t1.getdata();
	t1.display();

}
