#include<stdio.h>
main(){
	int i,j,start,end;
	printf("\n enter the row");
	scanf("%d",&start);
	printf("\n enter the colum");
	scanf("%d",&end);
	
	for (i=1;i<=start;i++){
		for(j=1;j<=end;j++){
			printf("*");
		}
		printf("\n");
	}

}
