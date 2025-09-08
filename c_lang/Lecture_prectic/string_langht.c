#include<stdio.h>
main()
{
	char str[100],rev[100];
	int i,j,len=0;
	
	printf("\n enter the string=");
	gets(str);
	
	for(i=0;str[i]!='\0';i++){
		len++;
	}
	printf("lenth of this=%d",len);
	for(i=len-1,j=0;i>=0;i--,j++){
		rev[j]=str[i];
	}
	printf("\n revers string=%s",rev);
}

