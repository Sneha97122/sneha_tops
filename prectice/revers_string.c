#include<stdio.h>
main(){
	char str[20];
	int rem=0,rev=0;
	printf("\n enter the string=");
	gets(str);
	while(str!=0){
		rem=str%10;
		rev=rev*10+rem;
		str=str/10;
	}
	printf("revers string is=%s",rev);
	
}
