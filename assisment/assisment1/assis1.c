#include<stdio.h>
int amount=0,quntity=0,total_amount=0;
char choise,again;
void menu(){
	printf("\nitem name\tprice");
	printf("\n 1.pizza\t180rs");
	printf("\n 2.burger\t100rs");
	printf("\n 3.pasta\t150rs");
	printf("\n 4.lazaniya\t200rs");
	printf("\n 5.cake\t\t250rs");
	
}
void order(){
	printf("\n enter your choise(1-5):");
	scanf(" %c",&choise);
	switch(choise){
		case'1':
			printf("\n you choiss pizza\n");
			printf("\nenter the quntity of pizza=");
			scanf(" %d",&quntity);
			amount=quntity*180;
			total_amount=amount;
			break;
		case'2':
			printf("\n you choiss burger\n");
			printf("\nenter the quntity of burger=");
			scanf(" %d",&quntity);
			amount=quntity*100;
			total_amount=amount;
			break;
		case'3':
			printf("\n you choiss pasta\n");
			printf("\nenter the quntity of pasta=");
			scanf(" %d",&quntity);
			amount=quntity*150;
			total_amount=amount;
			break;
		case'4':
			printf("\n you choiss lazaniya\n");
			printf("\nenter the quntity of lazaniya=");
			scanf(" %d",&quntity);
			amount=quntity*200;
			total_amount=amount;
			break;
		case'5':
			printf("\n you choiss cake\n");
			printf("\nenter the quntity of cake=");
			scanf(" %d",&quntity);
			amount=quntity*250;
			total_amount=amount;
			break;
		default:
			printf("\n wrong choise \n");
			amount=0;
	}
	printf("\n amount of this item is=%d\n",amount);
	total_amount = amount+amount;
	printf("\n total_amount=%d\n",total_amount);
	
}

int main(){	
	do{
		menu();
		order();
		printf("\n do you want to place more oder..y or n ....");
		scanf(" %c",&again);
	}while(again == 'y'|| again == 'Y');
	total_amount=amount+amount;
	printf("\n your total amount=",total_amount);
	printf("\n thank you for ordering");


	
}
