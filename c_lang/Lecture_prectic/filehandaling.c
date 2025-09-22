#include<stdio.h>
int main(){
	FILE*file=fopen("data.txt","w");
	if(file==" "){
		printf("hello world");
		fclose(file);
	}
}
