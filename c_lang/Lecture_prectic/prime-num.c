/*find prime number*/
#include<stdio.h>
main(){
	int i,n,flag=0;
	printf("\n enter the value of n=");
	scanf("%d",&n);
	for(i=2;i<=n/2;i++){
		if(n%i==0){
			flag=1;
			break;
		}
	}
	if(flag==0){
		printf("\n prime number");
	}
	else{
		printf("\n not a prime number");
	}
	

}
