#include<stdio.h>
main(){
	int i,j;
		for(i=1;i<=5;i++){
			for(j=1;j<=9;j++){
				if((i==1 && j<=9)||(i==2 && j<=4 && j<=5)){
			
			   printf(" * ");
		    }
		else{
			printf(" ");
			}
			}
			printf("\n");
		}
}
		

