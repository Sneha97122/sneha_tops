/*Q6:- Write a C program that takes an integer input from the user and prints its multiplication table 
using a for loop. 
o Challenge: Allow the user to input the range of the multiplication table (e.g., from 1 to N).*/
#include<stdio.h>
main()
{
	int start,end,i;
	printf("\n enter the starting number");
	scanf("%d",&start);
		printf("\n enter the ending number");
	scanf("%d",&end);
	
	for(i=1;i<=end;i++){
		printf("\n %d*%d=%d",start,i,start*i);
	}
}
