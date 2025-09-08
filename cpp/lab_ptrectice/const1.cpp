#include<iostream>
using namespace std;
class teacher{
	private:
	double salary;
	public:
	string name;
	string dept;
	
	teacher(){
		cout<<"defult constructor call";
	}
	
	void setsalary(double s){
		salary=s;
		
	}
	double getsalary(){
		return salary;
	}
	
	
};
int main(){
	teacher t1;
}
