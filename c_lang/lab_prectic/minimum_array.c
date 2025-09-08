/*Write a C program that accepts 10 integers from the user and stores them in an array. 
The program should then find and print the maximum and minimum values in the array. 
o Challenge: Extend the program to sort the array in ascending order.*/
#include<stdio.h>
main()
{
	int a[10],i,min=0;
	for(i=0;i<10;i++){
		printf("\n enter the elemnts of arraynumber %d=",i+1);
		scanf("%d",&a[i]);
	}
	min=a[0];
	for(i=0;i<10;i++){
		if(a[i]<min){
		min=a[0];
		}
	}
	printf("\n minimum value is %d",min);
}
