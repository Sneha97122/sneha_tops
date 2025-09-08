/*
 Write a C program that acts as a simple calculator. The program should take two numbers 
and an operator as input from the user and perform the respective operation (addition, 
subtraction, multiplication, division, or modulus) using operators. 
• Challenge: Extend the program to handle invalid operator inputs.
*/
#include<stdio.h>
main()
{
	char choies;
	int a,b;
	printf("\npress + for addition ");
	printf("\npress - for subtraction");
	printf("\npress * for  multiplication");
	printf("\npress / for  division ");
	printf("press % for  modulus ");
	
	printf("\nenter your choise=");
	scanf("%c",&choies);
	
	printf("\nenter the value of a=");
	scanf("%d",&a);
	printf("\nenter the value of b=");
	scanf("%d",&b);
	

	
	switch (choies){
		case '+':
			printf("\nthe answer of the addition is=%d",a+b);
			break;
		case '-':
			printf("\nthe answer of the subtraction is=%d",a-b);
			break;
		case '*':
			printf("\nthe answer of the multiplication is=%d",a*b);
			break;
		case '/':
			printf("\nthe answer of the divition is=%d",a/b);
			break;
		case '%':
			printf("\nthe answer of the moduls is=%d",a%b);
			break;
			
		default:
			printf("\nwrong choise");
			
	}
}
