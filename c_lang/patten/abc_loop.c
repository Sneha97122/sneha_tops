#include<stdio.h>
main(){
	int i,j;
	char ch='A';
	for(i=0;i<=5;i++){
		for(j=0;j<=i;j++){
			printf("%c",ch);
		}
		ch++;
		printf("\n");
	}
}



