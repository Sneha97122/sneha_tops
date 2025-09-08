/*Write a C program that takes three numbers from the user and determines: 
o The largest number. 
o The smallest number. 
o Challenge: Solve the problem using both if-else and switch-case statements
*/
#include<stdio.h>
main()
{
	int a,b,c;
	char choise;
	
	printf("\nenter l for larger number");
	printf("\nenter s for smaller number");
	printf("\nenter your choise");
	scanf("%c",&choise);
	
	printf("\n enter the value of a=");
	scanf("%d",&a);
	printf("\n enter the value of b=");
	scanf("%d",&b);
	printf("\n enter the value of c=");
	scanf("%d",&c);
	
	switch(choise){
		case '1':
			if(a>b && a>c){
		printf("\n %d is larger",a);
	}else if(b>a && b>c){
		printf("\n %d is larger",b);
	}else if (c>a && c>b){
		printf("\n %d is larger",c);
	}
		case '2':
		if(a<b && a<c){
		printf("\n %d is smaller",a);
	}else if(b<a && b<c){
		printf("\n %d is smaller",b);
	}else if (c<a && c<b){
		printf("\n %d is smaller",c);
	}

	}
	
	
	
	
}
