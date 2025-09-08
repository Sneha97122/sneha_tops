#include<stdio.h>
main(){
	int i,n,fact=1;
	printf("\n enter the number=");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		fact=fact*i;
		printf("\nfactorial number is=%d",fact);
	}

}
/*fact=fact*i
fact=1*1=1
fact=1*2=2
fact=2*3=6
fact=6*4=24
fact=24*5=120
*/
