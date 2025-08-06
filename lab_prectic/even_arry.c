#include<stdio.h>
main(){
//	int num;
	int a[5],i,n=5;
	for(i=1;i<n;i++){
	printf("\n enter the elementes of array=");
	scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		if(a[i]%2==0){
			printf("\n %d number is even",a[i]);
		}
	}
}
