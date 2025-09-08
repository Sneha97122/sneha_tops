/*Write a C program that includes variables, constants, and comments.
 Declare and use different data types (int, char, float) and display their values.*/
#include<stdio.h>
main()
{
	int a=10,d=30,r=40;
	float b=20.21;
//	char c="a";
	const float pi=3.14;
	
	printf("\nvalue of a is=%d",a);
	printf("\nvalue of b is=%f",b);
	printf("\nvalue of pi is=%d",pi);
//	printf("\n value of c is=%c",c);
	
	//lest's count the sum of the number
	printf("\nvalue of a and d is=%d",a+d);
	
	/* count value of pi
	also add r in variable 
	*/
	printf("\n answe is=%.2f",pi*r*r);
	
	
	
}
