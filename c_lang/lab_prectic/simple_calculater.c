/*:- Write a C program that acts as a simple calculator. The program should take two numbers and an operator as 
input from the user and perform the respective operation (addition, subtraction, multiplication, division, or modulus)
 using operators.the program to handle invalid operator inputs.*/
 
 #include<stdio.h>
int main()
{
    char c;
    int a,b;

    printf("\npress + for addition");
    printf("\npress - for subtiction");
    printf("\npress * for multiplication");
    printf("\npress / for diverstion");
    printf("\npress % for moduls");

    printf("\nenter your choise");
    scanf("%c",&c);

    printf("\nenter the value of a=");
    scanf("%d",&a);
    printf("\nenter the value of b=");
    scanf("%d",&b);

    switch (c)
    {
    case '+':
        printf("the anser of the addition is=%d",a+b);
        break;
    case '-':
        printf("the anser of the subction is=%d",a-b);
        break;
    case '*':
        printf("the anser of the multiplication is=%d",a*b);
        break;
    case '/':
        printf("the anser of the diverstion is=%d",a/b);
        break;
    
    case '%':
        printf("the anser of the modules is=%d",a%b);
        break;
    default:
        printf("wrong choise");
        break;
    }


}
