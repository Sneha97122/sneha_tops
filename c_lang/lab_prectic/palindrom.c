#include<stdio.h>
main(){
	int num,rev=0,rem=0,orignal=0;
	printf("\n enter the nmuber=");
	scanf("%d",&num);
	orignal=num;
	while(num>0){
		rem=num%10;
		rev=rev*10+rem;
		num=num/10;
	}
	printf("\n revers num is=%d",rev);	
	if(rev == orignal){
		printf("\n the number is palindram");
	}
	else{
		printf("\n number is not palindrom");
	}
}
