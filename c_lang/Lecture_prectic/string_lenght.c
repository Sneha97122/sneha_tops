#include<stdio.h>
main(){
	char str[20];
	int i;
	printf("\n enter name=");
	gets(str);
	printf("\n str=%s",str);
	while(str[i]!='\0'){
		i++;
	}
	printf("\nlenth of str=%d",i);
	
}
