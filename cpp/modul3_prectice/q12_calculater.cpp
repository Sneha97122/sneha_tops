#include<iostream>
using namespace std;
float num1,num2;
float add(float num1, float num2){
	return num1+num2;
}

float subtriction(float num1, float num2){
	return num1-num2;
}

float multiplication(float num1, float num2){
	return num1*num2;
}

float diversion(float num1, float num2){
	return num1/num2;
}

int main(){
	float num1,num2;
	int choise;
	
	cout<<"enter 1st number value=";
	cin>>num1;
	cout<<"enter 2nd number value=";
	cin>>num2;
	
	cout<<"1. addition 2.subtration 3.multiplication 4.diversion"<<endl;
	cout<<"enter your coise=";
	cin>>choise;
	
	switch (choise){
		case 1:
			cout<<"answer of the addition is="<< add(num1,num2)<<endl;
			break;
		case 2:
			cout<<"answer of the subtriction is="<< subtriction(num1,num2)<<endl;
			break;
		case 3:
			cout<<"answer of the multiplication is="<< multiplication(num1,num2)<<endl;
			break;
		case 4:
			cout<<"answer of the diversion is="<< diversion(num1,num2)<<endl;
			break;
		default:
			cout<<"wrong choise";
			break;
	}
}
