/*:- Write a C program that calculates the factorial of a given number using a function. 
• Challenge: Implement both an iterative and a recursive version of the factorial function and 
compare their performance for large numbers.*/
#include <stdio.h>
int factorial(int n) {
    if (n <= 1)
        return 1; 
    else
        return n * factorial(n - 1); 
}
int factorial1(int n) {
    int fact = 1;
    int i;
    for( i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

 main() {
    int num;
    int result;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        result = factorial(num);
        printf("Factorial of %d is %llu\n", num, result);
    }
    
    if(num<0){
    	 printf("Factorial is not defined for negative numbers.\n");
	}else{
		result=factorial1(num);
		printf("Factorial of %d is %llu\n", num, result);
		
	}

}


