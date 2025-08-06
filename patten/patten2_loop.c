#include<stdio.h>
main(){
	int i,j,k;
	for(i=1;i<=9;i++){
		for(j=1;j<=9;j++){
			if((i==6)||(i==5 && j>=4 && j<=9)||(i==4 && j>=5 && j<=9)||(i==3 &&j>=6 && j<=9)||(i==2 && j>=8 && j<=9)||(i==1 &&j>=9&&j<=9)){
				printf("* ");
			}
			else{
				printf(" ");
			}
		}
		printf("\n");
	}
}
