#include<stdio.h>
int main(){
	int n1;
	float n2=3.5;
	//aoutomatic type conversion
	n1=n2;
	printf("n1=%d",n1);
	//manuali type conversion
	float n3=(float)n1;
	printf("n1=%f",n1);
}
