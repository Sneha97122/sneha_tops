#include<stdio.h>
/*logic
x1=0 x2=1

ans=x1+x2
ans=0+1=1

x1=x2
x2=ans
x1=1
x2=1
ans=x1+x2=2
*/
main(){
	int x1=0,x2=1,i,ans,sum;
	for(i=1;i<=10;i++){
		ans=x1+x2;//1+1;1+2;3+2;3+5
		printf("\n fibonacci serice is=%d",ans);//1,2,3,5,8
		x1=x2;//1 |1|2|3
		x2=ans;//1|2|3|5
		sum+=ans;
	}


}
