#include<stdio.h>
main()
{
	int i,j;
	char ch='0';
	for(i=0;i<=5;i++){
		for(j=0;j<=i;j++){
			printf("%c",'0'+j);
		}
		printf("\n");
	}
}
