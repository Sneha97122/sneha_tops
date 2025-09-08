/*Q5:- Write a C program that checks whether a given number is a prime number or not using a for loop.
 o Challenge: Modify the program to print all prime numbers between 1 and a given number.
*/
#include<stdio.h>

main()
{
	int num,i,flag=0;
	
	printf("\n enter the value of num=");
	scanf("%d",&num);
	for(i=2;i<=num/2;i++){
		if(num%i==0){
			flag=1;
		}
		
	}
	(flag==0)?printf("\nprime"):printf("\n not prime");
}

