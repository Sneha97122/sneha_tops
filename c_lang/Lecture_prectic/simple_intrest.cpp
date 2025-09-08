#include<stdio.h>
main()
{
	int p,r,t;
	printf("enter the value of principal = ");
	scanf("%d",&p);
	printf("enter the rate = ");
	scanf("%d",&r);
	printf("enter the time duration = ");
	scanf("%d",&t);
	printf("the simple intrest is=%d",p*r*t/100);
}
