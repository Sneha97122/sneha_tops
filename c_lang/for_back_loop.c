#include<stdio.h>
main()
{
	int start,end,i;
	char choise;
	
	printf("\nenter 1 for forwad loop");
	printf("\nenter 2 for forwad loop");
	
	printf("\nenter your choise=");
	scanf("%c",&choise);
	
	printf("\nenter the value of starting number=");
	scanf("%d",&start);
	
	printf("\nenter the value of ending number=");
	scanf("%d",&end);
	

	
	switch(choise){
		case '1':
			for(i=start;i<=end;i++){
			
			printf("\nforwod loop%d",i);
		}
			break;
		case '2':
			for(i=end;i>=start;i--){
			
			printf("\nbackword loop%d",i);
		}
			break;
		default:
			printf("\nwrong choise");
			break;
	
	}
	

}
