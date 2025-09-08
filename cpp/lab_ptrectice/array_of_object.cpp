#include<iostream>
using namespace std;
class book{
	public:
	int bid;
	string bookname;
	string author;
	float price;
	
	
	void getbookdetail(){
		cout<<"\n enter book id and book name";
		cin>>bid>>bookname;
		cout<<"\n enter book author name and book price";
		cin>>author>>price;
	}
	
	void showbookdetails(){
		cout<<"\n bookid="<<bid<<"\t book name="<<bookname;
		cout<<"\n author name="<<author<<"\t price="<<price;
	}
};

int main(){
	int i;
	book book[3];
	for(i=0;i<3;i++){
		cout<<"\n enter book details"<<i+1<<"\n \n";
		book[i].getbookdetail();
	}
	
	for(i=0;i<3;i++){
		cout<<"\n show book details"<<i+1<<"\n \n";
		book[i].showbookdetails();
	}
}
