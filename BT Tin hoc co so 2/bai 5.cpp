#include <stdio.h>
#include <stdlib.h>

void summaryOfNumbers(float a,float b){
	float sum = a + b;
	printf("Summary = %.2f",sum);
}

void productOfNumbers(float a , float b){
	float product = a * b;
	printf("Product = %.2f",product);
}

void differentOfNumbers(float a , float b){
	float different = a - b;
	printf("Different = %.2f",different);
}


int main(){
	float number1,number2;
	int choice;
	
	printf("Enter number 1: ");
	scanf("%f",&number1);
	printf("Enter number 2: ");
	scanf("%f",&number2);
	
	do{
		printf("\n***********FUNCTIONS***********");
		printf("\n1. Summary of numbers");
		printf("\n2. Product of numbers");
		printf("\n3. Different of numbers");
		printf("\n4. Exit");
		printf("\nPlease choose a function: ");
		scanf("%d",&choice);
		
		switch(choice){
			case 1:
				summaryOfNumbers(number1,number2);
				break;
			case 2:
				productOfNumbers(number1,number2);
				break;
			case 3:
				differentOfNumbers(number1,number2);
				break;
			case 4:
				printf("See you again!!");
				break;
			default:
				printf("Wrong option please choose again!");
				
		}
		
		
	}while(1);
	
	
	
}
