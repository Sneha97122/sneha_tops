#include<stdio.h>
void print(){
	printf("hello sneha it's your function which is made by you");
}
int sum(int a,int b){
	return a+b;
}
int main(){
	print();
	int x,y;
	int result;
	result=sum(3,5);
	printf("\nresult is=%d",result);
}
