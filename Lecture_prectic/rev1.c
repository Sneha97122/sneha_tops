#include<stdio.h>
char rev[100],str[100];
int i,j,len;
void revstring(){
	for(i=0;rev!='\0';i++){
		len++;
	}
	for(i=len-1,j=0;i>=0;j++,i--){
		rev[j]=str[i];
	}
	printf("\n revers string=",rev);
}

main(){
	char str[100];
	printf("\n enter a string =",str);
	gets(str);
	revstring();
}
