/*Write a C program that accepts two 2x2 matrices from the user and adds them. Display the resultant matrix. 
o Challenge: Extend the program to work with 3x3 matrices and matrix multiplication.*/
#include<stdio.h>
main(){
	int a2[2][2],b2[2][2],sum[2][2];
	int a3[3][3],b3[3][3],sum3[3][3],mul[3][3];
	int i,j;
	
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("%d %d\t",i,j);
			scanf("%d",&a2[i][j]);
		}
		printf("\n");
	}
	
	printf("enter second matrices value\n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("%d %d\t",i,j);
			scanf("%d",&b2[i][j]);
		}
		printf("\n");
	}
	printf("sum of the matrices\n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			sum[i][j]=a2[i][j]+b2[i][j];
			printf("%d %d %d\t",i,j,sum[i][j]);
		}
		printf("\n");
		
	}
	printf("----------------3*3 matric-----------------\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d %d\t",i,j);
			scanf("%d",&a3[i][j]);
		}
		printf("\n");
	}
	
	printf("enter second matrices value\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d %d\t",i,j);
			scanf("%d",&b3[i][j]);
		}
		printf("\n");
	}
	printf("sum of the matrices\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			sum3[i][j]=a3[i][j]+b3[i][j];
			printf("%d %d %d\t",i,j,sum3[i][j]);
		}
		printf("\n");
		
	}
	
		printf("multiplication of the matrices\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			sum3[i][j]=a3[i][j]*b3[i][j];
			printf("%d %d %d\t",i,j,mul[i][j]);
		}
		printf("\n");
		
	}
	
	
	
	
	
}
