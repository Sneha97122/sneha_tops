/*swapping number with function*/
#include<stdio.h>
int a,b,c;
int swap(){
	c=a;
	a=b;
	b=c;
}
main(){
	int a,b,c;
	printf("\n enter the value of a=");
	scanf("%d",&a);
	printf("\n enter the value of b=");
	scanf("%d",&b);
	swap();
//	c=a;//12
//	a=b;//14
//	b=c;//12
	
	printf("\n value of a=%d",a);
	printf("\n value of b=%d",b);
	
	
}
