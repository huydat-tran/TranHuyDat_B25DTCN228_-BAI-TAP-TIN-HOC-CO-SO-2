#include <stdio.h>

int main(){
	int age;
	
	printf("Enter your age: ");
	scanf("%d",&age);
	if(age < 12){
		printf("Tre em");
	}else if(age < 18){
		printf("Thanh thieu nien");
	}else if(age < 60){
		printf("Nguoi lon");
			
	}else{
		printf("Nguoi cao tuoi");
	}
}
