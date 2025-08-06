/*Write a C program that takes N numbers from the user and stores them in an array. 
The program should then calculate and display the sum of all array elements. 
o Challenge: Modify the program to also find the average of the numbers.*/
#include<stdio.h>
main(){
	int a[5],i,sum=0;
	float avg=0;
	for(i=0;i<5;i++){
		printf("\n enter element of array %d=",i+1);
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++){
		printf("\n printing element of array %d",a[i]);
		sum += a[i];
		avg=sum/5;
	}
	printf("\n sum of all number is=%d",sum);
	printf("\n avrag value of the sum is=%.2f",avg);
}
