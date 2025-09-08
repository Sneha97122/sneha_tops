#include<stdio.h>
main()
{
	float cp,sp;
	printf("enter the value of cost price=");
	scanf("%f",&cp);
	printf("\nenter the value of seling price=");
	scanf("%f",&sp);
	if(sp>cp){
		printf("\nprofit and profit value is=%f",sp-cp);
	}
	else{
		printf("\nloss and loss value is=%f",cp-sp);
	}
}
