#include<stdio.h>
main()
{
	int num,rem,rev=0,sum=0;
	printf("\n Enter the number=");
	scanf("%d",&num);
	while(num>0){
		rem=num%10;
		rev=rev*10+rem;
		num=num/10;
		sum+=rem;
		
	}
	printf("\n revers number is=%d ",rev);
//		printf("\nsum=%d",sum);
}
