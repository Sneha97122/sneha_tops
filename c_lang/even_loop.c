#include<stdio.h>
main(){
	int i,start,end;
	
	printf("\nenter the value of starting number=");
	scanf("%d",&start);
	
	printf("\nenter the value of ending number=");
	scanf("%d",&end);

	for(i=start;i<=end;i++){
		for(i ;i%2==0;i++){
			printf("\neven num=%d",i);
		}

	}
		
}

