/*Write a C program to demonstrate pointer usage. Use a pointer to modify the value of
 a variable and print the result.*/
 #include<stdio.h>
 main()
 {
 	int a=10;
 	int *b=&a;
 	
 	printf("\n value of a is=%d",a);
 	printf("\n value of b is=%d",*b);
 	
 	*b=20;
 	printf("\n valuue of a is=%d",a);
 }
