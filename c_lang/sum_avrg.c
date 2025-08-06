#include<stdio.h>
main(){
	int start,end,sum,i,count;
	float avrg;
	
	printf("\nenter the value of starting number=");
	scanf("%d",&start);
	
	printf("\nenter the value of ending number=");
	scanf("%d",&end);
	
	for(i=start;i<=end;i++){
		printf("\ni=%d",i);
		sum=sum+i;
		count=end-start+1;
		avrg=sum/count;
		
	}
	printf("\nsum is=%d",sum);
	printf("\navrg=%.2f",avrg);

}
