#include<stdio.h>
main(){
	int marks[5],i;
	printf("enter your marks=\n");
//	scanf("%d",&marks[0]);
//	scanf("%d",&marks[1]);
//	scanf("%d",&marks[2]);
//	scanf("%d",&marks[3]);
//	scanf("%d",&marks[4]);
for( i=0;i<5;i++){
	scanf("%d",&marks[i]);

}
for(i=0;i<5;i++){
	printf("value of marks at index %d is %d\n",i,marks[i]);
}

}
