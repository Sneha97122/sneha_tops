#include<stdio.h>
int main(){
	int enroll;
	char name[20];
	FILE*fp;
//	fp=fopen("snehadata.csv","a");
//	printf("enter eroll_number nad name=");
//	scanf("%d %s",&enroll,name);
//	fprintf(fp,"%d,%s\n",enroll,name);
	fp=fopen("snehadata.csv","r");
	while((ch==fgetc(fp))!=EOF){
	if(ch==","){
		printf("\t");
		continue;
	}
	printf("%c",ch);
}	
	fclose(fp);
	return 0;
}
