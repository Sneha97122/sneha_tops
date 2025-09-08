#include<iostream>
using namespace std;
class product{
	public:
	int p_id;
	string p_name;
	float price;
	string dicription;
	
	void getProductDetail(){
		cout<<"\n enter product id and product name\n";
		cin>>p_id>>p_name;
		cout<<"\n enter price and dicription\n";
		cin>>price>>dicription;
	}
	
	void showProductDetail(){
		cout<<" product id="<<p_name<<"\t product name="<<p_name;
		cout<<"\nprice="<<price<<"\t dicription="<<dicription<<"\n";
	}
};
int main(){
	int i;
	product product[1];
	for(i=0;i<1;i++){
		cout<<"\n enter product details="<<i+1<<"\n";
		product[i].getProductDetail();
	}
	
	for(i=0;i<1;i++){
		cout<<"\n show prodct details="<<i+1<<"\n \n";
		product[i].showProductDetail();
			}

}
