#include<stdio.h>
main(){
	int num,rev=0,rem,stor;
	printf("\n enter thr number=");
	scanf("%d",&num);
	stor=num;
	while(num>0){
		rem=num%10;
		rev=rev*10+rem;
		num=num/10;
}
	printf("\n revers num is=%d",rev);
	
	if(stor==rev){
		printf("\n the number is palindrom");
	}
	else{
		printf("\n number is not palindrom");
	}
}

