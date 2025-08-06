/*Write a C program that takes three numbers from the user and determines: 
o The largest number. 
o The smallest number. 
o Challenge: Solve the problem using both if-else and switch-case statements
*/
#include<stdio.h>
int a,b,c;
int larg(){
	if(a>b && a>c){
		printf("\n %d is larger",a);
	}else if(b>a && b>c){
		printf("\n %d is larger",b);
	}else if (c>a && c>b){
		printf("\n %d is larger",c);
	}
}

int smaller(){
	if(a<b && a<c){
		printf("\n %d is smaller",a);
	}else if(b<a && b<c){
		printf("\n %d is smaller",b);
	}else if (c<a && c<b){
		printf("\n %d is smaller",c);
	}
	
}
main()
{
	printf("\n enter value of a");
	scanf("%d",&a);
	printf("\n enter value of b");
	scanf("%d",&b);
	printf("\n enter value of c");
	scanf("%d",&c);
	larg();
	smaller();
	
}
