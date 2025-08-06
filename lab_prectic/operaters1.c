#include<stdio.h>
main(){
	int a,b;
	printf("\n enter the value of a=");
	scanf("%d",&a);
	printf("\n enter the value of b=");
	scanf("%d",&b);
	printf("\n-------------------------------");
	printf("\narathmentic operatores");
	printf("\n-------------------------------");
	printf("\n addition of a and b is=%d",a+b);
	printf("\n subtration of a and b is=%d",a-b);
	printf("\n multiplication of a and b is=%d",a*b);
	printf("\n diverstion of a and b is=%d",a/b);
	printf("\n module of a and b is=%d",a%b);
	printf("\n-------------------------------");
	printf("\nRelational operatores");
	printf("\n-------------------------------");
	if(a==b){
		printf("\nA B are equal");
	}
	
	 if(a!=b){
		printf("\nA B are not equal");
	}
	
	 if(a>b){
		printf("\na gretr b");
	}
	
	 if(a<b){
		printf("\nA lessthan B");
	}
	
	 if(a<=b){
		printf("\nA lessthan or equal B ");
	}
	
	 if(a>=b){
		printf("\nA greter and equal B ");
	}
	printf("\n-------------------------------");
	printf("\nlogical operatores");
	printf("\n-------------------------------");
	if(a==b && b==a){
		printf("\nboth value is same");
	}
	else{
	printf("\nboth value is diffrent");
}
	if(a%2==0 || b%2==0){
		printf("\n value is even");
	}
	else{
		printf("\n value is odd");
	}
	if(!a>b){
		printf("\nvalue is not right");
}
