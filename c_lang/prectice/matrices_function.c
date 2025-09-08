#include<stdio.h>
int i,j;
void getarray(int x[2][2]){
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("\n matrices value=%d %d ",i,j);
			scanf("%d",&x[i][j]);
		}
	}
}
void printarray(int a[2][2]){
	printf("\n ==========printing value============\n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("matrices is=%d %d %d\t",i,j,a[i][j]);
		}
		printf("\n");
	}
}
void sum(int a[2][2],int b[2][2],int c[2][2]){
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
				c[i][j]=a[i][j]+b[i][j];
		}
	}
}
main(){
	int a[2][2];
	int b[2][2];
	int c[2][2];
	getarray(a);
	printarray(a);
	getarray(b);
	printarray(b);
	sum(a,b,c);
	printarray(c);	
}
