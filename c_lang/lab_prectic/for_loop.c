 /*Write a C program to print numbers from 1 to 10 using all three types of loops 
(while, for, do-while).*/
#include<stdio.h>
main()
{
	int i;
	printf("\n printing numbers with for loop");
	for(i=1;i<=10;i++){
		printf("\ni=%d",i);
	}
	//while loop
	printf("\n print number with while loop");
	int a=1;
	while(a<=10){
		printf("\na=%d",a);
		a++;
	}	
	//do_while loop
	printf("\n printing number with do-while loop");
	int b=1;
	do{
		printf("\n b=%d",b);
		b++;
	}while(b<=10);
	
}
