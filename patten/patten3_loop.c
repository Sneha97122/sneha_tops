#include<stdio.h>
main(){
	int i,j,k;
	for(i=1;i<=5;i++){
		for(j=1;j<=6;j++){
			if((i==1 && j>5)||(i==2 && j>=2 && j<=5)||(i==3)||(i==4 && j>=2 && j<=5)||(i==5 && j>5)){
				printf(" *");
			}
			else{
				printf(" ");
			}
		}
		printf("\n");
	}
}
