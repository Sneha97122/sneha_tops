#include<stdio.h>
main(){
	int a,b,c;
	printf("\n enter vlaue of a=");
	scanf("%d",&a);
	printf("\n enter vlaue of b=");
	scanf("%d",&b);
	printf("\n enter vlaue of c=");
	scanf("%d",&c);
	if(a>b && a>c){
		printf("\n %d is greter value",a);
	}
	else if(b>a && b>c)
	{
		printf("\n %d is greter value",b);
	}else if(c>a && c>b){
		printf("\n %d is greter value",c);
	}else
	{
		printf("all are same");
	}
	
}
