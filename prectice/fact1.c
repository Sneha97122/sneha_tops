/*Q12:- Write a C program that calculates the factorial of a given number using a function.
 o Challenge: Implement both an iterative and a recursive version of the factorial function
  and compare their performance for large numbers.*/
  #include<stdio.h>
  int i,fact=1,num;
  int factfind(){
  	for(i=1;i<=num;i++){
  	fact=fact*i;
  }
  	
  	
  }
  main(){
  	printf("\n enter the value of number");
  	scanf("%d",num);
  		factfind();
	  printf("\n fact is=%d",fact);
  
  	
  }
