#include<stdio.h>
main()
{
	int a,b,c,d;
	printf("enter the value of a=");
	scanf("%d",&a);
	printf("enter the value of b=");
	scanf("%d",&b);
	printf("enter the value of c=");
	scanf("%d",&c);
	printf("enter the value of d=");
	scanf("%d",&d);
	if(a>b){
		printf("the value of a is maximum=%d",a);
	}
	else if(b>c){
		printf("the value of b is maximum=%d",b);
	}
	else if(c>d){
		printf("the value of c is maximum=%d",c);
	}
	else if(d>a,b,c){
		printf("the value of d is maximum=%d",d);
	}
	else{
		printf("all numbers are same");
	}
}
