/*Q2:- Write a C program that takes an integer from the user and checks the following using different operators: 
 Whether the number is even or odd. 
 Whether the number is positive, negative, or zero. 
 Whether the number is a multiple of both 3 and 5.
*/
#include<stdio.h>
main()
{
	int a;
	printf("\n enter the value of a=");
	scanf("%d",&a);

	if(a%2==0){
		printf("\n given number is even");
	}
	else{
		printf("\n given number is odd");
	}
	



		if(a > 0){
		printf("\n the value is positive");
	}else if(a<0){
		printf("\n the value is negitive");
	}
	else{
		printf("\n value is zero");
	}	



		if(a%3==0 && a%5==0){
		printf("\n the number is a multiple of both 3 and 5");
	}
	else{
		printf("\n the number is not multiple of both 3 and 5");
	}	
		
}


