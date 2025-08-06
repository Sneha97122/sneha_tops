#include<stdio.h>
main(){
	int a[10];
	int i,j,temp;
	for(i=0;i<10;i++){
		printf("enter element of a[%d]=",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++){
		for(j=i+1;j<10;j++){
			if(a[i]>a[j]){
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
			}
		}
	}
	for(i=0;i<10;i++){
		printf("\n eliment of array a[%d] is a=%d",i,a[i]);
	}
}
