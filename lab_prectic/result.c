/*Q3:- Write a C program that takes the marks of a student as input and displays the corresponding grade based on the following conditions:
o Marks > 90: Grade A
o Marks > 75 and <= 90: Grade B
o Marks > 50 and <= 75: Grade C 
o Marks <= 50: Grade D 
o Use if-else or switch statements for the decision-making process.
*/
#include<stdio.h>
void main()
{

	int java,python,c,cc,english,total,persentage;
		printf("\n enter marks of java=");
		scanf("%d",&java);
				printf("\n enter marks of python=");
		scanf("%d",&python);
				printf("\n enter marks of c=");
		scanf("%d",&c);
				printf("\n enter marks of cc=");
		scanf("%d",&cc);
				printf("\n enter marks of english=");
		scanf("%d",&english);
		
		total=java+python+c+cc+english;
        printf("\n total is=%d",total);
        persentage=(total*100)/250;
        printf("\n persentage is=%d",persentage);
		
		if( persentage > 90){
			printf("\n your grade is A");
		}else if(persentage > 75 && persentage <= 90){
            printf("\n grad B");
        }else if(persentage >50 && persentage <=75){
            printf("\n grad C ");
        }else if (persentage >35 && persentage<=50){
            printf("\n grad D");
        }
        else{
            printf("\n you are faile");
        }
		
}

