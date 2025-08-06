#include<stdio.h>
main()
{
	int i,j;
	char ch='0';
	for(i=1;i<=4;i++){
		for(j=1;j<=i;j++){
			printf("%c",ch);
			ch++;
		}
		printf("\n");
	}
}
