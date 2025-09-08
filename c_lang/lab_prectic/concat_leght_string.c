/* Write a C program that takes two strings from the user and concatenates them 
using strcat(). Display the concatenated string and its length using 
strlen().*/
#include<stdio.h>
#include<string.h>
main(){
	char str1[20],str2[20];
	int len;
	
	printf("\n enter the first string=");
	gets(str1);
	
	printf("\n enter the second string=");
	gets(str2);
	
	strcat(str1,str2);
	printf("\n concatenates of string=%s",str1);
	
	len=strlen(str1);
	printf("\n lenth of the string is=%d",len);
}
