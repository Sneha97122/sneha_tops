#include<stdio.h>
main(){
	int num,i,j;
	printf("\n enter the num");
	scanf("%d",&row);
	for(i=1;i<=num;i++){
		for(j=1;j<=i;j++){
			printf("*");
		}
		printf("\n");
	}
}
