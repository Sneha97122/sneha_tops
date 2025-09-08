#include<iostream>
using namespace std;
class marks{

	public:
	string name;
	string roll_num;
	int english,hindi,science,maths;
	float total;
	float persentage;

	
	void getdata(){
		cout<<"enter student name:-";
		cin>>name;
		cout<<"enter student roll_number:-";
		cin>>roll_num;
		cout<<"enter student english marks:-";
		cin>>english;
		cout<<"enter student hindi marks:-";
		cin>>hindi;
		cout<<"enter student science marks:-";
		cin>>science;
		cout<<"enter student maths marks:-";
		cin>>maths;
		total=english+hindi+science+maths;
		cout<<"total marks is="<<total<<endl;
	}
		
	void getgread(){
		persentage=total * 100 / 400.0;
		cout<<"your persantage is="<<persentage<<endl;
		
		 if (persentage >= 90 && persentage <= 100) {
            cout << "Grade: A" << endl;
        } else if (persentage >= 80) {
            cout << "Grade: B" << endl;
        } else if (persentage >= 70) {
            cout << "Grade: C" << endl;
        } else if (persentage >= 60) {
            cout << "Grade: D" << endl;
        } else if (persentage >= 40) {
            cout << "Grade: E" << endl;
        } else {
            cout << "Fail! Please try next year." << endl;
        }
    }
};

int main(){
	marks m1;
	m1.getdata();
	m1.getgread();
	return 0;
}

