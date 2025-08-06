/*Write a C program that calculates the factorial of a number using a function. 
Include function declaration, definition, and call. */
#include<stdio.h>
int factorial(int num){
	if(num==1){
		return 1;
	}
	int f=num*factorial(num-1);
	return f;
}
main(){
	printf("\n factorial number is=%d",factorial(5));
}  /*
	5!=5*4*3*2*1=120
	f=5*
*/
