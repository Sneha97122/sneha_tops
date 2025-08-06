#include<stdio.h>
main()
{
	int i,j,k;
	for(i=1;i<=7;i++){
//		for(k=4;k>=i;k--)
		for(j=0;j<=5;j++){
			if((i==1 && j<=5) ||(i<=3 && j<=0 && j<=4)||(i==4 && j<=5)||(i>=5 && j>=5)||(i==7 && j<=5)){
				printf("*");
			}
			else{
				printf(" ");
			}
		}
		printf("\n");
	}
}
