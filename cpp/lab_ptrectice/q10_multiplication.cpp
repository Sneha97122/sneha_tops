#include<iostream>
using namespace std;
class table{
	public:
		int start,end;
		
		void gettable(){
			cout<<"enter the starting number=";
			cin>>start;
			cout<<"enter the ending number=";
			cin>>end;
			
			for(int i=start;i<=end;i++){
				for(int j=1;j<=10;j++){
					cout<<i<<"x"<<j<<"="<<i*j;
				}
			}
			cout<<"endl";
		}
};

int main(){
	table t1;
	t1.gettable();
	return 0;

}
