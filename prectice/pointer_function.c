/*swaping number with pointer and function*/
#include<stdio.h>
int *a,*b,*c;
int swap(){
	*&c=*&a;
	*&a=*&b;
	*&b=*&c;
}
main(){
	printf("\n enter value of a=");
	scanf("%d",&a);
	printf("\n enter value of b=");
	scanf("%d",&b);
	swap();
	printf("\n value a=%d",*&a);
	printf("\n value b=%d",*&b);
	
}
