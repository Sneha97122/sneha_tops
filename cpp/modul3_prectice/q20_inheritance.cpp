#include<iostream>
using namespace std;
class person{
	public:
	string name;
	int age;
	
	void getdata(){
		cout<<"enter person name="<<endl;
		cin>>name;
		cout<<"enter person age="<<endl;
		cin>>age;
		
	}
	
	void displaydata(){
		cout<<"name:-"<<name<<endl;
		cout<<"age:-"<<age<<endl;
	}
};
class student:public  person{
	public:
	int std;
	string course;
	int rollnum;
	void getstudentdata(){
		getdata();
		cout<<"enter your standerd="<<endl;
		cin>>std;
		cout<<"enter your cours="<<endl;
		cin>>course;
		cout<<"enter your roll number="<<endl;
		cin>>rollnum;
		
	}
	
	void displaystudentdata(){
		displaydata();
		cout<<"standerd:-"<<std<<endl;
		cout<<"course:-"<<course<<endl;
		cout<<"rollnumber:-"<<rollnum<<endl;
		
	}	
	
};

class teacher:public person{
	public:
	string department;
	double salary;
	
	void getteacherdata(){
		getdata();
		cout<<"enter teacher department="<<endl;
		cin>>department;
		cout<<"enter teacher salary="<<endl;
		cin>>salary;
		
	}
	
	void displayteatcherdata(){
		displaydata();
		cout<<"department:-"<<department<<endl;
		cout<<"salary:-"<<salary<<endl;
		
	}
	
};
	
int main(){
	student s1;
	s1.getstudentdata();
	s1.displaystudentdata();
	
	teacher t1;
	t1.getteacherdata();
	t1.displayteatcherdata();
}
