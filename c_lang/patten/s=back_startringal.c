#include<stdio.h>
main(){
	int i,j,num;
	printf("\n enter the number=");
	scanf("%d",&num);
	for(i=1;i<=num;i++){
		for(j=num;j>=i;j--){
			printf("*");
		}
		printf("\n");
	}
//	for(i=1;i<=4;i++){
//		for(j=4;j>=i;j--){
//			printf("*");
//		}
//		printf("\n");
//	}
}
