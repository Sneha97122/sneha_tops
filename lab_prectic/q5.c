/*:- Write a C program to check if a number is even or odd using an if-else statement. 
Extend the program using a switch statement to display the month name based on the
 user's input (1 for January, 2 for February, etc.).*/
 #include<stdio.h>
 main(){
 	
 	char ch;
 	
 	printf("\n press 1 for ");
 	printf("\n press 2 for ");
 	printf("\n press 3 for ");
 	printf("\n press 4 for ");
 	printf("\n press 5 for ");
 	printf("\n press 6 for ");
 	printf("\n press 7 for ");
 	printf("\n press 8 for ");
 	printf("\n press 9 for ");
 	printf("\n press 10 for ");
 	printf("\n press 11 for ");
 	printf("\n press 12 for ");
 	
 	printf("\n enter the number= ");
 	scanf("%c",&ch);
 	if(ch%2==0){
 		printf("the enter number is even");
	 }
	 else{
	 	printf("the enter number is odd");
	 }
	 
	switch (ch){
		case '1':
			printf("\n your choise month is january");
			break;
		case '2':
			printf("\n your choise month is february");
			break;
		case '3':
			printf("\n your choise month is march");
			break;
		case '4':
			printf("\n your choise month is april");
			break;
		case '5':
			printf("\n your choise month is may");
			break;
		case '6':
			printf("\n your choise month is june");
			break;
		case '7':
			printf("\n your choise month is july");
			break;
		case '8':
			printf("\n your choise month is august");
			break;
		case '9':
			printf("\n your choise month is sep");
			break;
		case '10':
			printf("\n your choise month is oct");
			break;
		case '11':
			printf("\n your choise month is nov");
			break;
		case '12':
			printf("\n your choise month is dec");
			break;
	}
		
	}
	 		
 
