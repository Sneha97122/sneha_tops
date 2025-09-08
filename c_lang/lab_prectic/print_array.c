#include<stdio.h>
main(){
	int a[5],i;
	for(i=0;i<5;i++){
		printf("\n enter the element of arry %d=",i+1);
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++){
		printf("\n elemnt of array is=%d",a[i]);
	}
}
