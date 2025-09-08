#include<stdio.h>
main()
{
	int a[5],i;
	for(i=0;i<5;i++){
		printf("\n enter elements of array=");
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++){
		if(a[i]%2 !=0){
			printf("\n %d number is odd",a[i]);
		}
	}
}

