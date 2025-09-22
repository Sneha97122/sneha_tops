  #include<iostream>
using namespace std;
class student{
	public:
	int rno;
	char name[20];
	char email[20];
	
	void getdata(){
		cout<<"enter the roll number name and eamil"<<endl;
		cin>>rno>>name>>email;
	}
	
	void dispaly(){
		cout<<"roll_number="<<rno<<endl;
		cout<<"name="<<name<<endl;
		cout<<"email="<<email<<endl;
		
	}
};
int main(){
	student s1;
	s1.getdata();
	s1.dispaly();
}
