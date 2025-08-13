/*Write a C program that takes a string from the user and counts the number of vowels and consonants
 in the string.
 o Challenge:Extend the program to also count digits and special characters.*/
 #include<stdio.h>
main(){
	char str[100];
	int vowals,len,i,count,charr,num;
	printf("\n enter your string=");
	gets(str);
	
	for(i=0;str[i]!='\0';i++){
		if(str[i] =='a' || str[i]=='e' || str[i]=='i' || str[i]=='o'||str[i]=='u'){
			vowals++;
		}
		else if(str[i]=='b'||str[i]=='c'||str[i]=='d'||str[i]=='f'||str[i]=='g'||str[i]=='h'||str[i]=='j'||str[i]=='k'||str[i]=='l'||str[i]=='m'||str[i]=='n'||str[i]=='p'||str[i]=='q'||str[i]=='r'||str[i]=='s'||str[i]=='t'||str[i]=='v'||str[i]=='w'||str[i]=='x'||str[i]=='y'||str[i]=='z'){
			count++;
		}
		else if(str[i]=='!'||str[i]=='@'||str[i]=='#'||str[i]=='$'||str[i]=='.'||str[i]=='&'){
			charr++;
		}
		else if(str[i]=='1'||str[i]=='2'||str[i]=='3'||str[i]=='4'||str[i]=='5'||str[i]=='6'||str[i]=='7'||str[i]=='8'||str[i]=='9'||str[i]=='0'){
			num++;
		}
		
		}
			printf("\ntotal vowals=%d",vowals);
			printf("\ntotal consonents=%d",count);
			printf("\ntotal special charecter is=%d",charr);
			printf("\ntotal number is=%d",num);
			
	}

