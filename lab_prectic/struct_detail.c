/* Write a C program that defines a structure to store a student's details (name, 
roll number, and marks). Use an array of structures to store details of 3 
students and print them. */
#include<stdio.h>
char name[50];
int roll_num,marks;
struct student{
	char name[50];
	int roll_num,marks;
};
main(){
	struct student s1[3];
	int i;
	
	for(i=0;i<3;i++){
		printf("enter details of students %d\n",i+1);
		printf("name=");
		scanf("%s",s1[i].name);
		
		printf("roll_num=");
		scanf("%d",&s1[i].roll_num);
		
		printf("marks=");
		scanf("%d",&s1[i].marks);
	}
	
	for(i=0;i<3;i++){
		printf("\nstudents detail output%d\n",i+1);
		printf("\nname=%s",s1[i].name);
		printf("\nroll_num=%d",s1[i].roll_num);
		printf("\nmarks=%d",s1[i].marks);
		
	}
}
